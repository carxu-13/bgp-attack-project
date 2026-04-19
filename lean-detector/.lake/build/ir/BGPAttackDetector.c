// Lean compiler output
// Module: BGPAttackDetector
// Imports: public import Init public import BGPAttackDetector.Basic public import Std.Tactic.BVDecide public import Std.Time
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqIPAddress_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqIPAddress_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqIPAddress(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqIPAddress___boxed(lean_object*, lean_object*);
static const lean_string_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__0 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__0_value;
static const lean_string_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "net1"};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__1 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__1_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__1_value)}};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__2 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__2_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__2_value)}};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__3 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__3_value;
static const lean_string_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__4 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__4_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__4_value)}};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__5 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__5_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__3_value),((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__5_value)}};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__6 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__6_value;
lean_object* lean_nat_to_int(lean_object*);
static lean_once_cell_t lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__7;
static const lean_string_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__8 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__8_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__8_value)}};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__9 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__9_value;
static const lean_string_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "net2"};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__10 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__10_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__10_value)}};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__11 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__11_value;
static const lean_string_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "host1"};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__12 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__12_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__12_value)}};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__13 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__13_value;
static lean_once_cell_t lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__14;
static const lean_string_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "host2"};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__15 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__15_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__15_value)}};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__16 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__16_value;
static const lean_string_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__17 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__17_value;
lean_object* lean_string_length(lean_object*);
static lean_once_cell_t lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__18;
static lean_once_cell_t lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19;
static const lean_ctor_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__0_value)}};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__20 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__20_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__17_value)}};
static const lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__21 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__21_value;
lean_object* l_BitVec_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprIPAddress_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_BGPAttackDetector_instReprIPAddress___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_BGPAttackDetector_instReprIPAddress_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_BGPAttackDetector_instReprIPAddress___closed__0 = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress___closed__0_value;
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_instReprIPAddress = (const lean_object*)&lp_BGPAttackDetector_instReprIPAddress___closed__0_value;
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqSubnet_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqSubnet_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqSubnet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqSubnet___boxed(lean_object*, lean_object*);
static const lean_string_object lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ip"};
static const lean_object* lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__0 = (const lean_object*)&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__0_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__0_value)}};
static const lean_object* lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__1 = (const lean_object*)&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__1_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__1_value)}};
static const lean_object* lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__2 = (const lean_object*)&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__2_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__2_value),((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__5_value)}};
static const lean_object* lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__3 = (const lean_object*)&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__3_value;
static lean_once_cell_t lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__4;
static const lean_string_object lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "prefixLen"};
static const lean_object* lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__5 = (const lean_object*)&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__5_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__5_value)}};
static const lean_object* lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__6 = (const lean_object*)&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__6_value;
static lean_once_cell_t lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7;
lean_object* l_Nat_reprFast(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprSubnet_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprSubnet_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprSubnet_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_BGPAttackDetector_instReprSubnet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_BGPAttackDetector_instReprSubnet_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_BGPAttackDetector_instReprSubnet___closed__0 = (const lean_object*)&lp_BGPAttackDetector_instReprSubnet___closed__0_value;
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_instReprSubnet = (const lean_object*)&lp_BGPAttackDetector_instReprSubnet___closed__0_value;
lean_object* l_BitVec_append___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IPAddress_mergeFields(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IPAddress_mergeFields___boxed(lean_object*);
lean_object* l_BitVec_extractLsb___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IPAddress_ofBitVec(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IPAddress_ofBitVec___boxed(lean_object*);
static const lean_string_object lp_BGPAttackDetector_IPAddress_ofString_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* lp_BGPAttackDetector_IPAddress_ofString_x3f___closed__0 = (const lean_object*)&lp_BGPAttackDetector_IPAddress_ofString_x3f___closed__0_value;
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_get___redArg(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_BitVec_ofNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IPAddress_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IPAddress_ofString_x3f___boxed(lean_object*);
lean_object* l_BitVec_allOnes(lean_object*);
static lean_once_cell_t lp_BGPAttackDetector_Subnet_mask___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_Subnet_mask___closed__0;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_BitVec_shiftLeft(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_mask(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_mask___boxed(lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_Subnet_containsIP(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_containsIP___boxed(lean_object*, lean_object*);
static const lean_string_object lp_BGPAttackDetector_Subnet_ofString_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* lp_BGPAttackDetector_Subnet_ofString_x3f___closed__0 = (const lean_object*)&lp_BGPAttackDetector_Subnet_ofString_x3f___closed__0_value;
static lean_once_cell_t lp_BGPAttackDetector_Subnet_ofString_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_Subnet_ofString_x3f___closed__1;
static lean_once_cell_t lp_BGPAttackDetector_Subnet_ofString_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_Subnet_ofString_x3f___closed__2;
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_ofString_x3f___boxed(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_Subnet_instDecidableIsSubnetOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_instDecidableIsSubnetOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_canonicalize(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_parentAt(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
LEAN_EXPORT uint64_t lp_BGPAttackDetector_instHashableIPAddress___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instHashableIPAddress___lam__0___boxed(lean_object*);
static const lean_closure_object lp_BGPAttackDetector_instHashableIPAddress___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_BGPAttackDetector_instHashableIPAddress___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_BGPAttackDetector_instHashableIPAddress___closed__0 = (const lean_object*)&lp_BGPAttackDetector_instHashableIPAddress___closed__0_value;
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_instHashableIPAddress = (const lean_object*)&lp_BGPAttackDetector_instHashableIPAddress___closed__0_value;
LEAN_EXPORT uint64_t lp_BGPAttackDetector_instHashableSubnet___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instHashableSubnet___lam__0___boxed(lean_object*);
static const lean_closure_object lp_BGPAttackDetector_instHashableSubnet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_BGPAttackDetector_instHashableSubnet___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_BGPAttackDetector_instHashableSubnet___closed__0 = (const lean_object*)&lp_BGPAttackDetector_instHashableSubnet___closed__0_value;
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_instHashableSubnet = (const lean_object*)&lp_BGPAttackDetector_instHashableSubnet___closed__0_value;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_nil_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_nil_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_cons_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_cons_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_BGPAttackDetector_instReprPath_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Path.nil"};
static const lean_object* lp_BGPAttackDetector_instReprPath_repr___closed__0 = (const lean_object*)&lp_BGPAttackDetector_instReprPath_repr___closed__0_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprPath_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprPath_repr___closed__0_value)}};
static const lean_object* lp_BGPAttackDetector_instReprPath_repr___closed__1 = (const lean_object*)&lp_BGPAttackDetector_instReprPath_repr___closed__1_value;
static lean_once_cell_t lp_BGPAttackDetector_instReprPath_repr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_instReprPath_repr___closed__2;
static lean_once_cell_t lp_BGPAttackDetector_instReprPath_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_instReprPath_repr___closed__3;
static const lean_string_object lp_BGPAttackDetector_instReprPath_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Path.cons"};
static const lean_object* lp_BGPAttackDetector_instReprPath_repr___closed__4 = (const lean_object*)&lp_BGPAttackDetector_instReprPath_repr___closed__4_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprPath_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprPath_repr___closed__4_value)}};
static const lean_object* lp_BGPAttackDetector_instReprPath_repr___closed__5 = (const lean_object*)&lp_BGPAttackDetector_instReprPath_repr___closed__5_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprPath_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprPath_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_BGPAttackDetector_instReprPath_repr___closed__6 = (const lean_object*)&lp_BGPAttackDetector_instReprPath_repr___closed__6_value;
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprPath_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprPath_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_BGPAttackDetector_instReprPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_BGPAttackDetector_instReprPath_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_BGPAttackDetector_instReprPath___closed__0 = (const lean_object*)&lp_BGPAttackDetector_instReprPath___closed__0_value;
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_instReprPath = (const lean_object*)&lp_BGPAttackDetector_instReprPath___closed__0_value;
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqPath_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqPath_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqPath___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instOrdPath_ord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instOrdPath_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_BGPAttackDetector_instOrdPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_BGPAttackDetector_instOrdPath_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_BGPAttackDetector_instOrdPath___closed__0 = (const lean_object*)&lp_BGPAttackDetector_instOrdPath___closed__0_value;
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_instOrdPath = (const lean_object*)&lp_BGPAttackDetector_instOrdPath___closed__0_value;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_origin(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_origin___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_id(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_id___boxed(lean_object*);
lean_object* l_String_Slice_toNat_x21(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ofString_x3f_aux(lean_object*, lean_object*);
static const lean_string_object lp_BGPAttackDetector_Path_ofString_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* lp_BGPAttackDetector_Path_ofString_x3f___closed__0 = (const lean_object*)&lp_BGPAttackDetector_Path_ofString_x3f___closed__0_value;
lean_object* l_List_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ofString_x3f___boxed(lean_object*);
static const lean_string_object lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ordering"};
static const lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__0 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__0_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__0_value)}};
static const lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__1 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__1_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__1_value)}};
static const lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__2 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__2_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__2_value),((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__5_value)}};
static const lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__3 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__3_value;
static lean_once_cell_t lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__4;
static const lean_string_object lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "announced"};
static const lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__5 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__5_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__5_value)}};
static const lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__6 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__6_value;
static const lean_string_object lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "announcer"};
static const lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__7 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__7_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__7_value)}};
static const lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__8 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__8_value;
static const lean_string_object lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "neighbor"};
static const lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__9 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__9_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__9_value)}};
static const lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__10 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__10_value;
static const lean_string_object lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pref"};
static const lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__11 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__11_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__11_value)}};
static const lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__12 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__12_value;
static const lean_string_object lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "path"};
static const lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__13 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__13_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__13_value)}};
static const lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__14 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__14_value;
lean_object* l_Bool_repr___redArg(uint8_t);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprEntry_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprEntry_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_BGPAttackDetector_instReprEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_BGPAttackDetector_instReprEntry_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_BGPAttackDetector_instReprEntry___closed__0 = (const lean_object*)&lp_BGPAttackDetector_instReprEntry___closed__0_value;
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_instReprEntry = (const lean_object*)&lp_BGPAttackDetector_instReprEntry___closed__0_value;
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqEntry_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqEntry_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqEntry___boxed(lean_object*, lean_object*);
static const lean_string_object lp_BGPAttackDetector_Entry_ofString_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* lp_BGPAttackDetector_Entry_ofString_x3f___closed__0 = (const lean_object*)&lp_BGPAttackDetector_Entry_ofString_x3f___closed__0_value;
static const lean_string_object lp_BGPAttackDetector_Entry_ofString_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "A"};
static const lean_object* lp_BGPAttackDetector_Entry_ofString_x3f___closed__1 = (const lean_object*)&lp_BGPAttackDetector_Entry_ofString_x3f___closed__1_value;
static const lean_string_object lp_BGPAttackDetector_Entry_ofString_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "B"};
static const lean_object* lp_BGPAttackDetector_Entry_ofString_x3f___closed__2 = (const lean_object*)&lp_BGPAttackDetector_Entry_ofString_x3f___closed__2_value;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Entry_ofString_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Entry_ofString_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_unwrap___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_unwrap___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_unwrap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_unwrap___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_defaultIP;
static lean_once_cell_t lp_BGPAttackDetector_defaultSubnet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_defaultSubnet___closed__0;
static lean_once_cell_t lp_BGPAttackDetector_defaultSubnet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_defaultSubnet___closed__1;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_defaultSubnet;
static lean_once_cell_t lp_BGPAttackDetector_defaultEntry___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_defaultEntry___closed__0;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_defaultEntry;
static const lean_string_object lp_BGPAttackDetector_te___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "TABLE_DUMP|02/24/08 18:24:13|B|144.228.241.81|1239|222.255.224.0/19|1239 6762 7473 7643|IGP"};
static const lean_object* lp_BGPAttackDetector_te___closed__0 = (const lean_object*)&lp_BGPAttackDetector_te___closed__0_value;
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_te = (const lean_object*)&lp_BGPAttackDetector_te___closed__0_value;
static const lean_string_object lp_BGPAttackDetector_te2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "BGP4MP|02/24/08 18:39:19|A|195.219.96.239|6453|222.255.224.0/20|6453 39386 24731|IGP"};
static const lean_object* lp_BGPAttackDetector_te2___closed__0 = (const lean_object*)&lp_BGPAttackDetector_te2___closed__0_value;
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_te2 = (const lean_object*)&lp_BGPAttackDetector_te2___closed__0_value;
static const lean_string_object lp_BGPAttackDetector_te3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "BGP4MP|02/24/08 18:39:21|A|195.219.96.239|6453|89.4.128.0/24|6453 39386 24731|IGP"};
static const lean_object* lp_BGPAttackDetector_te3___closed__0 = (const lean_object*)&lp_BGPAttackDetector_te3___closed__0_value;
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_te3 = (const lean_object*)&lp_BGPAttackDetector_te3___closed__0_value;
static lean_once_cell_t lp_BGPAttackDetector_bgpTable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_bgpTable___closed__0;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_bgpTable;
static lean_once_cell_t lp_BGPAttackDetector_updates___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_updates___closed__0;
static lean_once_cell_t lp_BGPAttackDetector_updates___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_updates___closed__1;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_updates;
LEAN_EXPORT uint8_t lp_BGPAttackDetector_UpdatesContainSubnet___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_UpdatesContainSubnet___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_List_foldl___at___00UpdatesContainSubnet_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00UpdatesContainSubnet_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_BGPAttackDetector_UpdatesContainSubnet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_BGPAttackDetector_UpdatesContainSubnet___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_BGPAttackDetector_UpdatesContainSubnet___closed__0 = (const lean_object*)&lp_BGPAttackDetector_UpdatesContainSubnet___closed__0_value;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_once_cell_t lp_BGPAttackDetector_UpdatesContainSubnet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_UpdatesContainSubnet___closed__1;
lean_object* l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_UpdatesContainSubnet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_UpdatesContainSubnet___boxed(lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVExpr_var___override(lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_mergeFields__injective___expr__def__1__4;
static const lean_string_object lp_BGPAttackDetector_mergeFields__injective___cert__def__1__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 835, .m_capacity = 835, .m_length = 834, .m_data = "535 192 0 534 531 0\n1 d 531 0\n536 -199 0 534 532 0\n1 d 534 532 0\n537 161 0 535 507 0\n1 d 507 0\n538 191 0 535 508 0\n1 d 535 508 0\n539 -198 0 537 536 530 0\n1 d 537 536 530 0\n540 158 0 538 504 0\n1 d 504 0\n541 190 0 538 505 0\n1 d 538 505 0\n542 -197 0 540 539 527 0\n1 d 540 539 527 0\n543 155 0 541 501 0\n1 d 501 0\n544 189 0 541 502 0\n1 d 541 502 0\n545 -196 0 543 542 524 0\n1 d 543 542 524 0\n546 152 0 544 498 0\n1 d 498 0\n547 188 0 544 499 0\n1 d 544 499 0\n548 -195 0 546 545 521 0\n1 d 546 545 521 0\n549 149 0 547 495 0\n1 d 495 0\n550 187 0 547 496 0\n1 d 547 496 0\n551 -194 0 549 548 518 0\n1 d 549 548 518 0\n552 146 0 550 492 0\n1 d 492 0\n553 186 0 550 493 0\n1 d 550 493 0\n554 -193 0 552 551 515 0\n1 d 552 551 515 0\n555 143 0 553 489 0\n1 d 489 0\n556 185 0 553 490 0\n1 d 553 490 0\n557 -140 0 554 555 512 0\n1 d 554 555 512 0\n558 0 556 557 486 0\n"};
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_mergeFields__injective___cert__def__1__4 = (const lean_object*)&lp_BGPAttackDetector_mergeFields__injective___cert__def__1__4_value;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_mergeFields__injective___expr__def__1__9;
static const lean_string_object lp_BGPAttackDetector_mergeFields__injective___cert__def__1__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1107, .m_capacity = 1107, .m_length = 1106, .m_data = "535 192 0 534 531 0\n1 d 531 0\n536 -199 0 534 532 0\n1 d 534 532 0\n537 191 0 535 508 0\n1 d 535 508 0\n538 190 0 537 505 0\n1 d 537 505 0\n539 189 0 538 502 0\n1 d 538 502 0\n540 188 0 539 499 0\n1 d 539 499 0\n541 187 0 540 496 0\n1 d 540 496 0\n542 186 0 541 493 0\n1 d 541 493 0\n543 185 0 542 490 0\n1 d 542 490 0\n544 184 0 543 487 0\n1 d 543 487 0\n545 137 0 544 483 0\n1 d 483 0\n546 183 0 544 484 0\n1 d 544 484 0\n547 -198 0 545 536 530 0\n1 d 545 536 530 0\n548 134 0 546 480 0\n1 d 480 0\n549 182 0 546 481 0\n1 d 546 481 0\n550 -197 0 548 547 527 0\n1 d 548 547 527 0\n551 131 0 549 477 0\n1 d 477 0\n552 181 0 549 478 0\n1 d 549 478 0\n553 -196 0 551 550 524 0\n1 d 551 550 524 0\n554 128 0 552 474 0\n1 d 474 0\n555 180 0 552 475 0\n1 d 552 475 0\n556 -195 0 554 553 521 0\n1 d 554 553 521 0\n557 125 0 555 471 0\n1 d 471 0\n558 179 0 555 472 0\n1 d 555 472 0\n559 -194 0 557 556 518 0\n1 d 557 556 518 0\n560 122 0 558 468 0\n1 d 468 0\n561 178 0 558 469 0\n1 d 558 469 0\n562 -193 0 560 559 515 0\n1 d 560 559 515 0\n563 119 0 561 465 0\n1 d 465 0\n564 177 0 561 466 0\n1 d 561 466 0\n565 -116 0 562 563 512 0\n1 d 562 563 512 0\n566 0 564 565 462 0\n"};
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_mergeFields__injective___cert__def__1__9 = (const lean_object*)&lp_BGPAttackDetector_mergeFields__injective___cert__def__1__9_value;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_mergeFields__injective___expr__def__1__14;
static const lean_string_object lp_BGPAttackDetector_mergeFields__injective___cert__def__1__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1376, .m_capacity = 1376, .m_length = 1375, .m_data = "535 192 0 534 531 0\n1 d 531 0\n536 -199 0 534 532 0\n1 d 534 532 0\n537 191 0 535 508 0\n1 d 535 508 0\n538 190 0 537 505 0\n1 d 537 505 0\n539 189 0 538 502 0\n1 d 538 502 0\n540 188 0 539 499 0\n1 d 539 499 0\n541 187 0 540 496 0\n1 d 540 496 0\n542 186 0 541 493 0\n1 d 541 493 0\n543 185 0 542 490 0\n1 d 542 490 0\n544 184 0 543 487 0\n1 d 543 487 0\n545 183 0 544 484 0\n1 d 544 484 0\n546 182 0 545 481 0\n1 d 545 481 0\n547 181 0 546 478 0\n1 d 546 478 0\n548 180 0 547 475 0\n1 d 547 475 0\n549 179 0 548 472 0\n1 d 548 472 0\n550 178 0 549 469 0\n1 d 549 469 0\n551 177 0 550 466 0\n1 d 550 466 0\n552 176 0 551 463 0\n1 d 551 463 0\n553 113 0 552 459 0\n1 d 459 0\n554 175 0 552 460 0\n1 d 552 460 0\n555 -198 0 553 536 530 0\n1 d 553 536 530 0\n556 110 0 554 456 0\n1 d 456 0\n557 174 0 554 457 0\n1 d 554 457 0\n558 -197 0 556 555 527 0\n1 d 556 555 527 0\n559 107 0 557 453 0\n1 d 453 0\n560 173 0 557 454 0\n1 d 557 454 0\n561 -196 0 559 558 524 0\n1 d 559 558 524 0\n562 104 0 560 450 0\n1 d 450 0\n563 172 0 560 451 0\n1 d 560 451 0\n564 -195 0 562 561 521 0\n1 d 562 561 521 0\n565 101 0 563 447 0\n1 d 447 0\n566 171 0 563 448 0\n1 d 563 448 0\n567 -194 0 565 564 518 0\n1 d 565 564 518 0\n568 98 0 566 444 0\n1 d 444 0\n569 170 0 566 445 0\n1 d 566 445 0\n570 -193 0 568 567 515 0\n1 d 568 567 515 0\n571 95 0 569 441 0\n1 d 441 0\n572 169 0 569 442 0\n1 d 569 442 0\n573 -92 0 570 571 512 0\n1 d 570 571 512 0\n574 0 572 573 438 0\n"};
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_mergeFields__injective___cert__def__1__14 = (const lean_object*)&lp_BGPAttackDetector_mergeFields__injective___cert__def__1__14_value;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_mergeFields__injective___expr__def__1__19;
static const lean_string_object lp_BGPAttackDetector_mergeFields__injective___cert__def__1__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 880, .m_capacity = 880, .m_length = 879, .m_data = "514 -168 0 513 510 0\n1 d 510 0\n515 192 0 513 511 0\n1 d 513 511 0\n516 -169 0 514 439 0\n1 d 514 439 0\n517 191 0 515 508 0\n1 d 515 508 0\n518 -170 0 516 442 0\n1 d 516 442 0\n519 190 0 517 505 0\n1 d 517 505 0\n520 -171 0 518 445 0\n1 d 518 445 0\n521 189 0 519 502 0\n1 d 519 502 0\n522 -172 0 520 448 0\n1 d 520 448 0\n523 188 0 521 499 0\n1 d 521 499 0\n524 -173 0 522 451 0\n1 d 522 451 0\n525 187 0 523 496 0\n1 d 523 496 0\n526 -174 0 524 454 0\n1 d 524 454 0\n527 186 0 525 493 0\n1 d 525 493 0\n528 -175 0 526 457 0\n1 d 526 457 0\n529 185 0 527 490 0\n1 d 527 490 0\n530 -176 0 528 460 0\n1 d 528 460 0\n531 184 0 529 487 0\n1 d 529 487 0\n532 -177 0 530 463 0\n1 d 530 463 0\n533 183 0 531 484 0\n1 d 531 484 0\n534 -178 0 532 466 0\n1 d 532 466 0\n535 182 0 533 481 0\n1 d 533 481 0\n536 -179 0 534 469 0\n1 d 534 469 0\n537 181 0 535 478 0\n1 d 535 478 0\n538 -180 0 536 472 0\n1 d 536 472 0\n539 0 537 538 475 0\n"};
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_mergeFields__injective___cert__def__1__19 = (const lean_object*)&lp_BGPAttackDetector_mergeFields__injective___cert__def__1__19_value;
LEAN_EXPORT uint8_t lp_BGPAttackDetector_isOriginHijack(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_isOriginHijack___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_BGPAttackDetector_detectOriginHijacks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_BGPAttackDetector_isOriginHijack___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_BGPAttackDetector_detectOriginHijacks___closed__0 = (const lean_object*)&lp_BGPAttackDetector_detectOriginHijacks___closed__0_value;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_detectOriginHijacks(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IPAddress_format(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_format(lean_object*);
static const lean_string_object lp_BGPAttackDetector_Path_formatOriginAS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "AS"};
static const lean_object* lp_BGPAttackDetector_Path_formatOriginAS___closed__0 = (const lean_object*)&lp_BGPAttackDetector_Path_formatOriginAS___closed__0_value;
static const lean_string_object lp_BGPAttackDetector_Path_formatOriginAS___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unknown"};
static const lean_object* lp_BGPAttackDetector_Path_formatOriginAS___closed__1 = (const lean_object*)&lp_BGPAttackDetector_Path_formatOriginAS___closed__1_value;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_formatOriginAS(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_formatOriginAS___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterTR_loop___at___00readFileLines_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_BGPAttackDetector_readFileLines___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* lp_BGPAttackDetector_readFileLines___closed__0 = (const lean_object*)&lp_BGPAttackDetector_readFileLines___closed__0_value;
lean_object* l_IO_FS_readFile(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_readFileLines(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_readFileLines___boxed(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_mapIdx_go___at___00parseEntriesFromFile_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_mapIdx_go___at___00parseEntriesFromFile_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00parseEntriesFromFile_spec__1(lean_object*, lean_object*);
static lean_once_cell_t lp_BGPAttackDetector_parseEntriesFromFile___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_parseEntriesFromFile___closed__0;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_parseEntriesFromFile(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_parseEntriesFromFile___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_DirEntry_path(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_mapTR_loop___at___00listDirFiles_spec__0(lean_object*, lean_object*);
lean_object* lean_io_read_dir(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_listDirFiles(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_listDirFiles___boxed(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00parseEntriesFromDir_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_mapM_loop___at___00parseEntriesFromDir_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_mapM_loop___at___00parseEntriesFromDir_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_BGPAttackDetector_parseEntriesFromDir___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_parseEntriesFromDir___closed__0;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_parseEntriesFromDir(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_parseEntriesFromDir___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_addToBaseline_go___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_addToBaseline_go___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_addToBaseline_go(lean_object*, lean_object*);
uint8_t l_List_any___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_addToBaseline(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00buildBaseline_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_buildBaseline(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParent_spec__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_BGPAttackDetector_findHijackParent___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_findHijackParent___closed__0;
lean_object* l_List_head_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_findHijackParent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00instReprHijackEvent_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00instReprHijackEvent_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_Format_joinSep___at___00List_repr___at___00instReprHijackEvent_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_Format_joinSep___at___00List_repr___at___00instReprHijackEvent_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__0 = (const lean_object*)&lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__1 = (const lean_object*)&lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__1_value;
static const lean_string_object lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__2 = (const lean_object*)&lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__2_value;
static const lean_ctor_object lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__3 = (const lean_object*)&lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__3_value;
static const lean_string_object lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__4 = (const lean_object*)&lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__4_value;
static lean_once_cell_t lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__5;
static lean_once_cell_t lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__6;
static const lean_ctor_object lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__7 = (const lean_object*)&lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__7_value;
static const lean_ctor_object lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__4_value)}};
static const lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__8 = (const lean_object*)&lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__8_value;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg(lean_object*);
static const lean_string_object lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "update"};
static const lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__0 = (const lean_object*)&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__0_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__0_value)}};
static const lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__1 = (const lean_object*)&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__1_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__1_value)}};
static const lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__2 = (const lean_object*)&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__2_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__2_value),((lean_object*)&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__5_value)}};
static const lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__3 = (const lean_object*)&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__3_value;
static lean_once_cell_t lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__4;
static const lean_string_object lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "coveredBy"};
static const lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__5 = (const lean_object*)&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__5_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__5_value)}};
static const lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__6 = (const lean_object*)&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__6_value;
static const lean_string_object lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "victimOrigins"};
static const lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__7 = (const lean_object*)&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__7_value;
static const lean_ctor_object lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__7_value)}};
static const lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__8 = (const lean_object*)&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__8_value;
static lean_once_cell_t lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__9;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_BGPAttackDetector_instReprHijackEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_BGPAttackDetector_instReprHijackEvent_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_BGPAttackDetector_instReprHijackEvent___closed__0 = (const lean_object*)&lp_BGPAttackDetector_instReprHijackEvent___closed__0_value;
LEAN_EXPORT const lean_object* lp_BGPAttackDetector_instReprHijackEvent = (const lean_object*)&lp_BGPAttackDetector_instReprHijackEvent___closed__0_value;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00detectSubprefixHijacks_spec__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_BGPAttackDetector_detectSubprefixHijacks___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_detectSubprefixHijacks___closed__0;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_detectSubprefixHijacks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3_spec__4_spec__6___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00buildBaselineMap_spec__2(lean_object*, lean_object*);
static lean_once_cell_t lp_BGPAttackDetector_buildBaselineMap___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_buildBaselineMap___closed__0;
static lean_once_cell_t lp_BGPAttackDetector_buildBaselineMap___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_buildBaselineMap___closed__1;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_buildBaselineMap(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParentMap_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParentMap_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParentMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParentMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_findHijackParentMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_findHijackParentMap___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterTR_loop___at___00detectSubprefixHijacksMap_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterTR_loop___at___00detectSubprefixHijacksMap_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterTR_loop___at___00detectSubprefixHijacksMap_spec__2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_List_foldl___at___00detectSubprefixHijacksMap_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00detectSubprefixHijacksMap_spec__4___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00detectSubprefixHijacksMap_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00detectSubprefixHijacksMap_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00detectSubprefixHijacksMap_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_BGPAttackDetector_detectSubprefixHijacksMap___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_detectSubprefixHijacksMap___closed__0;
static lean_once_cell_t lp_BGPAttackDetector_detectSubprefixHijacksMap___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_detectSubprefixHijacksMap___closed__1;
LEAN_EXPORT lean_object* lp_BGPAttackDetector_detectSubprefixHijacksMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqIPAddress_decEq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
x_6 = lean_ctor_get(x_1, 3);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_2, 2);
x_10 = lean_ctor_get(x_2, 3);
x_11 = lean_nat_dec_eq(x_3, x_7);
if (x_11 == 0)
{
return x_11;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_eq(x_4, x_8);
if (x_12 == 0)
{
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_eq(x_5, x_9);
if (x_13 == 0)
{
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_eq(x_6, x_10);
return x_14;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqIPAddress_decEq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_instDecidableEqIPAddress_decEq(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqIPAddress(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lp_BGPAttackDetector_instDecidableEqIPAddress_decEq(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqIPAddress___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_instDecidableEqIPAddress(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__7(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__14(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(9u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__18(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__0));
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__18, &lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__18_once, _init_lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__18);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec_ref(x_1);
x_6 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__5));
x_7 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__6));
x_8 = lean_unsigned_to_nat(8u);
x_9 = lean_obj_once(&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__7, &lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__7_once, _init_lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__7);
x_10 = l_BitVec_repr(x_8, x_2);
x_11 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = 0;
x_13 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set_uint8(x_13, sizeof(void*)*1, x_12);
x_14 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
x_15 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__9));
x_16 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_box(1);
x_18 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__11));
x_20 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_6);
x_22 = l_BitVec_repr(x_8, x_3);
x_23 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_23, 0, x_9);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set_uint8(x_24, sizeof(void*)*1, x_12);
x_25 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_25, 0, x_21);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_15);
x_27 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_17);
x_28 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__13));
x_29 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_6);
x_31 = lean_obj_once(&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__14, &lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__14_once, _init_lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__14);
x_32 = l_BitVec_repr(x_8, x_4);
x_33 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set_uint8(x_34, sizeof(void*)*1, x_12);
x_35 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_35, 0, x_30);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_15);
x_37 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_17);
x_38 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__16));
x_39 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_6);
x_41 = l_BitVec_repr(x_8, x_5);
x_42 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_42, 0, x_31);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set_uint8(x_43, sizeof(void*)*1, x_12);
x_44 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_44, 0, x_40);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_obj_once(&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19, &lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19_once, _init_lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19);
x_46 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__20));
x_47 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_44);
x_48 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__21));
x_49 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_50, 0, x_45);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set_uint8(x_51, sizeof(void*)*1, x_12);
return x_51;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprIPAddress_repr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_instReprIPAddress_repr___redArg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprIPAddress_repr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_instReprIPAddress_repr(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqSubnet_decEq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lp_BGPAttackDetector_instDecidableEqIPAddress_decEq(x_3, x_5);
if (x_7 == 0)
{
return x_7;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_eq(x_4, x_6);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqSubnet_decEq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_instDecidableEqSubnet_decEq(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqSubnet(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lp_BGPAttackDetector_instDecidableEqSubnet_decEq(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqSubnet___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_instDecidableEqSubnet(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__4(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(6u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(13u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprSubnet_repr___redArg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__5));
x_6 = ((lean_object*)(lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__3));
x_7 = lean_obj_once(&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__4, &lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__4_once, _init_lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__4);
x_8 = lp_BGPAttackDetector_instReprIPAddress_repr___redArg(x_3);
lean_ctor_set_tag(x_1, 4);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_7);
x_9 = 0;
x_10 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set_uint8(x_10, sizeof(void*)*1, x_9);
x_11 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_10);
x_12 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__9));
x_13 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_box(1);
x_15 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = ((lean_object*)(lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__6));
x_17 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_5);
x_19 = lean_obj_once(&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7, &lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7_once, _init_lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7);
x_20 = l_Nat_reprFast(x_4);
x_21 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set_uint8(x_23, sizeof(void*)*1, x_9);
x_24 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_obj_once(&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19, &lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19_once, _init_lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19);
x_26 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__20));
x_27 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
x_28 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__21));
x_29 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set_uint8(x_31, sizeof(void*)*1, x_9);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_32 = lean_ctor_get(x_1, 0);
x_33 = lean_ctor_get(x_1, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_1);
x_34 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__5));
x_35 = ((lean_object*)(lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__3));
x_36 = lean_obj_once(&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__4, &lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__4_once, _init_lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__4);
x_37 = lp_BGPAttackDetector_instReprIPAddress_repr___redArg(x_32);
x_38 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = 0;
x_40 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set_uint8(x_40, sizeof(void*)*1, x_39);
x_41 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_41, 0, x_35);
lean_ctor_set(x_41, 1, x_40);
x_42 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__9));
x_43 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_box(1);
x_45 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = ((lean_object*)(lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__6));
x_47 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_34);
x_49 = lean_obj_once(&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7, &lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7_once, _init_lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7);
x_50 = l_Nat_reprFast(x_33);
x_51 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set_uint8(x_53, sizeof(void*)*1, x_39);
x_54 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_obj_once(&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19, &lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19_once, _init_lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19);
x_56 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__20));
x_57 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
x_58 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__21));
x_59 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_60, 0, x_55);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set_uint8(x_61, sizeof(void*)*1, x_39);
return x_61;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprSubnet_repr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_instReprSubnet_repr___redArg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprSubnet_repr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_instReprSubnet_repr(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IPAddress_mergeFields(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_1, 2);
x_5 = lean_ctor_get(x_1, 3);
x_6 = lean_unsigned_to_nat(8u);
x_7 = lean_unsigned_to_nat(16u);
x_8 = l_BitVec_append___redArg(x_6, x_2, x_3);
x_9 = l_BitVec_append___redArg(x_6, x_4, x_5);
x_10 = l_BitVec_append___redArg(x_7, x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IPAddress_mergeFields___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_BGPAttackDetector_IPAddress_mergeFields(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IPAddress_ofBitVec(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_2 = lean_unsigned_to_nat(31u);
x_3 = lean_unsigned_to_nat(24u);
x_4 = l_BitVec_extractLsb___redArg(x_2, x_3, x_1);
x_5 = lean_unsigned_to_nat(23u);
x_6 = lean_unsigned_to_nat(16u);
x_7 = l_BitVec_extractLsb___redArg(x_5, x_6, x_1);
x_8 = lean_unsigned_to_nat(15u);
x_9 = lean_unsigned_to_nat(8u);
x_10 = l_BitVec_extractLsb___redArg(x_8, x_9, x_1);
x_11 = lean_unsigned_to_nat(7u);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_BitVec_extractLsb___redArg(x_11, x_12, x_1);
x_14 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_7);
lean_ctor_set(x_14, 2, x_10);
lean_ctor_set(x_14, 3, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IPAddress_ofBitVec___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_BGPAttackDetector_IPAddress_ofBitVec(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IPAddress_ofString_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_2 = ((lean_object*)(lp_BGPAttackDetector_IPAddress_ofString_x3f___closed__0));
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_box(0);
x_5 = l_String_splitOnAux(x_1, x_2, x_3, x_3, x_3, x_4);
x_6 = l_List_lengthTR___redArg(x_5);
x_7 = lean_unsigned_to_nat(4u);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = l_List_get___redArg(x_5, x_3);
x_10 = lean_string_utf8_byte_size(x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_3);
lean_ctor_set(x_11, 2, x_10);
x_12 = l_String_Slice_toNat_x3f(x_11);
lean_dec_ref(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec(x_5);
x_13 = lean_box(0);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec_ref(x_12);
x_15 = lean_unsigned_to_nat(1u);
x_16 = l_List_get___redArg(x_5, x_15);
x_17 = lean_string_utf8_byte_size(x_16);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_3);
lean_ctor_set(x_18, 2, x_17);
x_19 = l_String_Slice_toNat_x3f(x_18);
lean_dec_ref(x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
lean_dec(x_14);
lean_dec(x_5);
x_20 = lean_box(0);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec_ref(x_19);
x_22 = lean_unsigned_to_nat(2u);
x_23 = l_List_get___redArg(x_5, x_22);
x_24 = lean_string_utf8_byte_size(x_23);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_3);
lean_ctor_set(x_25, 2, x_24);
x_26 = l_String_Slice_toNat_x3f(x_25);
lean_dec_ref(x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_5);
x_27 = lean_box(0);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec_ref(x_26);
x_29 = lean_unsigned_to_nat(3u);
x_30 = l_List_get___redArg(x_5, x_29);
lean_dec(x_5);
x_31 = lean_string_utf8_byte_size(x_30);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_3);
lean_ctor_set(x_32, 2, x_31);
x_33 = l_String_Slice_toNat_x3f(x_32);
lean_dec_ref(x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; 
lean_dec(x_28);
lean_dec(x_21);
lean_dec(x_14);
x_34 = lean_box(0);
return x_34;
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_33);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_36 = lean_ctor_get(x_33, 0);
x_37 = lean_unsigned_to_nat(8u);
x_38 = l_BitVec_ofNat(x_37, x_14);
lean_dec(x_14);
x_39 = l_BitVec_ofNat(x_37, x_21);
lean_dec(x_21);
x_40 = l_BitVec_ofNat(x_37, x_28);
lean_dec(x_28);
x_41 = l_BitVec_ofNat(x_37, x_36);
lean_dec(x_36);
x_42 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_42, 0, x_38);
lean_ctor_set(x_42, 1, x_39);
lean_ctor_set(x_42, 2, x_40);
lean_ctor_set(x_42, 3, x_41);
lean_ctor_set(x_33, 0, x_42);
return x_33;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_43 = lean_ctor_get(x_33, 0);
lean_inc(x_43);
lean_dec(x_33);
x_44 = lean_unsigned_to_nat(8u);
x_45 = l_BitVec_ofNat(x_44, x_14);
lean_dec(x_14);
x_46 = l_BitVec_ofNat(x_44, x_21);
lean_dec(x_21);
x_47 = l_BitVec_ofNat(x_44, x_28);
lean_dec(x_28);
x_48 = l_BitVec_ofNat(x_44, x_43);
lean_dec(x_43);
x_49 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_49, 0, x_45);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set(x_49, 2, x_47);
lean_ctor_set(x_49, 3, x_48);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_49);
return x_50;
}
}
}
}
}
}
else
{
lean_object* x_51; 
lean_dec(x_5);
x_51 = lean_box(0);
return x_51;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IPAddress_ofString_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_BGPAttackDetector_IPAddress_ofString_x3f(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
static lean_object* _init_lp_BGPAttackDetector_Subnet_mask___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = l_BitVec_allOnes(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_mask(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_unsigned_to_nat(32u);
x_3 = lean_obj_once(&lp_BGPAttackDetector_Subnet_mask___closed__0, &lp_BGPAttackDetector_Subnet_mask___closed__0_once, _init_lp_BGPAttackDetector_Subnet_mask___closed__0);
x_4 = lean_nat_sub(x_2, x_1);
x_5 = l_BitVec_shiftLeft(x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_mask___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_BGPAttackDetector_Subnet_mask(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_Subnet_containsIP(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lp_BGPAttackDetector_Subnet_mask(x_4);
x_6 = lp_BGPAttackDetector_IPAddress_mergeFields(x_3);
x_7 = lean_nat_land(x_6, x_5);
lean_dec(x_6);
x_8 = lp_BGPAttackDetector_IPAddress_mergeFields(x_2);
x_9 = lean_nat_land(x_8, x_5);
lean_dec(x_5);
lean_dec(x_8);
x_10 = lean_nat_dec_eq(x_7, x_9);
lean_dec(x_9);
lean_dec(x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_containsIP___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_Subnet_containsIP(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_lp_BGPAttackDetector_Subnet_ofString_x3f___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = l_BitVec_ofNat(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_BGPAttackDetector_Subnet_ofString_x3f___closed__2(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_BGPAttackDetector_Subnet_ofString_x3f___closed__1, &lp_BGPAttackDetector_Subnet_ofString_x3f___closed__1_once, _init_lp_BGPAttackDetector_Subnet_ofString_x3f___closed__1);
x_2 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 2, x_1);
lean_ctor_set(x_2, 3, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_ofString_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_2 = ((lean_object*)(lp_BGPAttackDetector_Subnet_ofString_x3f___closed__0));
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_box(0);
x_5 = l_String_splitOnAux(x_1, x_2, x_3, x_3, x_3, x_4);
x_6 = l_List_lengthTR___redArg(x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_List_get___redArg(x_5, x_9);
x_11 = lean_string_utf8_byte_size(x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_3);
lean_ctor_set(x_12, 2, x_11);
x_13 = l_String_Slice_toNat_x3f(x_12);
lean_dec_ref(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
lean_dec(x_5);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 x_16 = x_13;
} else {
 lean_dec_ref(x_13);
 x_16 = lean_box(0);
}
x_23 = l_List_get___redArg(x_5, x_3);
lean_dec(x_5);
x_24 = lp_BGPAttackDetector_IPAddress_ofString_x3f(x_23);
lean_dec(x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_obj_once(&lp_BGPAttackDetector_Subnet_ofString_x3f___closed__2, &lp_BGPAttackDetector_Subnet_ofString_x3f___closed__2_once, _init_lp_BGPAttackDetector_Subnet_ofString_x3f___closed__2);
x_17 = x_25;
goto block_22;
}
else
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
lean_dec_ref(x_24);
x_17 = x_26;
goto block_22;
}
block_22:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_unsigned_to_nat(33u);
x_19 = lean_nat_mod(x_15, x_18);
lean_dec(x_15);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
if (lean_is_scalar(x_16)) {
 x_21 = lean_alloc_ctor(1, 1, 0);
} else {
 x_21 = x_16;
}
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
}
else
{
lean_object* x_27; 
lean_dec(x_5);
x_27 = lean_box(0);
return x_27;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_ofString_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_BGPAttackDetector_Subnet_ofString_x3f(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_Subnet_instDecidableIsSubnetOf(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_nat_dec_le(x_3, x_5);
if (x_6 == 0)
{
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lp_BGPAttackDetector_Subnet_containsIP(x_2, x_4);
return x_7;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_instDecidableIsSubnetOf___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_Subnet_instDecidableIsSubnetOf(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_canonicalize(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lp_BGPAttackDetector_IPAddress_mergeFields(x_3);
lean_dec_ref(x_3);
x_6 = lp_BGPAttackDetector_Subnet_mask(x_4);
x_7 = lean_nat_land(x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
x_8 = lp_BGPAttackDetector_IPAddress_ofBitVec(x_7);
lean_dec(x_7);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lp_BGPAttackDetector_IPAddress_mergeFields(x_9);
lean_dec_ref(x_9);
x_12 = lp_BGPAttackDetector_Subnet_mask(x_10);
x_13 = lean_nat_land(x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
x_14 = lp_BGPAttackDetector_IPAddress_ofBitVec(x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_10);
return x_15;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_parentAt(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
lean_dec(x_5);
x_6 = lp_BGPAttackDetector_IPAddress_mergeFields(x_4);
lean_dec_ref(x_4);
x_7 = lp_BGPAttackDetector_Subnet_mask(x_2);
x_8 = lean_nat_land(x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
x_9 = lp_BGPAttackDetector_IPAddress_ofBitVec(x_8);
lean_dec(x_8);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lp_BGPAttackDetector_IPAddress_mergeFields(x_10);
lean_dec_ref(x_10);
x_12 = lp_BGPAttackDetector_Subnet_mask(x_2);
x_13 = lean_nat_land(x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
x_14 = lp_BGPAttackDetector_IPAddress_ofBitVec(x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_2);
return x_15;
}
}
}
LEAN_EXPORT uint64_t lp_BGPAttackDetector_instHashableIPAddress___lam__0(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint64_t x_6; uint64_t x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_1, 2);
x_5 = lean_ctor_get(x_1, 3);
x_6 = lean_uint64_of_nat(x_2);
x_7 = lean_uint64_of_nat(x_3);
x_8 = lean_uint64_of_nat(x_4);
x_9 = lean_uint64_of_nat(x_5);
x_10 = lean_uint64_mix_hash(x_8, x_9);
x_11 = lean_uint64_mix_hash(x_7, x_10);
x_12 = lean_uint64_mix_hash(x_6, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instHashableIPAddress___lam__0___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; 
x_2 = lp_BGPAttackDetector_instHashableIPAddress___lam__0(x_1);
lean_dec_ref(x_1);
x_3 = lean_box_uint64(x_2);
return x_3;
}
}
LEAN_EXPORT uint64_t lp_BGPAttackDetector_instHashableSubnet___lam__0(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; uint64_t x_9; uint64_t x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_ctor_get(x_2, 3);
x_8 = lean_uint64_of_nat(x_4);
x_9 = lean_uint64_of_nat(x_5);
x_10 = lean_uint64_of_nat(x_6);
x_11 = lean_uint64_of_nat(x_7);
x_12 = lean_uint64_mix_hash(x_10, x_11);
x_13 = lean_uint64_mix_hash(x_9, x_12);
x_14 = lean_uint64_mix_hash(x_8, x_13);
x_15 = lean_uint64_of_nat(x_3);
x_16 = lean_uint64_mix_hash(x_14, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instHashableSubnet___lam__0___boxed(lean_object* x_1) {
_start:
{
uint64_t x_2; lean_object* x_3; 
x_2 = lp_BGPAttackDetector_instHashableSubnet___lam__0(x_1);
lean_dec_ref(x_1);
x_3 = lean_box_uint64(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ctorIdx(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(1u);
return x_3;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ctorIdx___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_BGPAttackDetector_Path_ctorIdx(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ctorElim___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec_ref(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ctorElim(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_BGPAttackDetector_Path_ctorElim___redArg(x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ctorElim___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_BGPAttackDetector_Path_ctorElim(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_nil_elim___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_Path_ctorElim___redArg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_nil_elim(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_BGPAttackDetector_Path_ctorElim___redArg(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_cons_elim___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_Path_ctorElim___redArg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_cons_elim(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_BGPAttackDetector_Path_ctorElim___redArg(x_2, x_4);
return x_5;
}
}
static lean_object* _init_lp_BGPAttackDetector_instReprPath_repr___closed__2(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_lp_BGPAttackDetector_instReprPath_repr___closed__3(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprPath_repr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(1024u);
x_11 = lean_nat_dec_le(x_10, x_2);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_obj_once(&lp_BGPAttackDetector_instReprPath_repr___closed__2, &lp_BGPAttackDetector_instReprPath_repr___closed__2_once, _init_lp_BGPAttackDetector_instReprPath_repr___closed__2);
x_3 = x_12;
goto block_9;
}
else
{
lean_object* x_13; 
x_13 = lean_obj_once(&lp_BGPAttackDetector_instReprPath_repr___closed__3, &lp_BGPAttackDetector_instReprPath_repr___closed__3_once, _init_lp_BGPAttackDetector_instReprPath_repr___closed__3);
x_3 = x_13;
goto block_9;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_32; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_16 = x_1;
} else {
 lean_dec_ref(x_1);
 x_16 = lean_box(0);
}
x_17 = lean_unsigned_to_nat(1024u);
x_32 = lean_nat_dec_le(x_17, x_2);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_obj_once(&lp_BGPAttackDetector_instReprPath_repr___closed__2, &lp_BGPAttackDetector_instReprPath_repr___closed__2_once, _init_lp_BGPAttackDetector_instReprPath_repr___closed__2);
x_18 = x_33;
goto block_31;
}
else
{
lean_object* x_34; 
x_34 = lean_obj_once(&lp_BGPAttackDetector_instReprPath_repr___closed__3, &lp_BGPAttackDetector_instReprPath_repr___closed__3_once, _init_lp_BGPAttackDetector_instReprPath_repr___closed__3);
x_18 = x_34;
goto block_31;
}
block_31:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_19 = lean_box(1);
x_20 = ((lean_object*)(lp_BGPAttackDetector_instReprPath_repr___closed__6));
x_21 = l_Nat_reprFast(x_14);
x_22 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_22, 0, x_21);
if (lean_is_scalar(x_16)) {
 x_23 = lean_alloc_ctor(5, 2, 0);
} else {
 x_23 = x_16;
 lean_ctor_set_tag(x_23, 5);
}
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_19);
x_25 = lp_BGPAttackDetector_instReprPath_repr(x_15, x_17);
x_26 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_18);
lean_ctor_set(x_27, 1, x_26);
x_28 = 0;
x_29 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set_uint8(x_29, sizeof(void*)*1, x_28);
x_30 = l_Repr_addAppParen(x_29, x_2);
return x_30;
}
}
block_9:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_4 = ((lean_object*)(lp_BGPAttackDetector_instReprPath_repr___closed__1));
x_5 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = 0;
x_7 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*1, x_6);
x_8 = l_Repr_addAppParen(x_7, x_2);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprPath_repr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_instReprPath_repr(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqPath_decEq(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = 0;
if (lean_obj_tag(x_2) == 0)
{
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_nat_dec_eq(x_5, x_8);
if (x_10 == 0)
{
return x_7;
}
else
{
uint8_t x_11; 
x_11 = lp_BGPAttackDetector_instDecidableEqPath_decEq(x_6, x_9);
if (x_11 == 0)
{
return x_7;
}
else
{
return x_11;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqPath_decEq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_instDecidableEqPath_decEq(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqPath(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lp_BGPAttackDetector_instDecidableEqPath_decEq(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqPath___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_instDecidableEqPath(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instOrdPath_ord(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_nat_dec_lt(x_6, x_8);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = lean_nat_dec_eq(x_6, x_8);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = 2;
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lp_BGPAttackDetector_instOrdPath_ord(x_7, x_9);
if (x_13 == 1)
{
return x_13;
}
else
{
return x_13;
}
}
}
else
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instOrdPath_ord___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_instOrdPath_ord(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_origin(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
return x_1;
}
else
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_2) == 0)
{
lean_inc_ref(x_1);
return x_1;
}
else
{
x_1 = x_2;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_origin___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_BGPAttackDetector_Path_origin(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_id(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_id___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_BGPAttackDetector_Path_id(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ofString_x3f_aux(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_string_utf8_byte_size(x_4);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_String_Slice_toNat_x21(x_8);
lean_dec_ref(x_8);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 0, x_9);
x_1 = x_2;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_string_utf8_byte_size(x_11);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_13);
lean_ctor_set(x_15, 2, x_14);
x_16 = l_String_Slice_toNat_x21(x_15);
lean_dec_ref(x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_1);
x_1 = x_17;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ofString_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = ((lean_object*)(lp_BGPAttackDetector_Path_ofString_x3f___closed__0));
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_box(0);
x_5 = l_String_splitOnAux(x_1, x_2, x_3, x_3, x_3, x_4);
x_6 = l_List_reverse___redArg(x_5);
x_7 = lean_box(0);
x_8 = lp_BGPAttackDetector_Path_ofString_x3f_aux(x_7, x_6);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_ofString_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_BGPAttackDetector_Path_ofString_x3f(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
static lean_object* _init_lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__4(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(12u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprEntry_repr___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*5);
x_4 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc_ref(x_6);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_dec_ref(x_1);
x_8 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__5));
x_9 = ((lean_object*)(lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__3));
x_10 = lean_obj_once(&lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__4, &lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__4_once, _init_lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__4);
x_11 = l_Nat_reprFast(x_2);
x_12 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
x_14 = 0;
x_15 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set_uint8(x_15, sizeof(void*)*1, x_14);
x_16 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_15);
x_17 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__9));
x_18 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_box(1);
x_20 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = ((lean_object*)(lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__6));
x_22 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_8);
x_24 = lean_obj_once(&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7, &lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7_once, _init_lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7);
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Bool_repr___redArg(x_3);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*1, x_14);
x_29 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_17);
x_31 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_19);
x_32 = ((lean_object*)(lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__8));
x_33 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_8);
x_35 = lp_BGPAttackDetector_instReprIPAddress_repr___redArg(x_4);
x_36 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_36, 0, x_24);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set_uint8(x_37, sizeof(void*)*1, x_14);
x_38 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_38, 0, x_34);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_17);
x_40 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_19);
x_41 = ((lean_object*)(lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__10));
x_42 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_8);
x_44 = l_Nat_reprFast(x_5);
x_45 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_46, 0, x_10);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set_uint8(x_47, sizeof(void*)*1, x_14);
x_48 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_48, 0, x_43);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_17);
x_50 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_19);
x_51 = ((lean_object*)(lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__12));
x_52 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_8);
x_54 = lean_obj_once(&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__7, &lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__7_once, _init_lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__7);
x_55 = lp_BGPAttackDetector_instReprSubnet_repr___redArg(x_6);
x_56 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set_uint8(x_57, sizeof(void*)*1, x_14);
x_58 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_17);
x_60 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_19);
x_61 = ((lean_object*)(lp_BGPAttackDetector_instReprEntry_repr___redArg___closed__14));
x_62 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_8);
x_64 = lp_BGPAttackDetector_instReprPath_repr(x_7, x_25);
x_65 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_65, 0, x_54);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set_uint8(x_66, sizeof(void*)*1, x_14);
x_67 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_67, 0, x_63);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_obj_once(&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19, &lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19_once, _init_lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19);
x_69 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__20));
x_70 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_67);
x_71 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__21));
x_72 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_73, 0, x_68);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set_uint8(x_74, sizeof(void*)*1, x_14);
return x_74;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprEntry_repr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_instReprEntry_repr___redArg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprEntry_repr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_instReprEntry_repr(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqEntry_decEq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_20; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*5);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_ctor_get(x_1, 4);
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get_uint8(x_2, sizeof(void*)*5);
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_2, 2);
x_13 = lean_ctor_get(x_2, 3);
x_14 = lean_ctor_get(x_2, 4);
x_20 = lean_nat_dec_eq(x_3, x_9);
if (x_20 == 0)
{
return x_20;
}
else
{
if (x_4 == 0)
{
if (x_10 == 0)
{
goto block_19;
}
else
{
return x_4;
}
}
else
{
if (x_10 == 0)
{
return x_10;
}
else
{
goto block_19;
}
}
}
block_19:
{
uint8_t x_15; 
x_15 = lp_BGPAttackDetector_instDecidableEqIPAddress_decEq(x_5, x_11);
if (x_15 == 0)
{
return x_15;
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_eq(x_6, x_12);
if (x_16 == 0)
{
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lp_BGPAttackDetector_instDecidableEqSubnet_decEq(x_7, x_13);
if (x_17 == 0)
{
return x_17;
}
else
{
uint8_t x_18; 
x_18 = lp_BGPAttackDetector_instDecidableEqPath_decEq(x_8, x_14);
return x_18;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqEntry_decEq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_instDecidableEqEntry_decEq(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_instDecidableEqEntry(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lp_BGPAttackDetector_instDecidableEqEntry_decEq(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instDecidableEqEntry___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_instDecidableEqEntry(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Entry_ofString_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = ((lean_object*)(lp_BGPAttackDetector_Entry_ofString_x3f___closed__0));
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_box(0);
x_6 = l_String_splitOnAux(x_2, x_3, x_4, x_4, x_4, x_5);
x_7 = l_List_lengthTR___redArg(x_6);
x_8 = lean_unsigned_to_nat(7u);
x_9 = lean_nat_dec_lt(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(3u);
x_11 = l_List_get___redArg(x_6, x_10);
x_12 = lp_BGPAttackDetector_IPAddress_ofString_x3f(x_11);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_1);
x_13 = lean_box(0);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec_ref(x_12);
x_15 = lean_unsigned_to_nat(5u);
x_16 = l_List_get___redArg(x_6, x_15);
x_17 = lp_BGPAttackDetector_Subnet_ofString_x3f(x_16);
lean_dec(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_1);
x_18 = lean_box(0);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec_ref(x_17);
x_20 = lean_unsigned_to_nat(6u);
x_21 = l_List_get___redArg(x_6, x_20);
x_22 = lp_BGPAttackDetector_Path_ofString_x3f(x_21);
lean_dec(x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_unsigned_to_nat(4u);
x_25 = l_List_get___redArg(x_6, x_24);
x_26 = lean_string_utf8_byte_size(x_25);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_4);
lean_ctor_set(x_27, 2, x_26);
x_28 = l_String_Slice_toNat_x3f(x_27);
lean_dec_ref(x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; 
lean_dec(x_23);
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_1);
x_29 = lean_box(0);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
x_36 = lean_unsigned_to_nat(2u);
x_37 = l_List_get___redArg(x_6, x_36);
lean_dec(x_6);
x_38 = ((lean_object*)(lp_BGPAttackDetector_Entry_ofString_x3f___closed__1));
x_39 = lean_string_dec_eq(x_37, x_38);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; 
x_40 = ((lean_object*)(lp_BGPAttackDetector_Entry_ofString_x3f___closed__2));
x_41 = lean_string_dec_eq(x_37, x_40);
lean_dec(x_37);
x_32 = x_41;
goto block_35;
}
else
{
lean_dec(x_37);
x_32 = x_39;
goto block_35;
}
block_35:
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_14);
lean_ctor_set(x_33, 2, x_30);
lean_ctor_set(x_33, 3, x_19);
lean_ctor_set(x_33, 4, x_23);
lean_ctor_set_uint8(x_33, sizeof(void*)*5, x_32);
if (lean_is_scalar(x_31)) {
 x_34 = lean_alloc_ctor(1, 1, 0);
} else {
 x_34 = x_31;
}
lean_ctor_set(x_34, 0, x_33);
return x_34;
}
}
}
}
}
else
{
lean_object* x_42; 
lean_dec(x_6);
lean_dec(x_1);
x_42 = lean_box(0);
return x_42;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Entry_ofString_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_Entry_ofString_x3f(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_unwrap___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
return x_3;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_unwrap___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_unwrap___redArg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_unwrap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
return x_4;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_unwrap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_unwrap(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_lp_BGPAttackDetector_defaultIP(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_BGPAttackDetector_Subnet_ofString_x3f___closed__2, &lp_BGPAttackDetector_Subnet_ofString_x3f___closed__2_once, _init_lp_BGPAttackDetector_Subnet_ofString_x3f___closed__2);
return x_1;
}
}
static lean_object* _init_lp_BGPAttackDetector_defaultSubnet___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(33u);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_mod(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_BGPAttackDetector_defaultSubnet___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_BGPAttackDetector_defaultSubnet___closed__0, &lp_BGPAttackDetector_defaultSubnet___closed__0_once, _init_lp_BGPAttackDetector_defaultSubnet___closed__0);
x_2 = lp_BGPAttackDetector_defaultIP;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_lp_BGPAttackDetector_defaultSubnet(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_BGPAttackDetector_defaultSubnet___closed__1, &lp_BGPAttackDetector_defaultSubnet___closed__1_once, _init_lp_BGPAttackDetector_defaultSubnet___closed__1);
return x_1;
}
}
static lean_object* _init_lp_BGPAttackDetector_defaultEntry___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_1 = lean_box(0);
x_2 = lp_BGPAttackDetector_defaultSubnet;
x_3 = lp_BGPAttackDetector_defaultIP;
x_4 = 0;
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_5);
lean_ctor_set(x_6, 3, x_2);
lean_ctor_set(x_6, 4, x_1);
lean_ctor_set_uint8(x_6, sizeof(void*)*5, x_4);
return x_6;
}
}
static lean_object* _init_lp_BGPAttackDetector_defaultEntry(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_BGPAttackDetector_defaultEntry___closed__0, &lp_BGPAttackDetector_defaultEntry___closed__0_once, _init_lp_BGPAttackDetector_defaultEntry___closed__0);
return x_1;
}
}
static lean_object* _init_lp_BGPAttackDetector_bgpTable___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_BGPAttackDetector_te___closed__0));
x_2 = lean_unsigned_to_nat(1u);
x_3 = lp_BGPAttackDetector_Entry_ofString_x3f(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_BGPAttackDetector_bgpTable(void) {
_start:
{
lean_object* x_1; lean_object* x_5; 
x_5 = lean_obj_once(&lp_BGPAttackDetector_bgpTable___closed__0, &lp_BGPAttackDetector_bgpTable___closed__0_once, _init_lp_BGPAttackDetector_bgpTable___closed__0);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lp_BGPAttackDetector_defaultEntry;
x_1 = x_6;
goto block_4;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_1 = x_7;
goto block_4;
}
block_4:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
}
static lean_object* _init_lp_BGPAttackDetector_updates___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_BGPAttackDetector_te2___closed__0));
x_2 = lean_unsigned_to_nat(1u);
x_3 = lp_BGPAttackDetector_Entry_ofString_x3f(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_BGPAttackDetector_updates___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_BGPAttackDetector_te3___closed__0));
x_2 = lean_unsigned_to_nat(1u);
x_3 = lp_BGPAttackDetector_Entry_ofString_x3f(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_BGPAttackDetector_updates(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_obj_once(&lp_BGPAttackDetector_updates___closed__0, &lp_BGPAttackDetector_updates___closed__0_once, _init_lp_BGPAttackDetector_updates___closed__0);
x_8 = lp_BGPAttackDetector_defaultEntry;
if (lean_obj_tag(x_7) == 0)
{
x_9 = x_8;
goto block_12;
}
else
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_7, 0);
lean_inc(x_13);
x_9 = x_13;
goto block_12;
}
block_6:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
block_12:
{
lean_object* x_10; 
x_10 = lean_obj_once(&lp_BGPAttackDetector_updates___closed__1, &lp_BGPAttackDetector_updates___closed__1_once, _init_lp_BGPAttackDetector_updates___closed__1);
if (lean_obj_tag(x_10) == 0)
{
x_1 = x_9;
x_2 = x_8;
goto block_6;
}
else
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_1 = x_9;
x_2 = x_11;
goto block_6;
}
}
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_UpdatesContainSubnet___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 3);
x_4 = lean_ctor_get(x_2, 3);
x_5 = lp_BGPAttackDetector_Subnet_instDecidableIsSubnetOf(x_3, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lp_BGPAttackDetector_Subnet_instDecidableIsSubnetOf(x_4, x_3);
return x_6;
}
else
{
return x_5;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_UpdatesContainSubnet___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_UpdatesContainSubnet___lam__0(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_List_foldl___at___00UpdatesContainSubnet_spec__0(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
if (x_1 == 0)
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 1);
x_2 = x_3;
goto _start;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_unbox(x_5);
x_1 = x_7;
x_2 = x_6;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00UpdatesContainSubnet_spec__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
x_4 = lp_BGPAttackDetector_List_foldl___at___00UpdatesContainSubnet_spec__0(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
static lean_object* _init_lp_BGPAttackDetector_UpdatesContainSubnet___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_UpdatesContainSubnet(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = ((lean_object*)(lp_BGPAttackDetector_UpdatesContainSubnet___closed__0));
x_4 = 1;
x_5 = lean_obj_once(&lp_BGPAttackDetector_UpdatesContainSubnet___closed__1, &lp_BGPAttackDetector_UpdatesContainSubnet___closed__1_once, _init_lp_BGPAttackDetector_UpdatesContainSubnet___closed__1);
x_6 = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(x_3, x_1, x_2, x_5);
x_7 = lp_BGPAttackDetector_List_foldl___at___00UpdatesContainSubnet_spec__0(x_4, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_UpdatesContainSubnet___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_UpdatesContainSubnet(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_lp_BGPAttackDetector_mergeFields__injective___expr__def__1__4(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_1 = 0;
x_2 = lean_unsigned_to_nat(32u);
x_3 = lean_unsigned_to_nat(16u);
x_4 = lean_unsigned_to_nat(8u);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_7);
lean_inc_ref(x_6);
x_9 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_6, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_10);
x_12 = lean_unsigned_to_nat(3u);
x_13 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_12);
x_14 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_11, x_13);
x_15 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_3, x_3, x_2, x_9, x_14);
x_16 = 0;
x_17 = lean_unsigned_to_nat(4u);
x_18 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_17);
x_19 = lean_unsigned_to_nat(5u);
x_20 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_19);
lean_inc_ref(x_18);
x_21 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_18, x_20);
x_22 = lean_unsigned_to_nat(6u);
x_23 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_22);
x_24 = lean_unsigned_to_nat(7u);
x_25 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_24);
x_26 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_23, x_25);
x_27 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_3, x_3, x_2, x_21, x_26);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_15);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_16);
x_29 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_30, 0, x_4);
lean_ctor_set(x_30, 1, x_6);
lean_ctor_set(x_30, 2, x_18);
lean_ctor_set_uint8(x_30, sizeof(void*)*3, x_16);
x_31 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_33, 0, x_29);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set_uint8(x_33, sizeof(void*)*2, x_1);
return x_33;
}
}
static lean_object* _init_lp_BGPAttackDetector_mergeFields__injective___expr__def__1__9(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_1 = 0;
x_2 = lean_unsigned_to_nat(32u);
x_3 = lean_unsigned_to_nat(16u);
x_4 = lean_unsigned_to_nat(8u);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_7);
lean_inc_ref(x_8);
x_9 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_6, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_10);
x_12 = lean_unsigned_to_nat(3u);
x_13 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_12);
x_14 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_11, x_13);
x_15 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_3, x_3, x_2, x_9, x_14);
x_16 = 0;
x_17 = lean_unsigned_to_nat(4u);
x_18 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_17);
x_19 = lean_unsigned_to_nat(5u);
x_20 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_19);
lean_inc_ref(x_20);
x_21 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_18, x_20);
x_22 = lean_unsigned_to_nat(6u);
x_23 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_22);
x_24 = lean_unsigned_to_nat(7u);
x_25 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_24);
x_26 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_23, x_25);
x_27 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_3, x_3, x_2, x_21, x_26);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_15);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_16);
x_29 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_30, 0, x_4);
lean_ctor_set(x_30, 1, x_8);
lean_ctor_set(x_30, 2, x_20);
lean_ctor_set_uint8(x_30, sizeof(void*)*3, x_16);
x_31 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_33, 0, x_29);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set_uint8(x_33, sizeof(void*)*2, x_1);
return x_33;
}
}
static lean_object* _init_lp_BGPAttackDetector_mergeFields__injective___expr__def__1__14(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_1 = 0;
x_2 = lean_unsigned_to_nat(32u);
x_3 = lean_unsigned_to_nat(16u);
x_4 = lean_unsigned_to_nat(8u);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_7);
x_9 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_6, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_10);
x_12 = lean_unsigned_to_nat(3u);
x_13 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_12);
lean_inc_ref(x_11);
x_14 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_11, x_13);
x_15 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_3, x_3, x_2, x_9, x_14);
x_16 = 0;
x_17 = lean_unsigned_to_nat(4u);
x_18 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_17);
x_19 = lean_unsigned_to_nat(5u);
x_20 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_19);
x_21 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_18, x_20);
x_22 = lean_unsigned_to_nat(6u);
x_23 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_22);
x_24 = lean_unsigned_to_nat(7u);
x_25 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_24);
lean_inc_ref(x_23);
x_26 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_23, x_25);
x_27 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_3, x_3, x_2, x_21, x_26);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_15);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_16);
x_29 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_30, 0, x_4);
lean_ctor_set(x_30, 1, x_11);
lean_ctor_set(x_30, 2, x_23);
lean_ctor_set_uint8(x_30, sizeof(void*)*3, x_16);
x_31 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_33, 0, x_29);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set_uint8(x_33, sizeof(void*)*2, x_1);
return x_33;
}
}
static lean_object* _init_lp_BGPAttackDetector_mergeFields__injective___expr__def__1__19(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_1 = 0;
x_2 = lean_unsigned_to_nat(32u);
x_3 = lean_unsigned_to_nat(16u);
x_4 = lean_unsigned_to_nat(8u);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_7);
x_9 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_6, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_10);
x_12 = lean_unsigned_to_nat(3u);
x_13 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_12);
lean_inc_ref(x_13);
x_14 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_11, x_13);
x_15 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_3, x_3, x_2, x_9, x_14);
x_16 = 0;
x_17 = lean_unsigned_to_nat(4u);
x_18 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_17);
x_19 = lean_unsigned_to_nat(5u);
x_20 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_19);
x_21 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_18, x_20);
x_22 = lean_unsigned_to_nat(6u);
x_23 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_22);
x_24 = lean_unsigned_to_nat(7u);
x_25 = l_Std_Tactic_BVDecide_BVExpr_var___override(x_4, x_24);
lean_inc_ref(x_25);
x_26 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_4, x_4, x_3, x_23, x_25);
x_27 = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(x_3, x_3, x_2, x_21, x_26);
x_28 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_15);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*3, x_16);
x_29 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_30, 0, x_4);
lean_ctor_set(x_30, 1, x_13);
lean_ctor_set(x_30, 2, x_25);
lean_ctor_set_uint8(x_30, sizeof(void*)*3, x_16);
x_31 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(3, 2, 1);
lean_ctor_set(x_33, 0, x_29);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set_uint8(x_33, sizeof(void*)*2, x_1);
return x_33;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_isOriginHijack(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; uint8_t x_13; 
x_3 = lean_ctor_get(x_1, 3);
x_4 = lean_ctor_get(x_1, 4);
x_5 = lean_ctor_get(x_2, 3);
x_6 = lean_ctor_get(x_2, 4);
x_13 = lp_BGPAttackDetector_Subnet_instDecidableIsSubnetOf(x_3, x_5);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = lp_BGPAttackDetector_Subnet_instDecidableIsSubnetOf(x_5, x_3);
x_7 = x_14;
goto block_12;
}
else
{
x_7 = x_13;
goto block_12;
}
block_12:
{
if (x_7 == 0)
{
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lp_BGPAttackDetector_Path_origin(x_4);
x_9 = lp_BGPAttackDetector_Path_origin(x_6);
x_10 = lp_BGPAttackDetector_instDecidableEqPath_decEq(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
if (x_10 == 0)
{
return x_7;
}
else
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_isOriginHijack___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_isOriginHijack(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_detectOriginHijacks(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = ((lean_object*)(lp_BGPAttackDetector_detectOriginHijacks___closed__0));
x_4 = lean_obj_once(&lp_BGPAttackDetector_UpdatesContainSubnet___closed__1, &lp_BGPAttackDetector_UpdatesContainSubnet___closed__1_once, _init_lp_BGPAttackDetector_UpdatesContainSubnet___closed__1);
x_5 = l___private_Init_Data_List_Impl_0__List_zipWithTR_go___redArg(x_3, x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IPAddress_format(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec_ref(x_1);
x_6 = l_Nat_reprFast(x_2);
x_7 = ((lean_object*)(lp_BGPAttackDetector_IPAddress_ofString_x3f___closed__0));
x_8 = lean_string_append(x_6, x_7);
x_9 = l_Nat_reprFast(x_3);
x_10 = lean_string_append(x_8, x_9);
lean_dec_ref(x_9);
x_11 = lean_string_append(x_10, x_7);
x_12 = l_Nat_reprFast(x_4);
x_13 = lean_string_append(x_11, x_12);
lean_dec_ref(x_12);
x_14 = lean_string_append(x_13, x_7);
x_15 = l_Nat_reprFast(x_5);
x_16 = lean_string_append(x_14, x_15);
lean_dec_ref(x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Subnet_format(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec_ref(x_1);
x_4 = lp_BGPAttackDetector_IPAddress_format(x_2);
x_5 = ((lean_object*)(lp_BGPAttackDetector_Subnet_ofString_x3f___closed__0));
x_6 = lean_string_append(x_4, x_5);
x_7 = l_Nat_reprFast(x_3);
x_8 = lean_string_append(x_6, x_7);
lean_dec_ref(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_formatOriginAS(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lp_BGPAttackDetector_Path_origin(x_1);
x_3 = lp_BGPAttackDetector_Path_id(x_2);
lean_dec(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = ((lean_object*)(lp_BGPAttackDetector_Path_formatOriginAS___closed__0));
x_7 = l_Nat_reprFast(x_3);
x_8 = lean_string_append(x_6, x_7);
lean_dec_ref(x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_3);
x_9 = ((lean_object*)(lp_BGPAttackDetector_Path_formatOriginAS___closed__1));
return x_9;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Path_formatOriginAS___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_BGPAttackDetector_Path_formatOriginAS(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterTR_loop___at___00readFileLines_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___redArg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_string_utf8_byte_size(x_5);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_7, x_8);
if (x_9 == 0)
{
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_free_object(x_1);
lean_dec(x_5);
x_1 = x_6;
goto _start;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_string_utf8_byte_size(x_12);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_2);
x_1 = x_13;
x_2 = x_17;
goto _start;
}
else
{
lean_dec(x_12);
x_1 = x_13;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_readFileLines(lean_object* x_1) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_FS_readFile(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = ((lean_object*)(lp_BGPAttackDetector_readFileLines___closed__0));
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_box(0);
x_9 = l_String_splitOnAux(x_5, x_6, x_7, x_7, x_7, x_8);
lean_dec(x_5);
x_10 = lp_BGPAttackDetector_List_filterTR_loop___at___00readFileLines_spec__0(x_9, x_8);
lean_ctor_set(x_3, 0, x_10);
return x_3;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = ((lean_object*)(lp_BGPAttackDetector_readFileLines___closed__0));
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_box(0);
x_15 = l_String_splitOnAux(x_11, x_12, x_13, x_13, x_13, x_14);
lean_dec(x_11);
x_16 = lp_BGPAttackDetector_List_filterTR_loop___at___00readFileLines_spec__0(x_15, x_14);
x_17 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_3);
if (x_18 == 0)
{
return x_3;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_3, 0);
lean_inc(x_19);
lean_dec(x_3);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_readFileLines___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_readFileLines(x_1);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_mapIdx_go___at___00parseEntriesFromFile_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_array_to_list(x_2);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_array_get_size(x_2);
x_7 = lp_BGPAttackDetector_Entry_ofString_x3f(x_6, x_4);
x_8 = lean_array_push(x_2, x_7);
x_1 = x_5;
x_2 = x_8;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_mapIdx_go___at___00parseEntriesFromFile_spec__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_List_mapIdx_go___at___00parseEntriesFromFile_spec__0(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00parseEntriesFromFile_spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_array_to_list(x_2);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec_ref(x_1);
x_1 = x_5;
goto _start;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc_ref(x_4);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec_ref(x_1);
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec_ref(x_4);
x_9 = lean_array_push(x_2, x_8);
x_1 = x_7;
x_2 = x_9;
goto _start;
}
}
}
}
static lean_object* _init_lp_BGPAttackDetector_parseEntriesFromFile___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_parseEntriesFromFile(lean_object* x_1) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_readFileLines(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_obj_once(&lp_BGPAttackDetector_parseEntriesFromFile___closed__0, &lp_BGPAttackDetector_parseEntriesFromFile___closed__0_once, _init_lp_BGPAttackDetector_parseEntriesFromFile___closed__0);
x_7 = lp_BGPAttackDetector_List_mapIdx_go___at___00parseEntriesFromFile_spec__0(x_5, x_6);
lean_dec(x_5);
x_8 = lp_BGPAttackDetector_List_filterMapTR_go___at___00parseEntriesFromFile_spec__1(x_7, x_6);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_obj_once(&lp_BGPAttackDetector_parseEntriesFromFile___closed__0, &lp_BGPAttackDetector_parseEntriesFromFile___closed__0_once, _init_lp_BGPAttackDetector_parseEntriesFromFile___closed__0);
x_11 = lp_BGPAttackDetector_List_mapIdx_go___at___00parseEntriesFromFile_spec__0(x_9, x_10);
lean_dec(x_9);
x_12 = lp_BGPAttackDetector_List_filterMapTR_go___at___00parseEntriesFromFile_spec__1(x_11, x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_3, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 0, x_16);
return x_3;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_3);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_parseEntriesFromFile___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_parseEntriesFromFile(x_1);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_mapTR_loop___at___00listDirFiles_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___redArg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_IO_FS_DirEntry_path(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_IO_FS_DirEntry_path(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_listDirFiles(lean_object* x_1) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_read_dir(x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_array_to_list(x_5);
x_7 = lean_box(0);
x_8 = lp_BGPAttackDetector_List_mapTR_loop___at___00listDirFiles_spec__0(x_6, x_7);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_array_to_list(x_9);
x_11 = lean_box(0);
x_12 = lp_BGPAttackDetector_List_mapTR_loop___at___00listDirFiles_spec__0(x_10, x_11);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
return x_3;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_3, 0);
lean_inc(x_15);
lean_dec(x_3);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_listDirFiles___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_listDirFiles(x_1);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00parseEntriesFromDir_spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_array_to_list(x_2);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec_ref(x_1);
x_6 = l_List_foldl___at___00Array_appendList_spec__0___redArg(x_2, x_4);
x_1 = x_5;
x_2 = x_6;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_mapM_loop___at___00parseEntriesFromDir_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_List_reverse___redArg(x_2);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lp_BGPAttackDetector_parseEntriesFromFile(x_7);
lean_dec(x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec_ref(x_9);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_10);
{
lean_object* _tmp_0 = x_8;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lp_BGPAttackDetector_parseEntriesFromFile(x_12);
lean_dec(x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec_ref(x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_2);
x_1 = x_13;
x_2 = x_16;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_mapM_loop___at___00parseEntriesFromDir_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_List_mapM_loop___at___00parseEntriesFromDir_spec__0(x_1, x_2);
return x_4;
}
}
static lean_object* _init_lp_BGPAttackDetector_parseEntriesFromDir___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_parseEntriesFromDir(lean_object* x_1) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_listDirFiles(x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec_ref(x_3);
x_5 = lean_box(0);
x_6 = lp_BGPAttackDetector_List_mapM_loop___at___00parseEntriesFromDir_spec__0(x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_obj_once(&lp_BGPAttackDetector_parseEntriesFromDir___closed__0, &lp_BGPAttackDetector_parseEntriesFromDir___closed__0_once, _init_lp_BGPAttackDetector_parseEntriesFromDir___closed__0);
x_10 = lp_BGPAttackDetector___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00parseEntriesFromDir_spec__1(x_8, x_9);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_obj_once(&lp_BGPAttackDetector_parseEntriesFromDir___closed__0, &lp_BGPAttackDetector_parseEntriesFromDir___closed__0_once, _init_lp_BGPAttackDetector_parseEntriesFromDir___closed__0);
x_13 = lp_BGPAttackDetector___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00parseEntriesFromDir_spec__1(x_11, x_12);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_6);
if (x_15 == 0)
{
return x_6;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_6, 0);
lean_inc(x_16);
lean_dec(x_6);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_3);
if (x_18 == 0)
{
return x_3;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_3, 0);
lean_inc(x_19);
lean_dec(x_3);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_parseEntriesFromDir___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_parseEntriesFromDir(x_1);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_addToBaseline_go___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lp_BGPAttackDetector_Path_origin(x_1);
x_4 = lp_BGPAttackDetector_instDecidableEqPath_decEq(x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_addToBaseline_go___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_addToBaseline_go___lam__0(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_addToBaseline_go(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 3);
lean_inc_ref(x_3);
x_4 = lean_ctor_get(x_1, 4);
lean_inc(x_4);
lean_dec_ref(x_1);
x_5 = lp_BGPAttackDetector_Path_origin(x_4);
lean_dec(x_4);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_ctor_get(x_1, 3);
x_15 = lean_ctor_get(x_1, 4);
x_16 = lp_BGPAttackDetector_instDecidableEqSubnet_decEq(x_12, x_14);
if (x_16 == 0)
{
uint8_t x_17; 
lean_inc(x_11);
x_17 = !lean_is_exclusive(x_2);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_2, 1);
lean_dec(x_18);
x_19 = lean_ctor_get(x_2, 0);
lean_dec(x_19);
x_20 = lp_BGPAttackDetector_addToBaseline_go(x_1, x_11);
lean_ctor_set(x_2, 1, x_20);
return x_2;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_2);
x_21 = lp_BGPAttackDetector_addToBaseline_go(x_1, x_11);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_10);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_inc(x_15);
lean_inc(x_13);
lean_inc(x_12);
lean_dec_ref(x_1);
x_23 = !lean_is_exclusive(x_10);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_10, 1);
lean_dec(x_24);
x_25 = lean_ctor_get(x_10, 0);
lean_dec(x_25);
lean_inc(x_15);
x_26 = lean_alloc_closure((void*)(lp_BGPAttackDetector_addToBaseline_go___lam__0___boxed), 2, 1);
lean_closure_set(x_26, 0, x_15);
lean_inc(x_13);
x_27 = l_List_any___redArg(x_13, x_26);
if (x_27 == 0)
{
uint8_t x_28; 
lean_inc(x_11);
x_28 = !lean_is_exclusive(x_2);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_2, 1);
lean_dec(x_29);
x_30 = lean_ctor_get(x_2, 0);
lean_dec(x_30);
x_31 = lp_BGPAttackDetector_Path_origin(x_15);
lean_dec(x_15);
x_32 = lean_box(0);
lean_ctor_set(x_2, 1, x_32);
lean_ctor_set(x_2, 0, x_31);
x_33 = l_List_appendTR___redArg(x_13, x_2);
lean_ctor_set(x_10, 1, x_33);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_10);
lean_ctor_set(x_34, 1, x_11);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_2);
x_35 = lp_BGPAttackDetector_Path_origin(x_15);
lean_dec(x_15);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_List_appendTR___redArg(x_13, x_37);
lean_ctor_set(x_10, 1, x_38);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_10);
lean_ctor_set(x_39, 1, x_11);
return x_39;
}
}
else
{
lean_free_object(x_10);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
return x_2;
}
}
else
{
lean_object* x_40; uint8_t x_41; 
lean_dec(x_10);
lean_inc(x_15);
x_40 = lean_alloc_closure((void*)(lp_BGPAttackDetector_addToBaseline_go___lam__0___boxed), 2, 1);
lean_closure_set(x_40, 0, x_15);
lean_inc(x_13);
x_41 = l_List_any___redArg(x_13, x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_inc(x_11);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_42 = x_2;
} else {
 lean_dec_ref(x_2);
 x_42 = lean_box(0);
}
x_43 = lp_BGPAttackDetector_Path_origin(x_15);
lean_dec(x_15);
x_44 = lean_box(0);
if (lean_is_scalar(x_42)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_42;
}
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_List_appendTR___redArg(x_13, x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_12);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_11);
return x_48;
}
else
{
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
return x_2;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_addToBaseline(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_addToBaseline_go(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00buildBaseline_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec_ref(x_2);
x_5 = lp_BGPAttackDetector_addToBaseline_go(x_3, x_1);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_buildBaseline(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lp_BGPAttackDetector_List_foldl___at___00buildBaseline_spec__0(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParent_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec_ref(x_1);
x_4 = lean_array_to_list(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_19; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec_ref(x_2);
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_ctor_get(x_1, 3);
x_10 = lean_ctor_get(x_1, 4);
lean_inc(x_10);
x_11 = lean_alloc_closure((void*)(lp_BGPAttackDetector_addToBaseline_go___lam__0___boxed), 2, 1);
lean_closure_set(x_11, 0, x_10);
x_19 = lp_BGPAttackDetector_Subnet_instDecidableIsSubnetOf(x_9, x_7);
if (x_19 == 0)
{
x_12 = x_19;
goto block_18;
}
else
{
uint8_t x_20; 
x_20 = lp_BGPAttackDetector_Subnet_instDecidableIsSubnetOf(x_7, x_9);
if (x_20 == 0)
{
x_12 = x_19;
goto block_18;
}
else
{
lean_dec_ref(x_11);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
}
block_18:
{
if (x_12 == 0)
{
lean_dec_ref(x_11);
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
uint8_t x_14; 
lean_inc(x_8);
x_14 = l_List_any___redArg(x_8, x_11);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_array_push(x_3, x_5);
x_2 = x_6;
x_3 = x_15;
goto _start;
}
else
{
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_BGPAttackDetector_findHijackParent___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_findHijackParent(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_obj_once(&lp_BGPAttackDetector_findHijackParent___closed__0, &lp_BGPAttackDetector_findHijackParent___closed__0_once, _init_lp_BGPAttackDetector_findHijackParent___closed__0);
x_4 = lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParent_spec__0(x_2, x_1, x_3);
x_5 = l_List_head_x3f___redArg(x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00instReprHijackEvent_repr_spec__0_spec__0_spec__1_spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_1);
lean_ctor_set_tag(x_3, 5);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lp_BGPAttackDetector_instReprPath_repr(x_5, x_7);
x_9 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
x_2 = x_9;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_1);
x_13 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_1);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lp_BGPAttackDetector_instReprPath_repr(x_11, x_14);
x_16 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_2 = x_16;
x_3 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00instReprHijackEvent_repr_spec__0_spec__0_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_1);
lean_ctor_set_tag(x_3, 5);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lp_BGPAttackDetector_instReprPath_repr(x_5, x_7);
x_9 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
x_10 = lp_BGPAttackDetector_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00instReprHijackEvent_repr_spec__0_spec__0_spec__1_spec__2(x_1, x_9, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_1);
x_13 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_1);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lp_BGPAttackDetector_instReprPath_repr(x_11, x_14);
x_16 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = lp_BGPAttackDetector_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00instReprHijackEvent_repr_spec__0_spec__0_spec__1_spec__2(x_1, x_16, x_12);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_Format_joinSep___at___00List_repr___at___00instReprHijackEvent_repr_spec__0_spec__0___lam__0(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lp_BGPAttackDetector_instReprPath_repr(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_Format_joinSep___at___00List_repr___at___00instReprHijackEvent_repr_spec__0_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec_ref(x_1);
x_6 = lp_BGPAttackDetector_Std_Format_joinSep___at___00List_repr___at___00instReprHijackEvent_repr_spec__0_spec__0___lam__0(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec_ref(x_1);
x_8 = lp_BGPAttackDetector_Std_Format_joinSep___at___00List_repr___at___00instReprHijackEvent_repr_spec__0_spec__0___lam__0(x_7);
x_9 = lp_BGPAttackDetector_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00instReprHijackEvent_repr_spec__0_spec__0_spec__1(x_2, x_8, x_4);
return x_9;
}
}
}
}
static lean_object* _init_lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__5(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__2));
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__6(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__5, &lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__5_once, _init_lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__5);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = ((lean_object*)(lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__1));
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_3 = ((lean_object*)(lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__3));
x_4 = lp_BGPAttackDetector_Std_Format_joinSep___at___00List_repr___at___00instReprHijackEvent_repr_spec__0_spec__0(x_1, x_3);
x_5 = lean_obj_once(&lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__6, &lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__6_once, _init_lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__6);
x_6 = ((lean_object*)(lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__7));
x_7 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
x_8 = ((lean_object*)(lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg___closed__8));
x_9 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_9);
x_11 = 0;
x_12 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*1, x_11);
return x_12;
}
}
}
static lean_object* _init_lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__4(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__9(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(17u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec_ref(x_1);
x_5 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__5));
x_6 = ((lean_object*)(lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__3));
x_7 = lean_obj_once(&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__4, &lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__4_once, _init_lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__4);
x_8 = lp_BGPAttackDetector_instReprEntry_repr___redArg(x_2);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = 0;
x_11 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set_uint8(x_11, sizeof(void*)*1, x_10);
x_12 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_12, 0, x_6);
lean_ctor_set(x_12, 1, x_11);
x_13 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__9));
x_14 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_box(1);
x_16 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = ((lean_object*)(lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__6));
x_18 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_5);
x_20 = lean_obj_once(&lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7, &lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7_once, _init_lp_BGPAttackDetector_instReprSubnet_repr___redArg___closed__7);
x_21 = lp_BGPAttackDetector_instReprSubnet_repr___redArg(x_3);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set_uint8(x_23, sizeof(void*)*1, x_10);
x_24 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_13);
x_26 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_15);
x_27 = ((lean_object*)(lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__8));
x_28 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_5);
x_30 = lean_obj_once(&lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__9, &lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__9_once, _init_lp_BGPAttackDetector_instReprHijackEvent_repr___redArg___closed__9);
x_31 = lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg(x_4);
x_32 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set_uint8(x_33, sizeof(void*)*1, x_10);
x_34 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_obj_once(&lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19, &lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19_once, _init_lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__19);
x_36 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__20));
x_37 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
x_38 = ((lean_object*)(lp_BGPAttackDetector_instReprIPAddress_repr___redArg___closed__21));
x_39 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_40, 0, x_35);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set_uint8(x_41, sizeof(void*)*1, x_10);
return x_41;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_instReprHijackEvent_repr___redArg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_instReprHijackEvent_repr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_instReprHijackEvent_repr(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___redArg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_List_repr___at___00instReprHijackEvent_repr_spec__0(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00detectSubprefixHijacks_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_array_to_list(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec_ref(x_2);
lean_inc(x_5);
lean_inc(x_1);
x_7 = lp_BGPAttackDetector_findHijackParent(x_1, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec_ref(x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
lean_ctor_set(x_12, 2, x_11);
x_13 = lean_array_push(x_3, x_12);
x_2 = x_6;
x_3 = x_13;
goto _start;
}
}
}
}
static lean_object* _init_lp_BGPAttackDetector_detectSubprefixHijacks___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_detectSubprefixHijacks(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_obj_once(&lp_BGPAttackDetector_detectSubprefixHijacks___closed__0, &lp_BGPAttackDetector_detectSubprefixHijacks___closed__0_once, _init_lp_BGPAttackDetector_detectSubprefixHijacks___closed__0);
x_4 = lp_BGPAttackDetector_List_filterMapTR_go___at___00detectSubprefixHijacks_spec__0(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__4___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec_ref(x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_8 = lp_BGPAttackDetector_instDecidableEqSubnet_decEq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__4___redArg(x_1, x_2, x_7);
lean_ctor_set(x_3, 2, x_9);
return x_3;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_13 = lp_BGPAttackDetector_instDecidableEqSubnet_decEq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__4___redArg(x_1, x_2, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_12);
return x_16;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3_spec__4_spec__6___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; uint64_t x_23; uint64_t x_24; uint64_t x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; size_t x_29; size_t x_30; size_t x_31; size_t x_32; size_t x_33; lean_object* x_34; lean_object* x_35; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_ctor_get(x_2, 0);
lean_dec(x_7);
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
x_11 = lean_ctor_get(x_5, 2);
x_12 = lean_ctor_get(x_5, 3);
x_13 = lean_array_get_size(x_1);
x_14 = lean_uint64_of_nat(x_9);
x_15 = lean_uint64_of_nat(x_10);
x_16 = lean_uint64_of_nat(x_11);
x_17 = lean_uint64_of_nat(x_12);
x_18 = lean_uint64_mix_hash(x_16, x_17);
x_19 = lean_uint64_mix_hash(x_15, x_18);
x_20 = lean_uint64_mix_hash(x_14, x_19);
x_21 = lean_uint64_of_nat(x_8);
x_22 = lean_uint64_mix_hash(x_20, x_21);
x_23 = 32;
x_24 = lean_uint64_shift_right(x_22, x_23);
x_25 = lean_uint64_xor(x_22, x_24);
x_26 = 16;
x_27 = lean_uint64_shift_right(x_25, x_26);
x_28 = lean_uint64_xor(x_25, x_27);
x_29 = lean_uint64_to_usize(x_28);
x_30 = lean_usize_of_nat(x_13);
x_31 = 1;
x_32 = lean_usize_sub(x_30, x_31);
x_33 = lean_usize_land(x_29, x_32);
x_34 = lean_array_uget_borrowed(x_1, x_33);
lean_inc(x_34);
lean_ctor_set(x_2, 2, x_34);
x_35 = lean_array_uset(x_1, x_33, x_2);
x_1 = x_35;
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint64_t x_46; uint64_t x_47; uint64_t x_48; uint64_t x_49; uint64_t x_50; uint64_t x_51; uint64_t x_52; uint64_t x_53; uint64_t x_54; uint64_t x_55; uint64_t x_56; uint64_t x_57; uint64_t x_58; uint64_t x_59; uint64_t x_60; size_t x_61; size_t x_62; size_t x_63; size_t x_64; size_t x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_37 = lean_ctor_get(x_3, 0);
x_38 = lean_ctor_get(x_2, 1);
x_39 = lean_ctor_get(x_2, 2);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_2);
x_40 = lean_ctor_get(x_3, 1);
x_41 = lean_ctor_get(x_37, 0);
x_42 = lean_ctor_get(x_37, 1);
x_43 = lean_ctor_get(x_37, 2);
x_44 = lean_ctor_get(x_37, 3);
x_45 = lean_array_get_size(x_1);
x_46 = lean_uint64_of_nat(x_41);
x_47 = lean_uint64_of_nat(x_42);
x_48 = lean_uint64_of_nat(x_43);
x_49 = lean_uint64_of_nat(x_44);
x_50 = lean_uint64_mix_hash(x_48, x_49);
x_51 = lean_uint64_mix_hash(x_47, x_50);
x_52 = lean_uint64_mix_hash(x_46, x_51);
x_53 = lean_uint64_of_nat(x_40);
x_54 = lean_uint64_mix_hash(x_52, x_53);
x_55 = 32;
x_56 = lean_uint64_shift_right(x_54, x_55);
x_57 = lean_uint64_xor(x_54, x_56);
x_58 = 16;
x_59 = lean_uint64_shift_right(x_57, x_58);
x_60 = lean_uint64_xor(x_57, x_59);
x_61 = lean_uint64_to_usize(x_60);
x_62 = lean_usize_of_nat(x_45);
x_63 = 1;
x_64 = lean_usize_sub(x_62, x_63);
x_65 = lean_usize_land(x_61, x_64);
x_66 = lean_array_uget_borrowed(x_1, x_65);
lean_inc(x_66);
x_67 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_67, 0, x_3);
lean_ctor_set(x_67, 1, x_38);
lean_ctor_set(x_67, 2, x_66);
x_68 = lean_array_uset(x_1, x_65, x_67);
x_1 = x_68;
x_2 = x_39;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3_spec__4___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
if (x_5 == 0)
{
lean_dec_ref(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3_spec__4_spec__6___redArg(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_4, x_6);
x_8 = lp_BGPAttackDetector___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3_spec__4___redArg(x_5, x_1, x_7);
return x_8;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__2___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lp_BGPAttackDetector_instDecidableEqSubnet_decEq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
return x_6;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__2___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__2___redArg(x_1, x_2);
lean_dec(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; uint64_t x_23; uint64_t x_24; uint64_t x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; size_t x_29; size_t x_30; size_t x_31; size_t x_32; size_t x_33; lean_object* x_34; uint8_t x_35; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
x_11 = lean_ctor_get(x_5, 2);
x_12 = lean_ctor_get(x_5, 3);
x_13 = lean_array_get_size(x_7);
x_14 = lean_uint64_of_nat(x_9);
x_15 = lean_uint64_of_nat(x_10);
x_16 = lean_uint64_of_nat(x_11);
x_17 = lean_uint64_of_nat(x_12);
x_18 = lean_uint64_mix_hash(x_16, x_17);
x_19 = lean_uint64_mix_hash(x_15, x_18);
x_20 = lean_uint64_mix_hash(x_14, x_19);
x_21 = lean_uint64_of_nat(x_8);
x_22 = lean_uint64_mix_hash(x_20, x_21);
x_23 = 32;
x_24 = lean_uint64_shift_right(x_22, x_23);
x_25 = lean_uint64_xor(x_22, x_24);
x_26 = 16;
x_27 = lean_uint64_shift_right(x_25, x_26);
x_28 = lean_uint64_xor(x_25, x_27);
x_29 = lean_uint64_to_usize(x_28);
x_30 = lean_usize_of_nat(x_13);
x_31 = 1;
x_32 = lean_usize_sub(x_30, x_31);
x_33 = lean_usize_land(x_29, x_32);
x_34 = lean_array_uget_borrowed(x_7, x_33);
x_35 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__2___redArg(x_2, x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_add(x_6, x_36);
lean_dec(x_6);
lean_inc(x_34);
x_38 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_38, 0, x_2);
lean_ctor_set(x_38, 1, x_3);
lean_ctor_set(x_38, 2, x_34);
x_39 = lean_array_uset(x_7, x_33, x_38);
x_40 = lean_unsigned_to_nat(4u);
x_41 = lean_nat_mul(x_37, x_40);
x_42 = lean_unsigned_to_nat(3u);
x_43 = lean_nat_div(x_41, x_42);
lean_dec(x_41);
x_44 = lean_array_get_size(x_39);
x_45 = lean_nat_dec_le(x_43, x_44);
lean_dec(x_43);
if (x_45 == 0)
{
lean_object* x_46; 
x_46 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3___redArg(x_39);
lean_ctor_set(x_1, 1, x_46);
lean_ctor_set(x_1, 0, x_37);
return x_1;
}
else
{
lean_ctor_set(x_1, 1, x_39);
lean_ctor_set(x_1, 0, x_37);
return x_1;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_inc(x_34);
x_47 = lean_box(0);
x_48 = lean_array_uset(x_7, x_33, x_47);
x_49 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__4___redArg(x_2, x_3, x_34);
x_50 = lean_array_uset(x_48, x_33, x_49);
lean_ctor_set(x_1, 1, x_50);
return x_1;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; uint64_t x_64; uint64_t x_65; uint64_t x_66; uint64_t x_67; uint64_t x_68; uint64_t x_69; uint64_t x_70; uint64_t x_71; uint64_t x_72; uint64_t x_73; uint64_t x_74; size_t x_75; size_t x_76; size_t x_77; size_t x_78; size_t x_79; lean_object* x_80; uint8_t x_81; 
x_51 = lean_ctor_get(x_2, 0);
x_52 = lean_ctor_get(x_1, 0);
x_53 = lean_ctor_get(x_1, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_1);
x_54 = lean_ctor_get(x_2, 1);
x_55 = lean_ctor_get(x_51, 0);
x_56 = lean_ctor_get(x_51, 1);
x_57 = lean_ctor_get(x_51, 2);
x_58 = lean_ctor_get(x_51, 3);
x_59 = lean_array_get_size(x_53);
x_60 = lean_uint64_of_nat(x_55);
x_61 = lean_uint64_of_nat(x_56);
x_62 = lean_uint64_of_nat(x_57);
x_63 = lean_uint64_of_nat(x_58);
x_64 = lean_uint64_mix_hash(x_62, x_63);
x_65 = lean_uint64_mix_hash(x_61, x_64);
x_66 = lean_uint64_mix_hash(x_60, x_65);
x_67 = lean_uint64_of_nat(x_54);
x_68 = lean_uint64_mix_hash(x_66, x_67);
x_69 = 32;
x_70 = lean_uint64_shift_right(x_68, x_69);
x_71 = lean_uint64_xor(x_68, x_70);
x_72 = 16;
x_73 = lean_uint64_shift_right(x_71, x_72);
x_74 = lean_uint64_xor(x_71, x_73);
x_75 = lean_uint64_to_usize(x_74);
x_76 = lean_usize_of_nat(x_59);
x_77 = 1;
x_78 = lean_usize_sub(x_76, x_77);
x_79 = lean_usize_land(x_75, x_78);
x_80 = lean_array_uget_borrowed(x_53, x_79);
x_81 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__2___redArg(x_2, x_80);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_82 = lean_unsigned_to_nat(1u);
x_83 = lean_nat_add(x_52, x_82);
lean_dec(x_52);
lean_inc(x_80);
x_84 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_84, 0, x_2);
lean_ctor_set(x_84, 1, x_3);
lean_ctor_set(x_84, 2, x_80);
x_85 = lean_array_uset(x_53, x_79, x_84);
x_86 = lean_unsigned_to_nat(4u);
x_87 = lean_nat_mul(x_83, x_86);
x_88 = lean_unsigned_to_nat(3u);
x_89 = lean_nat_div(x_87, x_88);
lean_dec(x_87);
x_90 = lean_array_get_size(x_85);
x_91 = lean_nat_dec_le(x_89, x_90);
lean_dec(x_89);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; 
x_92 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3___redArg(x_85);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_83);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
else
{
lean_object* x_94; 
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_83);
lean_ctor_set(x_94, 1, x_85);
return x_94;
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_inc(x_80);
x_95 = lean_box(0);
x_96 = lean_array_uset(x_53, x_79, x_95);
x_97 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__4___redArg(x_2, x_3, x_80);
x_98 = lean_array_uset(x_96, x_79, x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_52);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0_spec__0___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lp_BGPAttackDetector_instDecidableEqSubnet_decEq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0_spec__0___redArg(x_1, x_2);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint64_t x_11; uint64_t x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; uint64_t x_23; uint64_t x_24; uint64_t x_25; size_t x_26; size_t x_27; size_t x_28; size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_ctor_get(x_3, 3);
x_10 = lean_array_get_size(x_4);
x_11 = lean_uint64_of_nat(x_6);
x_12 = lean_uint64_of_nat(x_7);
x_13 = lean_uint64_of_nat(x_8);
x_14 = lean_uint64_of_nat(x_9);
x_15 = lean_uint64_mix_hash(x_13, x_14);
x_16 = lean_uint64_mix_hash(x_12, x_15);
x_17 = lean_uint64_mix_hash(x_11, x_16);
x_18 = lean_uint64_of_nat(x_5);
x_19 = lean_uint64_mix_hash(x_17, x_18);
x_20 = 32;
x_21 = lean_uint64_shift_right(x_19, x_20);
x_22 = lean_uint64_xor(x_19, x_21);
x_23 = 16;
x_24 = lean_uint64_shift_right(x_22, x_23);
x_25 = lean_uint64_xor(x_22, x_24);
x_26 = lean_uint64_to_usize(x_25);
x_27 = lean_usize_of_nat(x_10);
x_28 = 1;
x_29 = lean_usize_sub(x_27, x_28);
x_30 = lean_usize_land(x_26, x_29);
x_31 = lean_array_uget_borrowed(x_4, x_30);
x_32 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0_spec__0___redArg(x_2, x_31);
return x_32;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0___redArg(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00buildBaselineMap_spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_4, 3);
lean_inc_ref(x_6);
x_7 = lean_ctor_get(x_4, 4);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lp_BGPAttackDetector_Subnet_canonicalize(x_6);
x_9 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0___redArg(x_1, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lp_BGPAttackDetector_Path_origin(x_7);
lean_dec(x_7);
x_11 = lean_box(0);
lean_ctor_set(x_2, 1, x_11);
lean_ctor_set(x_2, 0, x_10);
x_12 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1___redArg(x_1, x_8, x_2);
x_1 = x_12;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
lean_dec_ref(x_9);
lean_inc(x_7);
x_15 = lean_alloc_closure((void*)(lp_BGPAttackDetector_addToBaseline_go___lam__0___boxed), 2, 1);
lean_closure_set(x_15, 0, x_7);
lean_inc(x_14);
x_16 = l_List_any___redArg(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lp_BGPAttackDetector_Path_origin(x_7);
lean_dec(x_7);
x_18 = lean_box(0);
lean_ctor_set(x_2, 1, x_18);
lean_ctor_set(x_2, 0, x_17);
x_19 = l_List_appendTR___redArg(x_14, x_2);
x_20 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1___redArg(x_1, x_8, x_19);
x_1 = x_20;
x_2 = x_5;
goto _start;
}
else
{
lean_dec(x_14);
lean_dec_ref(x_8);
lean_dec(x_7);
lean_free_object(x_2);
x_2 = x_5;
goto _start;
}
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_2, 0);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_2);
x_25 = lean_ctor_get(x_23, 3);
lean_inc_ref(x_25);
x_26 = lean_ctor_get(x_23, 4);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lp_BGPAttackDetector_Subnet_canonicalize(x_25);
x_28 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0___redArg(x_1, x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lp_BGPAttackDetector_Path_origin(x_26);
lean_dec(x_26);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1___redArg(x_1, x_27, x_31);
x_1 = x_32;
x_2 = x_24;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_ctor_get(x_28, 0);
lean_inc(x_34);
lean_dec_ref(x_28);
lean_inc(x_26);
x_35 = lean_alloc_closure((void*)(lp_BGPAttackDetector_addToBaseline_go___lam__0___boxed), 2, 1);
lean_closure_set(x_35, 0, x_26);
lean_inc(x_34);
x_36 = l_List_any___redArg(x_34, x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lp_BGPAttackDetector_Path_origin(x_26);
lean_dec(x_26);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_List_appendTR___redArg(x_34, x_39);
x_41 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1___redArg(x_1, x_27, x_40);
x_1 = x_41;
x_2 = x_24;
goto _start;
}
else
{
lean_dec(x_34);
lean_dec_ref(x_27);
lean_dec(x_26);
x_2 = x_24;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_BGPAttackDetector_buildBaselineMap___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(16u);
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_BGPAttackDetector_buildBaselineMap___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_BGPAttackDetector_buildBaselineMap___closed__0, &lp_BGPAttackDetector_buildBaselineMap___closed__0_once, _init_lp_BGPAttackDetector_buildBaselineMap___closed__0);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_buildBaselineMap(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_obj_once(&lp_BGPAttackDetector_buildBaselineMap___closed__1, &lp_BGPAttackDetector_buildBaselineMap___closed__1_once, _init_lp_BGPAttackDetector_buildBaselineMap___closed__1);
x_3 = lp_BGPAttackDetector_List_foldl___at___00buildBaselineMap_spec__2(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0(x_1, x_2, x_3);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0_spec__0___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0_spec__0(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec_ref(x_2);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__2___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec_ref(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__4___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3_spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_BGPAttackDetector___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3_spec__4___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3_spec__4_spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00buildBaselineMap_spec__1_spec__3_spec__4_spec__6___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParentMap_spec__0___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 4);
x_4 = lp_BGPAttackDetector_Path_origin(x_3);
x_5 = lp_BGPAttackDetector_instDecidableEqPath_decEq(x_2, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParentMap_spec__0___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParentMap_spec__0___lam__0(x_1, x_2);
lean_dec(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParentMap_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; 
lean_dec_ref(x_4);
lean_dec_ref(x_2);
x_7 = lean_array_to_list(x_6);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_1, x_11);
x_13 = lean_nat_sub(x_12, x_9);
lean_dec(x_9);
lean_dec(x_12);
x_14 = lean_unsigned_to_nat(33u);
x_15 = lean_nat_dec_lt(x_13, x_14);
if (x_15 == 0)
{
lean_dec(x_13);
lean_free_object(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_inc_ref(x_2);
x_17 = lp_BGPAttackDetector_Subnet_parentAt(x_2, x_13);
x_18 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0___redArg(x_3, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_dec_ref(x_17);
lean_free_object(x_5);
x_5 = x_10;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec_ref(x_18);
lean_inc_ref(x_4);
x_21 = lean_alloc_closure((void*)(lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParentMap_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(x_21, 0, x_4);
lean_inc(x_20);
x_22 = l_List_any___redArg(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; 
lean_ctor_set_tag(x_5, 0);
lean_ctor_set(x_5, 1, x_20);
lean_ctor_set(x_5, 0, x_17);
x_23 = lean_array_push(x_6, x_5);
x_5 = x_10;
x_6 = x_23;
goto _start;
}
else
{
lean_dec(x_20);
lean_dec_ref(x_17);
lean_free_object(x_5);
x_5 = x_10;
goto _start;
}
}
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_26 = lean_ctor_get(x_5, 0);
x_27 = lean_ctor_get(x_5, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_5);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_sub(x_1, x_28);
x_30 = lean_nat_sub(x_29, x_26);
lean_dec(x_26);
lean_dec(x_29);
x_31 = lean_unsigned_to_nat(33u);
x_32 = lean_nat_dec_lt(x_30, x_31);
if (x_32 == 0)
{
lean_dec(x_30);
x_5 = x_27;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_inc_ref(x_2);
x_34 = lp_BGPAttackDetector_Subnet_parentAt(x_2, x_30);
x_35 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00buildBaselineMap_spec__0___redArg(x_3, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_dec_ref(x_34);
x_5 = x_27;
goto _start;
}
else
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec_ref(x_35);
lean_inc_ref(x_4);
x_38 = lean_alloc_closure((void*)(lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParentMap_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(x_38, 0, x_4);
lean_inc(x_37);
x_39 = l_List_any___redArg(x_37, x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_34);
lean_ctor_set(x_40, 1, x_37);
x_41 = lean_array_push(x_6, x_40);
x_5 = x_27;
x_6 = x_41;
goto _start;
}
else
{
lean_dec(x_37);
lean_dec_ref(x_34);
x_5 = x_27;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParentMap_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParentMap_spec__0(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec_ref(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_findHijackParentMap(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_12; uint8_t x_13; 
x_3 = lean_ctor_get(x_2, 3);
lean_inc_ref(x_3);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_12 = lean_unsigned_to_nat(8u);
x_13 = lean_nat_dec_le(x_12, x_4);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_unsigned_to_nat(0u);
x_5 = x_14;
goto block_11;
}
else
{
lean_object* x_15; 
x_15 = lean_nat_sub(x_4, x_12);
x_5 = x_15;
goto block_11;
}
block_11:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_nat_sub(x_4, x_5);
lean_dec(x_5);
x_7 = l_List_range(x_6);
x_8 = lean_obj_once(&lp_BGPAttackDetector_findHijackParent___closed__0, &lp_BGPAttackDetector_findHijackParent___closed__0_once, _init_lp_BGPAttackDetector_findHijackParent___closed__0);
x_9 = lp_BGPAttackDetector_List_filterMapTR_go___at___00findHijackParentMap_spec__0(x_4, x_3, x_1, x_2, x_7, x_8);
lean_dec(x_4);
x_10 = l_List_head_x3f___redArg(x_9);
lean_dec(x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_findHijackParentMap___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_findHijackParentMap(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0_spec__0___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
x_15 = lp_BGPAttackDetector_instDecidableEqSubnet_decEq(x_11, x_13);
if (x_15 == 0)
{
x_7 = x_15;
goto block_10;
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_eq(x_12, x_14);
x_7 = x_16;
goto block_10;
}
block_10:
{
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0_spec__0___redArg(x_1, x_2);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint64_t x_13; uint64_t x_14; uint64_t x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; uint64_t x_23; uint64_t x_24; uint64_t x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; size_t x_30; size_t x_31; size_t x_32; size_t x_33; size_t x_34; lean_object* x_35; lean_object* x_36; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
x_10 = lean_ctor_get(x_4, 2);
x_11 = lean_ctor_get(x_4, 3);
x_12 = lean_array_get_size(x_5);
x_13 = lean_uint64_of_nat(x_8);
x_14 = lean_uint64_of_nat(x_9);
x_15 = lean_uint64_of_nat(x_10);
x_16 = lean_uint64_of_nat(x_11);
x_17 = lean_uint64_mix_hash(x_15, x_16);
x_18 = lean_uint64_mix_hash(x_14, x_17);
x_19 = lean_uint64_mix_hash(x_13, x_18);
x_20 = lean_uint64_of_nat(x_7);
x_21 = lean_uint64_mix_hash(x_19, x_20);
x_22 = lean_uint64_of_nat(x_6);
x_23 = lean_uint64_mix_hash(x_21, x_22);
x_24 = 32;
x_25 = lean_uint64_shift_right(x_23, x_24);
x_26 = lean_uint64_xor(x_23, x_25);
x_27 = 16;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = lean_uint64_to_usize(x_29);
x_31 = lean_usize_of_nat(x_12);
x_32 = 1;
x_33 = lean_usize_sub(x_31, x_32);
x_34 = lean_usize_land(x_30, x_33);
x_35 = lean_array_uget_borrowed(x_5, x_34);
x_36 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0_spec__0___redArg(x_2, x_35);
return x_36;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___redArg(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterTR_loop___at___00detectSubprefixHijacksMap_spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = l_List_reverse___redArg(x_3);
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_2, 0);
lean_dec(x_9);
x_10 = lean_ctor_get(x_7, 3);
x_11 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_10);
x_12 = lp_BGPAttackDetector_Subnet_canonicalize(x_10);
x_13 = lp_BGPAttackDetector_Path_origin(x_11);
x_14 = lp_BGPAttackDetector_Path_id(x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
x_16 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___redArg(x_1, x_15);
lean_dec_ref(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_8;
goto _start;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec_ref(x_16);
x_19 = lean_unsigned_to_nat(3u);
x_20 = l_List_lengthTR___redArg(x_18);
lean_dec(x_18);
x_21 = lean_nat_dec_le(x_19, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_free_object(x_2);
lean_dec(x_5);
x_2 = x_8;
goto _start;
}
else
{
lean_ctor_set(x_2, 1, x_3);
{
lean_object* _tmp_1 = x_8;
lean_object* _tmp_2 = x_2;
x_2 = _tmp_1;
x_3 = _tmp_2;
}
goto _start;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_24 = lean_ctor_get(x_5, 0);
x_25 = lean_ctor_get(x_2, 1);
lean_inc(x_25);
lean_dec(x_2);
x_26 = lean_ctor_get(x_24, 3);
x_27 = lean_ctor_get(x_24, 4);
lean_inc_ref(x_26);
x_28 = lp_BGPAttackDetector_Subnet_canonicalize(x_26);
x_29 = lp_BGPAttackDetector_Path_origin(x_27);
x_30 = lp_BGPAttackDetector_Path_id(x_29);
lean_dec(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_30);
x_32 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___redArg(x_1, x_31);
lean_dec_ref(x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_dec(x_5);
x_2 = x_25;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec_ref(x_32);
x_35 = lean_unsigned_to_nat(3u);
x_36 = l_List_lengthTR___redArg(x_34);
lean_dec(x_34);
x_37 = lean_nat_dec_le(x_35, x_36);
lean_dec(x_36);
if (x_37 == 0)
{
lean_dec(x_5);
x_2 = x_25;
goto _start;
}
else
{
lean_object* x_39; 
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_5);
lean_ctor_set(x_39, 1, x_3);
x_2 = x_25;
x_3 = x_39;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterTR_loop___at___00detectSubprefixHijacksMap_spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_List_filterTR_loop___at___00detectSubprefixHijacksMap_spec__5(x_1, x_2, x_3);
lean_dec_ref(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterTR_loop___at___00detectSubprefixHijacksMap_spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___redArg(x_2);
return x_3;
}
else
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get_uint8(x_4, sizeof(void*)*5);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec_ref(x_1);
x_1 = x_6;
goto _start;
}
else
{
uint8_t x_8; 
lean_inc(x_4);
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_ctor_get(x_4, 3);
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_ctor_get(x_9, 1);
x_13 = lean_unsigned_to_nat(24u);
x_14 = lean_nat_dec_le(x_13, x_12);
if (x_14 == 0)
{
lean_free_object(x_1);
lean_dec(x_4);
x_1 = x_10;
goto _start;
}
else
{
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_10;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_4, 3);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_ctor_get(x_17, 1);
x_20 = lean_unsigned_to_nat(24u);
x_21 = lean_nat_dec_le(x_20, x_19);
if (x_21 == 0)
{
lean_dec(x_4);
x_1 = x_18;
goto _start;
}
else
{
lean_object* x_23; 
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_4);
lean_ctor_set(x_23, 1, x_2);
x_1 = x_18;
x_2 = x_23;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_List_foldl___at___00detectSubprefixHijacksMap_spec__4___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_eq(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00detectSubprefixHijacksMap_spec__4___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_List_foldl___at___00detectSubprefixHijacksMap_spec__4___lam__0(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__4___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec_ref(x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 x_7 = x_3;
} else {
 lean_dec_ref(x_3);
 x_7 = lean_box(0);
}
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
x_17 = lp_BGPAttackDetector_instDecidableEqSubnet_decEq(x_13, x_15);
if (x_17 == 0)
{
x_8 = x_17;
goto block_12;
}
else
{
uint8_t x_18; 
x_18 = lean_nat_dec_eq(x_14, x_16);
x_8 = x_18;
goto block_12;
}
block_12:
{
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__4___redArg(x_1, x_2, x_6);
if (lean_is_scalar(x_7)) {
 x_10 = lean_alloc_ctor(1, 3, 0);
} else {
 x_10 = x_7;
}
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_5);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_7)) {
 x_11 = lean_alloc_ctor(1, 3, 0);
} else {
 x_11 = x_7;
}
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_2);
lean_ctor_set(x_11, 2, x_6);
return x_11;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3_spec__4_spec__9___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; uint64_t x_23; uint64_t x_24; uint64_t x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 0);
x_7 = lean_ctor_get(x_2, 2);
x_8 = lean_ctor_get(x_2, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_3, 1);
x_10 = lean_ctor_get(x_5, 1);
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_ctor_get(x_6, 1);
x_13 = lean_ctor_get(x_6, 2);
x_14 = lean_ctor_get(x_6, 3);
x_15 = lean_array_get_size(x_1);
x_16 = lean_uint64_of_nat(x_11);
x_17 = lean_uint64_of_nat(x_12);
x_18 = lean_uint64_of_nat(x_13);
x_19 = lean_uint64_of_nat(x_14);
x_20 = lean_uint64_mix_hash(x_18, x_19);
x_21 = lean_uint64_mix_hash(x_17, x_20);
x_22 = lean_uint64_mix_hash(x_16, x_21);
x_23 = lean_uint64_of_nat(x_10);
x_24 = lean_uint64_mix_hash(x_22, x_23);
x_25 = lean_uint64_of_nat(x_9);
x_26 = lean_uint64_mix_hash(x_24, x_25);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_15);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget_borrowed(x_1, x_37);
lean_inc(x_38);
lean_ctor_set(x_2, 2, x_38);
x_39 = lean_array_uset(x_1, x_37, x_2);
x_1 = x_39;
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint64_t x_52; uint64_t x_53; uint64_t x_54; uint64_t x_55; uint64_t x_56; uint64_t x_57; uint64_t x_58; uint64_t x_59; uint64_t x_60; uint64_t x_61; uint64_t x_62; uint64_t x_63; uint64_t x_64; uint64_t x_65; uint64_t x_66; uint64_t x_67; uint64_t x_68; size_t x_69; size_t x_70; size_t x_71; size_t x_72; size_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_41 = lean_ctor_get(x_3, 0);
x_42 = lean_ctor_get(x_41, 0);
x_43 = lean_ctor_get(x_2, 1);
x_44 = lean_ctor_get(x_2, 2);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_2);
x_45 = lean_ctor_get(x_3, 1);
x_46 = lean_ctor_get(x_41, 1);
x_47 = lean_ctor_get(x_42, 0);
x_48 = lean_ctor_get(x_42, 1);
x_49 = lean_ctor_get(x_42, 2);
x_50 = lean_ctor_get(x_42, 3);
x_51 = lean_array_get_size(x_1);
x_52 = lean_uint64_of_nat(x_47);
x_53 = lean_uint64_of_nat(x_48);
x_54 = lean_uint64_of_nat(x_49);
x_55 = lean_uint64_of_nat(x_50);
x_56 = lean_uint64_mix_hash(x_54, x_55);
x_57 = lean_uint64_mix_hash(x_53, x_56);
x_58 = lean_uint64_mix_hash(x_52, x_57);
x_59 = lean_uint64_of_nat(x_46);
x_60 = lean_uint64_mix_hash(x_58, x_59);
x_61 = lean_uint64_of_nat(x_45);
x_62 = lean_uint64_mix_hash(x_60, x_61);
x_63 = 32;
x_64 = lean_uint64_shift_right(x_62, x_63);
x_65 = lean_uint64_xor(x_62, x_64);
x_66 = 16;
x_67 = lean_uint64_shift_right(x_65, x_66);
x_68 = lean_uint64_xor(x_65, x_67);
x_69 = lean_uint64_to_usize(x_68);
x_70 = lean_usize_of_nat(x_51);
x_71 = 1;
x_72 = lean_usize_sub(x_70, x_71);
x_73 = lean_usize_land(x_69, x_72);
x_74 = lean_array_uget_borrowed(x_1, x_73);
lean_inc(x_74);
x_75 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_75, 0, x_3);
lean_ctor_set(x_75, 1, x_43);
lean_ctor_set(x_75, 2, x_74);
x_76 = lean_array_uset(x_1, x_73, x_75);
x_1 = x_76;
x_2 = x_44;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3_spec__4___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
if (x_5 == 0)
{
lean_dec_ref(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3_spec__4_spec__9___redArg(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_mul(x_2, x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_4, x_6);
x_8 = lp_BGPAttackDetector___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3_spec__4___redArg(x_5, x_1, x_7);
return x_8;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__2___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lp_BGPAttackDetector_instDecidableEqSubnet_decEq(x_9, x_11);
if (x_13 == 0)
{
x_6 = x_13;
goto block_8;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_eq(x_10, x_12);
x_6 = x_14;
goto block_8;
}
block_8:
{
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
return x_6;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__2___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__2___redArg(x_1, x_2);
lean_dec(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; uint64_t x_17; uint64_t x_18; uint64_t x_19; uint64_t x_20; uint64_t x_21; uint64_t x_22; uint64_t x_23; uint64_t x_24; uint64_t x_25; uint64_t x_26; uint64_t x_27; uint64_t x_28; uint64_t x_29; uint64_t x_30; uint64_t x_31; uint64_t x_32; size_t x_33; size_t x_34; size_t x_35; size_t x_36; size_t x_37; lean_object* x_38; uint8_t x_39; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_5, 0);
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_ctor_get(x_5, 1);
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_ctor_get(x_6, 1);
x_13 = lean_ctor_get(x_6, 2);
x_14 = lean_ctor_get(x_6, 3);
x_15 = lean_array_get_size(x_8);
x_16 = lean_uint64_of_nat(x_11);
x_17 = lean_uint64_of_nat(x_12);
x_18 = lean_uint64_of_nat(x_13);
x_19 = lean_uint64_of_nat(x_14);
x_20 = lean_uint64_mix_hash(x_18, x_19);
x_21 = lean_uint64_mix_hash(x_17, x_20);
x_22 = lean_uint64_mix_hash(x_16, x_21);
x_23 = lean_uint64_of_nat(x_10);
x_24 = lean_uint64_mix_hash(x_22, x_23);
x_25 = lean_uint64_of_nat(x_9);
x_26 = lean_uint64_mix_hash(x_24, x_25);
x_27 = 32;
x_28 = lean_uint64_shift_right(x_26, x_27);
x_29 = lean_uint64_xor(x_26, x_28);
x_30 = 16;
x_31 = lean_uint64_shift_right(x_29, x_30);
x_32 = lean_uint64_xor(x_29, x_31);
x_33 = lean_uint64_to_usize(x_32);
x_34 = lean_usize_of_nat(x_15);
x_35 = 1;
x_36 = lean_usize_sub(x_34, x_35);
x_37 = lean_usize_land(x_33, x_36);
x_38 = lean_array_uget_borrowed(x_8, x_37);
x_39 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__2___redArg(x_2, x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_add(x_7, x_40);
lean_dec(x_7);
lean_inc(x_38);
x_42 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_42, 0, x_2);
lean_ctor_set(x_42, 1, x_3);
lean_ctor_set(x_42, 2, x_38);
x_43 = lean_array_uset(x_8, x_37, x_42);
x_44 = lean_unsigned_to_nat(4u);
x_45 = lean_nat_mul(x_41, x_44);
x_46 = lean_unsigned_to_nat(3u);
x_47 = lean_nat_div(x_45, x_46);
lean_dec(x_45);
x_48 = lean_array_get_size(x_43);
x_49 = lean_nat_dec_le(x_47, x_48);
lean_dec(x_47);
if (x_49 == 0)
{
lean_object* x_50; 
x_50 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3___redArg(x_43);
lean_ctor_set(x_1, 1, x_50);
lean_ctor_set(x_1, 0, x_41);
return x_1;
}
else
{
lean_ctor_set(x_1, 1, x_43);
lean_ctor_set(x_1, 0, x_41);
return x_1;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_inc(x_38);
x_51 = lean_box(0);
x_52 = lean_array_uset(x_8, x_37, x_51);
x_53 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__4___redArg(x_2, x_3, x_38);
x_54 = lean_array_uset(x_52, x_37, x_53);
lean_ctor_set(x_1, 1, x_54);
return x_1;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint64_t x_66; uint64_t x_67; uint64_t x_68; uint64_t x_69; uint64_t x_70; uint64_t x_71; uint64_t x_72; uint64_t x_73; uint64_t x_74; uint64_t x_75; uint64_t x_76; uint64_t x_77; uint64_t x_78; uint64_t x_79; uint64_t x_80; uint64_t x_81; uint64_t x_82; size_t x_83; size_t x_84; size_t x_85; size_t x_86; size_t x_87; lean_object* x_88; uint8_t x_89; 
x_55 = lean_ctor_get(x_2, 0);
x_56 = lean_ctor_get(x_55, 0);
x_57 = lean_ctor_get(x_1, 0);
x_58 = lean_ctor_get(x_1, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_1);
x_59 = lean_ctor_get(x_2, 1);
x_60 = lean_ctor_get(x_55, 1);
x_61 = lean_ctor_get(x_56, 0);
x_62 = lean_ctor_get(x_56, 1);
x_63 = lean_ctor_get(x_56, 2);
x_64 = lean_ctor_get(x_56, 3);
x_65 = lean_array_get_size(x_58);
x_66 = lean_uint64_of_nat(x_61);
x_67 = lean_uint64_of_nat(x_62);
x_68 = lean_uint64_of_nat(x_63);
x_69 = lean_uint64_of_nat(x_64);
x_70 = lean_uint64_mix_hash(x_68, x_69);
x_71 = lean_uint64_mix_hash(x_67, x_70);
x_72 = lean_uint64_mix_hash(x_66, x_71);
x_73 = lean_uint64_of_nat(x_60);
x_74 = lean_uint64_mix_hash(x_72, x_73);
x_75 = lean_uint64_of_nat(x_59);
x_76 = lean_uint64_mix_hash(x_74, x_75);
x_77 = 32;
x_78 = lean_uint64_shift_right(x_76, x_77);
x_79 = lean_uint64_xor(x_76, x_78);
x_80 = 16;
x_81 = lean_uint64_shift_right(x_79, x_80);
x_82 = lean_uint64_xor(x_79, x_81);
x_83 = lean_uint64_to_usize(x_82);
x_84 = lean_usize_of_nat(x_65);
x_85 = 1;
x_86 = lean_usize_sub(x_84, x_85);
x_87 = lean_usize_land(x_83, x_86);
x_88 = lean_array_uget_borrowed(x_58, x_87);
x_89 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__2___redArg(x_2, x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_90 = lean_unsigned_to_nat(1u);
x_91 = lean_nat_add(x_57, x_90);
lean_dec(x_57);
lean_inc(x_88);
x_92 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_92, 0, x_2);
lean_ctor_set(x_92, 1, x_3);
lean_ctor_set(x_92, 2, x_88);
x_93 = lean_array_uset(x_58, x_87, x_92);
x_94 = lean_unsigned_to_nat(4u);
x_95 = lean_nat_mul(x_91, x_94);
x_96 = lean_unsigned_to_nat(3u);
x_97 = lean_nat_div(x_95, x_96);
lean_dec(x_95);
x_98 = lean_array_get_size(x_93);
x_99 = lean_nat_dec_le(x_97, x_98);
lean_dec(x_97);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; 
x_100 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3___redArg(x_93);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_91);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
else
{
lean_object* x_102; 
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_91);
lean_ctor_set(x_102, 1, x_93);
return x_102;
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_inc(x_88);
x_103 = lean_box(0);
x_104 = lean_array_uset(x_58, x_87, x_103);
x_105 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__4___redArg(x_2, x_3, x_88);
x_106 = lean_array_uset(x_104, x_87, x_105);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_57);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00detectSubprefixHijacksMap_spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_4);
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 0);
lean_dec(x_7);
x_8 = lean_ctor_get(x_4, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 3);
lean_inc_ref(x_9);
x_10 = lean_ctor_get(x_4, 4);
lean_inc(x_10);
lean_dec_ref(x_4);
x_11 = lp_BGPAttackDetector_Subnet_canonicalize(x_9);
x_12 = lp_BGPAttackDetector_Path_origin(x_10);
lean_dec(x_10);
x_13 = lp_BGPAttackDetector_Path_id(x_12);
lean_dec(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___redArg(x_1, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
lean_ctor_set(x_2, 1, x_16);
lean_ctor_set(x_2, 0, x_8);
x_17 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1___redArg(x_1, x_14, x_2);
x_1 = x_17;
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_dec_ref(x_15);
lean_inc(x_8);
x_20 = lean_alloc_closure((void*)(lp_BGPAttackDetector_List_foldl___at___00detectSubprefixHijacksMap_spec__4___lam__0___boxed), 2, 1);
lean_closure_set(x_20, 0, x_8);
lean_inc(x_19);
x_21 = l_List_any___redArg(x_19, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_box(0);
lean_ctor_set(x_2, 1, x_22);
lean_ctor_set(x_2, 0, x_8);
x_23 = l_List_appendTR___redArg(x_19, x_2);
x_24 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1___redArg(x_1, x_14, x_23);
x_1 = x_24;
x_2 = x_6;
goto _start;
}
else
{
lean_dec(x_19);
lean_dec_ref(x_14);
lean_dec(x_8);
lean_free_object(x_2);
x_2 = x_6;
goto _start;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_ctor_get(x_2, 1);
lean_inc(x_27);
lean_dec(x_2);
x_28 = lean_ctor_get(x_4, 2);
lean_inc(x_28);
x_29 = lean_ctor_get(x_4, 3);
lean_inc_ref(x_29);
x_30 = lean_ctor_get(x_4, 4);
lean_inc(x_30);
lean_dec_ref(x_4);
x_31 = lp_BGPAttackDetector_Subnet_canonicalize(x_29);
x_32 = lp_BGPAttackDetector_Path_origin(x_30);
lean_dec(x_30);
x_33 = lp_BGPAttackDetector_Path_id(x_32);
lean_dec(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___redArg(x_1, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_28);
lean_ctor_set(x_37, 1, x_36);
x_38 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1___redArg(x_1, x_34, x_37);
x_1 = x_38;
x_2 = x_27;
goto _start;
}
else
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = lean_ctor_get(x_35, 0);
lean_inc(x_40);
lean_dec_ref(x_35);
lean_inc(x_28);
x_41 = lean_alloc_closure((void*)(lp_BGPAttackDetector_List_foldl___at___00detectSubprefixHijacksMap_spec__4___lam__0___boxed), 2, 1);
lean_closure_set(x_41, 0, x_28);
lean_inc(x_40);
x_42 = l_List_any___redArg(x_40, x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_28);
lean_ctor_set(x_44, 1, x_43);
x_45 = l_List_appendTR___redArg(x_40, x_44);
x_46 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1___redArg(x_1, x_34, x_45);
x_1 = x_46;
x_2 = x_27;
goto _start;
}
else
{
lean_dec(x_40);
lean_dec_ref(x_34);
lean_dec(x_28);
x_2 = x_27;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00detectSubprefixHijacksMap_spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
x_4 = lean_array_to_list(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec_ref(x_2);
lean_inc(x_5);
x_7 = lp_BGPAttackDetector_findHijackParentMap(x_1, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_dec(x_5);
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec_ref(x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
lean_ctor_set(x_12, 2, x_11);
x_13 = lean_array_push(x_3, x_12);
x_2 = x_6;
x_3 = x_13;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_filterMapTR_go___at___00detectSubprefixHijacksMap_spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_List_filterMapTR_go___at___00detectSubprefixHijacksMap_spec__3(x_1, x_2, x_3);
lean_dec_ref(x_1);
return x_4;
}
}
static lean_object* _init_lp_BGPAttackDetector_detectSubprefixHijacksMap___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(16u);
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_BGPAttackDetector_detectSubprefixHijacksMap___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_BGPAttackDetector_detectSubprefixHijacksMap___closed__0, &lp_BGPAttackDetector_detectSubprefixHijacksMap___closed__0_once, _init_lp_BGPAttackDetector_detectSubprefixHijacksMap___closed__0);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_detectSubprefixHijacksMap(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lp_BGPAttackDetector_buildBaselineMap(x_1);
x_4 = lean_box(0);
x_5 = lp_BGPAttackDetector_List_filterTR_loop___at___00detectSubprefixHijacksMap_spec__2(x_2, x_4);
x_6 = lean_obj_once(&lp_BGPAttackDetector_detectSubprefixHijacks___closed__0, &lp_BGPAttackDetector_detectSubprefixHijacks___closed__0_once, _init_lp_BGPAttackDetector_detectSubprefixHijacks___closed__0);
x_7 = lp_BGPAttackDetector_List_filterMapTR_go___at___00detectSubprefixHijacksMap_spec__3(x_3, x_5, x_6);
lean_dec_ref(x_3);
x_8 = lean_obj_once(&lp_BGPAttackDetector_detectSubprefixHijacksMap___closed__1, &lp_BGPAttackDetector_detectSubprefixHijacksMap___closed__1_once, _init_lp_BGPAttackDetector_detectSubprefixHijacksMap___closed__1);
lean_inc(x_7);
x_9 = lp_BGPAttackDetector_List_foldl___at___00detectSubprefixHijacksMap_spec__4(x_8, x_7);
x_10 = lp_BGPAttackDetector_List_filterTR_loop___at___00detectSubprefixHijacksMap_spec__5(x_9, x_7, x_4);
lean_dec_ref(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0(x_1, x_2, x_3);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0_spec__0___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0_spec__0(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec_ref(x_2);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__2___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec_ref(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3___redArg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__4___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3_spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_BGPAttackDetector___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3_spec__4___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3_spec__4_spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1_spec__3_spec__4_spec__9___redArg(x_2, x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_BGPAttackDetector_BGPAttackDetector_Basic(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide(uint8_t builtin);
lean_object* initialize_Std_Time(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_BGPAttackDetector_BGPAttackDetector(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_BGPAttackDetector_BGPAttackDetector_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_BGPAttackDetector_defaultIP = _init_lp_BGPAttackDetector_defaultIP();
lean_mark_persistent(lp_BGPAttackDetector_defaultIP);
lp_BGPAttackDetector_defaultSubnet = _init_lp_BGPAttackDetector_defaultSubnet();
lean_mark_persistent(lp_BGPAttackDetector_defaultSubnet);
lp_BGPAttackDetector_defaultEntry = _init_lp_BGPAttackDetector_defaultEntry();
lean_mark_persistent(lp_BGPAttackDetector_defaultEntry);
lp_BGPAttackDetector_bgpTable = _init_lp_BGPAttackDetector_bgpTable();
lean_mark_persistent(lp_BGPAttackDetector_bgpTable);
lp_BGPAttackDetector_updates = _init_lp_BGPAttackDetector_updates();
lean_mark_persistent(lp_BGPAttackDetector_updates);
lp_BGPAttackDetector_mergeFields__injective___expr__def__1__4 = _init_lp_BGPAttackDetector_mergeFields__injective___expr__def__1__4();
lean_mark_persistent(lp_BGPAttackDetector_mergeFields__injective___expr__def__1__4);
lp_BGPAttackDetector_mergeFields__injective___expr__def__1__9 = _init_lp_BGPAttackDetector_mergeFields__injective___expr__def__1__9();
lean_mark_persistent(lp_BGPAttackDetector_mergeFields__injective___expr__def__1__9);
lp_BGPAttackDetector_mergeFields__injective___expr__def__1__14 = _init_lp_BGPAttackDetector_mergeFields__injective___expr__def__1__14();
lean_mark_persistent(lp_BGPAttackDetector_mergeFields__injective___expr__def__1__14);
lp_BGPAttackDetector_mergeFields__injective___expr__def__1__19 = _init_lp_BGPAttackDetector_mergeFields__injective___expr__def__1__19();
lean_mark_persistent(lp_BGPAttackDetector_mergeFields__injective___expr__def__1__19);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
