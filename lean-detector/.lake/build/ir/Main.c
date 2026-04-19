// Lean compiler output
// Module: Main
// Imports: public import Init public import BGPAttackDetector public import Std.Data.HashMap
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
LEAN_EXPORT uint8_t lp_BGPAttackDetector_List_foldl___at___00printHijackSummary_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00printHijackSummary_spec__2___lam__0___boxed(lean_object*, lean_object*);
uint8_t l_List_any___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00printHijackSummary_spec__2(lean_object*, lean_object*);
lean_object* lean_get_stdout();
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IO_print___at___00IO_println___at___00printHijackSummary_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IO_print___at___00IO_println___at___00printHijackSummary_spec__0_spec__0___boxed(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0___boxed(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lp_BGPAttackDetector_Path_formatOriginAS(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_mapTR_loop___at___00printHijackSummary_spec__1(lean_object*, lean_object*);
static const lean_string_object lp_BGPAttackDetector_printHijackSummary___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "  Hijacked prefix  : "};
static const lean_object* lp_BGPAttackDetector_printHijackSummary___closed__0 = (const lean_object*)&lp_BGPAttackDetector_printHijackSummary___closed__0_value;
static const lean_string_object lp_BGPAttackDetector_printHijackSummary___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "  Announced by     : "};
static const lean_object* lp_BGPAttackDetector_printHijackSummary___closed__1 = (const lean_object*)&lp_BGPAttackDetector_printHijackSummary___closed__1_value;
static const lean_string_object lp_BGPAttackDetector_printHijackSummary___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "  Covers baseline  : "};
static const lean_object* lp_BGPAttackDetector_printHijackSummary___closed__2 = (const lean_object*)&lp_BGPAttackDetector_printHijackSummary___closed__2_value;
static const lean_string_object lp_BGPAttackDetector_printHijackSummary___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* lp_BGPAttackDetector_printHijackSummary___closed__3 = (const lean_object*)&lp_BGPAttackDetector_printHijackSummary___closed__3_value;
static const lean_string_object lp_BGPAttackDetector_printHijackSummary___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "  Victim AS(es)    : "};
static const lean_object* lp_BGPAttackDetector_printHijackSummary___closed__4 = (const lean_object*)&lp_BGPAttackDetector_printHijackSummary___closed__4_value;
static const lean_string_object lp_BGPAttackDetector_printHijackSummary___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "  Unique peers     : "};
static const lean_object* lp_BGPAttackDetector_printHijackSummary___closed__5 = (const lean_object*)&lp_BGPAttackDetector_printHijackSummary___closed__5_value;
static const lean_string_object lp_BGPAttackDetector_printHijackSummary___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "  Announcements    : "};
static const lean_object* lp_BGPAttackDetector_printHijackSummary___closed__6 = (const lean_object*)&lp_BGPAttackDetector_printHijackSummary___closed__6_value;
static const lean_string_object lp_BGPAttackDetector_printHijackSummary___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_BGPAttackDetector_printHijackSummary___closed__7 = (const lean_object*)&lp_BGPAttackDetector_printHijackSummary___closed__7_value;
lean_object* lp_BGPAttackDetector_Subnet_format(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_printHijackSummary(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_printHijackSummary___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_mapTR_loop___at___00deduplicateHijacks_spec__0(lean_object*, lean_object*);
lean_object* lp_BGPAttackDetector_Subnet_canonicalize(lean_object*);
lean_object* lp_BGPAttackDetector_Path_origin(lean_object*);
lean_object* lp_BGPAttackDetector_Path_id(lean_object*);
lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00deduplicateHijacks_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldrM___at___00deduplicateHijacks_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldrM___at___00deduplicateHijacks_spec__2___boxed(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
LEAN_EXPORT lean_object* lp_BGPAttackDetector___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00deduplicateHijacks_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00deduplicateHijacks_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
static lean_once_cell_t lp_BGPAttackDetector_deduplicateHijacks___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_deduplicateHijacks___closed__0;
static lean_once_cell_t lp_BGPAttackDetector_deduplicateHijacks___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_BGPAttackDetector_deduplicateHijacks___closed__1;
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_deduplicateHijacks(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_forIn_x27_loop___at___00main_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_forIn_x27_loop___at___00main_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_BGPAttackDetector_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "[*] Loading baseline (RIB) entries from: "};
static const lean_object* lp_BGPAttackDetector_main___closed__0 = (const lean_object*)&lp_BGPAttackDetector_main___closed__0_value;
static const lean_string_object lp_BGPAttackDetector_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[*] Parsed "};
static const lean_object* lp_BGPAttackDetector_main___closed__1 = (const lean_object*)&lp_BGPAttackDetector_main___closed__1_value;
static const lean_string_object lp_BGPAttackDetector_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = " baseline entries"};
static const lean_object* lp_BGPAttackDetector_main___closed__2 = (const lean_object*)&lp_BGPAttackDetector_main___closed__2_value;
static const lean_string_object lp_BGPAttackDetector_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "[*] Loading update entries from: "};
static const lean_object* lp_BGPAttackDetector_main___closed__3 = (const lean_object*)&lp_BGPAttackDetector_main___closed__3_value;
static const lean_string_object lp_BGPAttackDetector_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " update entries"};
static const lean_object* lp_BGPAttackDetector_main___closed__4 = (const lean_object*)&lp_BGPAttackDetector_main___closed__4_value;
static const lean_string_object lp_BGPAttackDetector_main___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 63, .m_data = "[*] Suspicious subprefix announcements (≤8-hop parent search): "};
static const lean_object* lp_BGPAttackDetector_main___closed__5 = (const lean_object*)&lp_BGPAttackDetector_main___closed__5_value;
static const lean_string_object lp_BGPAttackDetector_main___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "[*] Unique (prefix, origin) attacks: "};
static const lean_object* lp_BGPAttackDetector_main___closed__6 = (const lean_object*)&lp_BGPAttackDetector_main___closed__6_value;
static const lean_string_object lp_BGPAttackDetector_main___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* lp_BGPAttackDetector_main___closed__7 = (const lean_object*)&lp_BGPAttackDetector_main___closed__7_value;
static const lean_string_object lp_BGPAttackDetector_main___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "No suspicious announcements detected."};
static const lean_object* lp_BGPAttackDetector_main___closed__8 = (const lean_object*)&lp_BGPAttackDetector_main___closed__8_value;
static const lean_string_object lp_BGPAttackDetector_main___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Usage: bgpattackdetector <rib-dir> <update-dir>"};
static const lean_object* lp_BGPAttackDetector_main___closed__9 = (const lean_object*)&lp_BGPAttackDetector_main___closed__9_value;
static const lean_string_object lp_BGPAttackDetector_main___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "  <rib-dir>    directory containing bgpdump text-format RIB files"};
static const lean_object* lp_BGPAttackDetector_main___closed__10 = (const lean_object*)&lp_BGPAttackDetector_main___closed__10_value;
static const lean_string_object lp_BGPAttackDetector_main___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "  <update-dir> directory containing bgpdump text-format UPDATE files"};
static const lean_object* lp_BGPAttackDetector_main___closed__11 = (const lean_object*)&lp_BGPAttackDetector_main___closed__11_value;
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_BGPAttackDetector_parseEntriesFromDir(lean_object*);
lean_object* lp_BGPAttackDetector_detectSubprefixHijacksMap(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_forIn_x27_loop___at___00main_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_forIn_x27_loop___at___00main_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_BGPAttackDetector_List_foldl___at___00printHijackSummary_spec__2___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_eq(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00printHijackSummary_spec__2___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_BGPAttackDetector_List_foldl___at___00printHijackSummary_spec__2___lam__0(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00printHijackSummary_spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 0);
lean_dec(x_7);
x_8 = lean_ctor_get(x_4, 2);
lean_inc(x_8);
lean_dec_ref(x_4);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(lp_BGPAttackDetector_List_foldl___at___00printHijackSummary_spec__2___lam__0___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
lean_inc(x_1);
x_10 = l_List_any___redArg(x_1, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
lean_ctor_set(x_2, 1, x_11);
lean_ctor_set(x_2, 0, x_8);
x_12 = l_List_appendTR___redArg(x_1, x_2);
x_1 = x_12;
x_2 = x_6;
goto _start;
}
else
{
lean_dec(x_8);
lean_free_object(x_2);
x_2 = x_6;
goto _start;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_ctor_get(x_4, 2);
lean_inc(x_16);
lean_dec_ref(x_4);
lean_inc(x_16);
x_17 = lean_alloc_closure((void*)(lp_BGPAttackDetector_List_foldl___at___00printHijackSummary_spec__2___lam__0___boxed), 2, 1);
lean_closure_set(x_17, 0, x_16);
lean_inc(x_1);
x_18 = l_List_any___redArg(x_1, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_List_appendTR___redArg(x_1, x_20);
x_1 = x_21;
x_2 = x_15;
goto _start;
}
else
{
lean_dec(x_16);
x_2 = x_15;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IO_print___at___00IO_println___at___00printHijackSummary_spec__0_spec__0(lean_object* x_1) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_get_stdout();
x_4 = lean_ctor_get(x_3, 4);
lean_inc_ref(x_4);
lean_dec_ref(x_3);
x_5 = lean_apply_2(x_4, x_1, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IO_print___at___00IO_println___at___00printHijackSummary_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_IO_print___at___00IO_println___at___00printHijackSummary_spec__0_spec__0(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(lean_object* x_1) {
_start:
{
uint32_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 10;
x_4 = lean_string_push(x_1, x_3);
x_5 = lp_BGPAttackDetector_IO_print___at___00IO_println___at___00printHijackSummary_spec__0_spec__0(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_mapTR_loop___at___00printHijackSummary_spec__1(lean_object* x_1, lean_object* x_2) {
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
x_7 = lp_BGPAttackDetector_Path_formatOriginAS(x_5);
lean_dec(x_5);
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
x_11 = lp_BGPAttackDetector_Path_formatOriginAS(x_9);
lean_dec(x_9);
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
LEAN_EXPORT lean_object* lp_BGPAttackDetector_printHijackSummary(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec_ref(x_1);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec_ref(x_1);
x_7 = lean_ctor_get(x_2, 0);
x_8 = ((lean_object*)(lp_BGPAttackDetector_printHijackSummary___closed__0));
x_9 = lp_BGPAttackDetector_Subnet_format(x_6);
x_10 = lean_string_append(x_8, x_9);
lean_dec_ref(x_9);
x_11 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec_ref(x_11);
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
x_14 = lean_ctor_get(x_7, 2);
x_15 = lean_ctor_get(x_12, 4);
x_16 = lp_BGPAttackDetector_Path_formatOriginAS(x_15);
x_17 = ((lean_object*)(lp_BGPAttackDetector_printHijackSummary___closed__1));
x_18 = lean_string_append(x_17, x_16);
lean_dec_ref(x_16);
x_19 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec_ref(x_19);
lean_inc_ref(x_13);
x_20 = lp_BGPAttackDetector_Subnet_format(x_13);
x_21 = ((lean_object*)(lp_BGPAttackDetector_printHijackSummary___closed__2));
x_22 = lean_string_append(x_21, x_20);
lean_dec_ref(x_20);
x_23 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec_ref(x_23);
x_24 = ((lean_object*)(lp_BGPAttackDetector_printHijackSummary___closed__3));
x_25 = lean_box(0);
lean_inc(x_14);
x_26 = lp_BGPAttackDetector_List_mapTR_loop___at___00printHijackSummary_spec__1(x_14, x_25);
x_27 = l_String_intercalate(x_24, x_26);
x_28 = ((lean_object*)(lp_BGPAttackDetector_printHijackSummary___closed__4));
x_29 = lean_string_append(x_28, x_27);
lean_dec_ref(x_27);
x_30 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec_ref(x_30);
lean_inc_ref(x_2);
x_31 = lp_BGPAttackDetector_List_foldl___at___00printHijackSummary_spec__2(x_25, x_2);
x_32 = ((lean_object*)(lp_BGPAttackDetector_printHijackSummary___closed__5));
x_33 = l_List_lengthTR___redArg(x_31);
lean_dec(x_31);
x_34 = l_Nat_reprFast(x_33);
x_35 = lean_string_append(x_32, x_34);
lean_dec_ref(x_34);
x_36 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_35);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec_ref(x_36);
x_37 = l_List_lengthTR___redArg(x_2);
lean_dec_ref(x_2);
x_38 = ((lean_object*)(lp_BGPAttackDetector_printHijackSummary___closed__6));
x_39 = l_Nat_reprFast(x_37);
x_40 = lean_string_append(x_38, x_39);
lean_dec_ref(x_39);
x_41 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; 
lean_dec_ref(x_41);
x_42 = ((lean_object*)(lp_BGPAttackDetector_printHijackSummary___closed__7));
x_43 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_42);
return x_43;
}
else
{
return x_41;
}
}
else
{
lean_dec_ref(x_2);
return x_36;
}
}
else
{
lean_dec_ref(x_2);
return x_30;
}
}
else
{
lean_dec_ref(x_2);
return x_23;
}
}
else
{
lean_dec_ref(x_2);
return x_19;
}
}
else
{
lean_dec_ref(x_2);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_printHijackSummary___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_printHijackSummary(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_mapTR_loop___at___00deduplicateHijacks_spec__0(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 0);
lean_dec(x_8);
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_4, 1);
x_11 = lean_ctor_get(x_4, 0);
lean_dec(x_11);
x_12 = !lean_is_exclusive(x_5);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_5, 0);
x_14 = lean_ctor_get(x_5, 1);
lean_ctor_set(x_5, 1, x_10);
lean_ctor_set(x_5, 0, x_14);
lean_ctor_set(x_4, 1, x_5);
lean_ctor_set(x_4, 0, x_13);
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_7;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_5, 0);
x_17 = lean_ctor_get(x_5, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_5);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_10);
lean_ctor_set(x_4, 1, x_18);
lean_ctor_set(x_4, 0, x_16);
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_7;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_4, 1);
lean_inc(x_20);
lean_dec(x_4);
x_21 = lean_ctor_get(x_5, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_5, 1);
lean_inc(x_22);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_23 = x_5;
} else {
 lean_dec_ref(x_5);
 x_23 = lean_box(0);
}
if (lean_is_scalar(x_23)) {
 x_24 = lean_alloc_ctor(0, 2, 0);
} else {
 x_24 = x_23;
}
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_20);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_21);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_25);
{
lean_object* _tmp_0 = x_7;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
lean_dec(x_1);
x_28 = lean_ctor_get(x_4, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_29 = x_4;
} else {
 lean_dec_ref(x_4);
 x_29 = lean_box(0);
}
x_30 = lean_ctor_get(x_5, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_5, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_32 = x_5;
} else {
 lean_dec_ref(x_5);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_32;
}
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_28);
if (lean_is_scalar(x_29)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_29;
}
lean_ctor_set(x_34, 0, x_30);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_2);
x_1 = x_27;
x_2 = x_35;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_foldl___at___00deduplicateHijacks_spec__1(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 0);
lean_dec(x_7);
x_8 = lean_ctor_get(x_5, 3);
x_9 = lean_ctor_get(x_5, 4);
lean_inc_ref(x_8);
x_10 = lp_BGPAttackDetector_Subnet_canonicalize(x_8);
x_11 = lp_BGPAttackDetector_Path_origin(x_9);
x_12 = lp_BGPAttackDetector_Path_id(x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
x_14 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___redArg(x_1, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
lean_ctor_set(x_2, 1, x_15);
x_16 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1___redArg(x_1, x_13, x_2);
x_1 = x_16;
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec_ref(x_14);
x_19 = lean_box(0);
lean_ctor_set(x_2, 1, x_19);
x_20 = l_List_appendTR___redArg(x_18, x_2);
x_21 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1___redArg(x_1, x_13, x_20);
x_1 = x_21;
x_2 = x_6;
goto _start;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = lean_ctor_get(x_3, 0);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_ctor_get(x_23, 3);
x_26 = lean_ctor_get(x_23, 4);
lean_inc_ref(x_25);
x_27 = lp_BGPAttackDetector_Subnet_canonicalize(x_25);
x_28 = lp_BGPAttackDetector_Path_origin(x_26);
x_29 = lp_BGPAttackDetector_Path_id(x_28);
lean_dec(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
x_31 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00detectSubprefixHijacksMap_spec__0___redArg(x_1, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_3);
lean_ctor_set(x_33, 1, x_32);
x_34 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1___redArg(x_1, x_30, x_33);
x_1 = x_34;
x_2 = x_24;
goto _start;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_31, 0);
lean_inc(x_36);
lean_dec_ref(x_31);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_3);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_List_appendTR___redArg(x_36, x_38);
x_40 = lp_BGPAttackDetector_Std_DHashMap_Internal_Raw_u2080_insert___at___00detectSubprefixHijacksMap_spec__1___redArg(x_1, x_30, x_39);
x_1 = x_40;
x_2 = x_24;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldrM___at___00deduplicateHijacks_spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldrM___at___00deduplicateHijacks_spec__2(x_1, x_5);
lean_inc(x_4);
lean_inc(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_4);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldrM___at___00deduplicateHijacks_spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldrM___at___00deduplicateHijacks_spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00deduplicateHijacks_spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_2, x_3);
if (x_5 == 0)
{
size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_6 = 1;
x_7 = lean_usize_sub(x_2, x_6);
x_8 = lean_array_uget_borrowed(x_1, x_7);
x_9 = lp_BGPAttackDetector_Std_DHashMap_Internal_AssocList_foldrM___at___00deduplicateHijacks_spec__2(x_4, x_8);
lean_dec(x_4);
x_2 = x_7;
x_4 = x_9;
goto _start;
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00deduplicateHijacks_spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lp_BGPAttackDetector___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00deduplicateHijacks_spec__3(x_1, x_5, x_6, x_4);
lean_dec_ref(x_1);
return x_7;
}
}
static lean_object* _init_lp_BGPAttackDetector_deduplicateHijacks___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(16u);
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_lp_BGPAttackDetector_deduplicateHijacks___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_BGPAttackDetector_deduplicateHijacks___closed__0, &lp_BGPAttackDetector_deduplicateHijacks___closed__0_once, _init_lp_BGPAttackDetector_deduplicateHijacks___closed__0);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_deduplicateHijacks(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_obj_once(&lp_BGPAttackDetector_deduplicateHijacks___closed__1, &lp_BGPAttackDetector_deduplicateHijacks___closed__1_once, _init_lp_BGPAttackDetector_deduplicateHijacks___closed__1);
x_8 = lp_BGPAttackDetector_List_foldl___at___00deduplicateHijacks_spec__1(x_7, x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc_ref(x_9);
lean_dec_ref(x_8);
x_10 = lean_box(0);
x_11 = lean_array_get_size(x_9);
x_12 = lean_nat_dec_lt(x_6, x_11);
if (x_12 == 0)
{
lean_dec_ref(x_9);
x_2 = x_10;
goto block_5;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_usize_of_nat(x_11);
x_14 = 0;
x_15 = lp_BGPAttackDetector___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00deduplicateHijacks_spec__3(x_9, x_13, x_14, x_10);
lean_dec_ref(x_9);
x_2 = x_15;
goto block_5;
}
block_5:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lp_BGPAttackDetector_List_mapTR_loop___at___00deduplicateHijacks_spec__0(x_2, x_3);
return x_4;
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_forIn_x27_loop___at___00main_spec__0___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, x_2);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec_ref(x_1);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_ctor_set(x_6, 1, x_10);
lean_ctor_set(x_6, 0, x_8);
x_12 = lp_BGPAttackDetector_printHijackSummary(x_6, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec_ref(x_12);
x_13 = lean_box(0);
x_1 = x_7;
x_2 = x_13;
goto _start;
}
else
{
lean_dec(x_7);
return x_12;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_6, 0);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_6);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_8);
lean_ctor_set(x_17, 1, x_15);
x_18 = lp_BGPAttackDetector_printHijackSummary(x_17, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
lean_dec_ref(x_18);
x_19 = lean_box(0);
x_1 = x_7;
x_2 = x_19;
goto _start;
}
else
{
lean_dec(x_7);
return x_18;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_forIn_x27_loop___at___00main_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_BGPAttackDetector_List_forIn_x27_loop___at___00main_spec__0___redArg(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* x_1) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_List_lengthTR___redArg(x_1);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = ((lean_object*)(lp_BGPAttackDetector_printHijackSummary___closed__7));
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_get_x21Internal___redArg(x_6, x_1, x_7);
x_9 = ((lean_object*)(lp_BGPAttackDetector_main___closed__0));
x_10 = lean_string_append(x_9, x_8);
x_11 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
lean_dec_ref(x_11);
x_12 = lp_BGPAttackDetector_parseEntriesFromDir(x_8);
lean_dec(x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec_ref(x_12);
x_14 = ((lean_object*)(lp_BGPAttackDetector_main___closed__1));
x_15 = l_List_lengthTR___redArg(x_13);
x_16 = l_Nat_reprFast(x_15);
x_17 = lean_string_append(x_14, x_16);
lean_dec_ref(x_16);
x_18 = ((lean_object*)(lp_BGPAttackDetector_main___closed__2));
x_19 = lean_string_append(x_17, x_18);
x_20 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec_ref(x_20);
x_21 = lean_unsigned_to_nat(1u);
x_22 = l_List_get_x21Internal___redArg(x_6, x_1, x_21);
lean_dec(x_1);
x_23 = ((lean_object*)(lp_BGPAttackDetector_main___closed__3));
x_24 = lean_string_append(x_23, x_22);
x_25 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
lean_dec_ref(x_25);
x_26 = lp_BGPAttackDetector_parseEntriesFromDir(x_22);
lean_dec(x_22);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec_ref(x_26);
x_28 = l_List_lengthTR___redArg(x_27);
x_29 = l_Nat_reprFast(x_28);
x_30 = lean_string_append(x_14, x_29);
lean_dec_ref(x_29);
x_31 = ((lean_object*)(lp_BGPAttackDetector_main___closed__4));
x_32 = lean_string_append(x_30, x_31);
x_33 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec_ref(x_33);
x_34 = lp_BGPAttackDetector_detectSubprefixHijacksMap(x_13, x_27);
x_35 = ((lean_object*)(lp_BGPAttackDetector_main___closed__5));
x_36 = l_List_lengthTR___redArg(x_34);
x_37 = l_Nat_reprFast(x_36);
x_38 = lean_string_append(x_35, x_37);
lean_dec_ref(x_37);
x_39 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec_ref(x_39);
x_40 = lp_BGPAttackDetector_deduplicateHijacks(x_34);
x_41 = ((lean_object*)(lp_BGPAttackDetector_main___closed__6));
x_42 = l_List_lengthTR___redArg(x_40);
x_43 = l_Nat_reprFast(x_42);
x_44 = lean_string_append(x_41, x_43);
lean_dec_ref(x_43);
x_45 = ((lean_object*)(lp_BGPAttackDetector_main___closed__7));
x_46 = lean_string_append(x_44, x_45);
x_47 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_46);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
lean_dec_ref(x_47);
x_48 = l_List_isEmpty___redArg(x_40);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_box(0);
x_50 = lp_BGPAttackDetector_List_forIn_x27_loop___at___00main_spec__0___redArg(x_40, x_49);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = lean_ctor_get(x_50, 0);
lean_dec(x_52);
lean_ctor_set(x_50, 0, x_49);
return x_50;
}
else
{
lean_object* x_53; 
lean_dec(x_50);
x_53 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_53, 0, x_49);
return x_53;
}
}
else
{
return x_50;
}
}
else
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_40);
x_54 = ((lean_object*)(lp_BGPAttackDetector_main___closed__8));
x_55 = lp_BGPAttackDetector_IO_println___at___00printHijackSummary_spec__0(x_54);
return x_55;
}
}
else
{
lean_dec(x_40);
return x_47;
}
}
else
{
lean_dec(x_34);
return x_39;
}
}
else
{
lean_dec(x_27);
lean_dec(x_13);
return x_33;
}
}
else
{
uint8_t x_56; 
lean_dec(x_13);
x_56 = !lean_is_exclusive(x_26);
if (x_56 == 0)
{
return x_26;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_26, 0);
lean_inc(x_57);
lean_dec(x_26);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_57);
return x_58;
}
}
}
else
{
lean_dec(x_22);
lean_dec(x_13);
return x_25;
}
}
else
{
lean_dec(x_13);
lean_dec(x_1);
return x_20;
}
}
else
{
uint8_t x_59; 
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_12);
if (x_59 == 0)
{
return x_12;
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_12, 0);
lean_inc(x_60);
lean_dec(x_12);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
return x_61;
}
}
}
else
{
lean_dec(x_8);
lean_dec(x_1);
return x_11;
}
}
else
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_1);
x_62 = ((lean_object*)(lp_BGPAttackDetector_main___closed__9));
x_63 = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; 
lean_dec_ref(x_63);
x_64 = ((lean_object*)(lp_BGPAttackDetector_printHijackSummary___closed__7));
x_65 = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(x_64);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; 
lean_dec_ref(x_65);
x_66 = ((lean_object*)(lp_BGPAttackDetector_main___closed__10));
x_67 = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; 
lean_dec_ref(x_67);
x_68 = ((lean_object*)(lp_BGPAttackDetector_main___closed__11));
x_69 = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(x_68);
if (lean_obj_tag(x_69) == 0)
{
uint8_t x_70; 
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_69, 0);
lean_dec(x_71);
x_72 = lean_box(0);
lean_ctor_set(x_69, 0, x_72);
return x_69;
}
else
{
lean_object* x_73; lean_object* x_74; 
lean_dec(x_69);
x_73 = lean_box(0);
x_74 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_74, 0, x_73);
return x_74;
}
}
else
{
return x_69;
}
}
else
{
return x_67;
}
}
else
{
return x_65;
}
}
else
{
return x_63;
}
}
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_main___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = _lean_main(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_forIn_x27_loop___at___00main_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_6; 
x_6 = lp_BGPAttackDetector_List_forIn_x27_loop___at___00main_spec__0___redArg(x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_BGPAttackDetector_List_forIn_x27_loop___at___00main_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_BGPAttackDetector_List_forIn_x27_loop___at___00main_spec__0(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_BGPAttackDetector_BGPAttackDetector(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_BGPAttackDetector_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_BGPAttackDetector_BGPAttackDetector(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
void lean_initialize_runtime_module();

  #if defined(WIN32) || defined(_WIN32)
  #include <windows.h>
  #endif

  int main(int argc, char ** argv) {
  #if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
  #endif
  lean_object* in; lean_object* res;
argv = lean_setup_args(argc, argv);
lean_initialize_runtime_module();
lean_set_panic_messages(false);
res = initialize_BGPAttackDetector_Main(1 /* builtin */);
lean_set_panic_messages(true);
lean_io_mark_end_initialization();
if (lean_io_result_is_ok(res)) {
lean_dec_ref(res);
lean_init_task_manager();
in = lean_box(0);
int i = argc;
while (i > 1) {
 lean_object* n;
 i--;
 n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
 in = n;
}
res = _lean_main(in);
}
lean_finalize_task_manager();
if (lean_io_result_is_ok(res)) {
  int ret = 0;
  lean_dec_ref(res);
  return ret;
} else {
  lean_io_result_show_error(res);
  lean_dec_ref(res);
  return 1;
}
}
#ifdef __cplusplus
}
#endif
