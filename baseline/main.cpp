#include <iostream>
#include <string>
// #include "main.h"
extern "C" {
#include <bgpstream.h>
}

struct PrefixNode {
  int asn;
  PrefixNode *zero;
  PrefixNode *one;
}

int main(int argc, char* argv[]) {
  if (argc < 3) {
    std::cerr << "Usage: TODO" << std::endl;
  }

  std::string rib_path = argv[1];
  std::string updates_path = argv[2];

  bgpstream_t *bs = bgpstream_create();

  if (!bs) {
    std::cerr << "Failed to create bgpstream." << std::endl;
    exit(1);
  }

  bgpstream_set_data_interface(bs, BGPSTREAM_DATA_INTERFACE_SINGLEFILE);
  // bgpstream_add_recent_item(bs, BGPSTREAM_DATA_INTERFACE_SINGLEFILE,
  // updates_path.c_str()); bgpstream_add_recent_item(bs,
  // BGPSTREAM_DATA_INTERFACE_SINGLEFILE, rib_path.c_str());

  bgpstream_data_interface_id_t id =
      bgpstream_get_data_interface_id_t_by_name("singlefile");
  bgpstream_data_interface_option_t *rib_opt =
      bgpstream_get_data_interface_option_by_name(id, "rib-file");
  bgpstream_set_data_interface_option(bs, rib_opt, argv[1]);

  std::cout << "Initialized bgpstream." << std::endl;

  bgpstream_destroy(bs);
  return 0;
}
