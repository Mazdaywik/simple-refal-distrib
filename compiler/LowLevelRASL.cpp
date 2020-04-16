// This file automatically generated from 'LowLevelRASL.ref'
// Don't edit! Edit 'LowLevelRASL.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2043493415_2323087931
#define COOKIE1_ 2043493415U
#define COOKIE2_ 2323087931U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Map = 3,
  efunc_Apply = 4,
  efunc_Reduce = 5,
  efunc_DoMapAccum = 6,
  efunc_DoMapAccumm_Aux = 7,
  efunc_Add = 8,
  efunc_Sub = 9,
  efunc_Fetch = 10,
  efunc_Pipe = 11,
  efunc_gen_Pipe_S2L1 = 12,
  efunc_gen_Pipe_S3L1 = 13,
  efunc_LowLevelRASLm_Native = 14,
  efunc_LowLevelRASLm_RASL = 15,
  efunc_gen_Map_Z1 = 16,
  efunc_gen_LowLevelRASL_A5 = 17,
  efunc_gen_MapAccum_Z1 = 18,
  efunc_gen_LowLevelRASL_A4 = 19,
  efunc_SelectConstantsOutliner = 20,
  efunc_gen_LowLevelRASL_A3 = 21,
  efunc_gen_LowLevelRASL_A2 = 22,
  efunc_gen_Map_Z2 = 23,
  efunc_gen_MapAccum_Z2 = 24,
  efunc_Canonize = 25,
  efunc_gen_LowLevelRASL_A1 = 26,
  efunc_HashLittle2m_Chars = 27,
  efunc_HashFuncName = 28,
  efunc_CharFromScopeClass = 29,
  efunc_DisplayName = 30,
  efunc_SetScopeIDsm_Commands = 31,
  efunc_gen_Map_Z3 = 32,
  efunc_SetScopeIDsm_Patch = 33,
  efunc_OutlineConstantsm_WithNative = 34,
  efunc_OutlineConstantsm_RASLOnly = 35,
  efunc_gen_OutlineConstantsm_WithNative_S2A2 = 36,
  efunc_OutlineConstantsm_Commands = 37,
  efunc_gen_OutlineConstantsm_WithNative_S2A1 = 38,
  efunc_UpdateFuncTable = 39,
  efunc_gen_OutlineConstantsm_WithNative_S3A1 = 40,
  efunc_gen_OutlineConstantsm_WithNative_S4A1 = 41,
  efunc_OutlineConstantsm_Metatable = 42,
  efunc_gen_OutlineConstantsm_WithNative_S5C1 = 43,
  efunc_OneOf = 44,
  efunc_gen_OutlineConstantsm_WithNative_S5A2 = 45,
  efunc_gen_OutlineConstantsm_WithNative_S6A1 = 46,
  efunc_UpdateIdentTable = 47,
  efunc_gen_OutlineConstantsm_RASLOnly_S1A1 = 48,
  efunc_gen_OutlineConstantsm_RASLOnly_S3A1 = 49,
  efunc_gen_OutlineConstantsm_Metatable_L1A2 = 50,
  efunc_gen_OutlineConstantsm_Metatable_L1A1 = 51,
  efunc_gen_MapAccum_Z3 = 52,
  efunc_gen_MapAccum_Z4 = 53,
  efunc_gen_OutlineConstantsm_OneCommand_S1A1 = 54,
  efunc_gen_OutlineConstantsm_OneCommand_S2A1 = 55,
  efunc_gen_OutlineConstantsm_OneCommand_S3A1 = 56,
  efunc_gen_OutlineConstantsm_OneCommand_S4A1 = 57,
  efunc_gen_OutlineConstantsm_OneCommand_S5A1 = 58,
  efunc_gen_OutlineConstantsm_OneCommand_S6A1 = 59,
  efunc_gen_OutlineConstantsm_OneCommand_S7A1 = 60,
  efunc_gen_OutlineConstantsm_OneCommand_S8A1 = 61,
  efunc_gen_OutlineConstantsm_OneCommand_S9A1 = 62,
  efunc_gen_OutlineConstantsm_OneCommand_S10A1 = 63,
  efunc_gen_UpdateFuncTable_A1 = 64,
  efunc_UpdateTable = 65,
  efunc_gen_UpdateIdentTable_A1 = 66,
  efunc_Mu = 67,
  efunc_Up = 68,
  efunc_Evm_met = 69,
  efunc_Residue = 70,
  efunc_u_u_Metau_Residue = 71,
  efunc_MapAccum = 72,
  efunc_UnBracket = 73,
  efunc_DelAccumulator = 74,
  efunc_Inc = 75,
  efunc_Dec = 76,
  efunc_LowLevelRASL = 77,
  efunc_CalcDigest = 78,
  efunc_SetScopeIDs = 79,
  efunc_SetScopeIDsm_Command = 80,
  efunc_OutlineConstantsm_OneCommand = 81,
  efunc_MarkFunctionGenMode = 82,
  efunc_gen_Map_Z0 = 83,
  efunc_gen_DoMapAccum_Z1 = 84,
  efunc_gen_MapAccum_Z0 = 85,
  efunc_gen_DoMapAccum_Z2 = 86,
  efunc_gen_DoMapAccum_Z3 = 87,
  efunc_gen_OutlineConstantsm_Metatable_L1 = 88,
  efunc_gen_DoMapAccum_Z4 = 89,
  efunc_gen_DoMapAccumm_Aux_Z1 = 90,
  efunc_gen_DoMapAccum_Z0 = 91,
  efunc_gen_DoMapAccumm_Aux_Z2 = 92,
  efunc_gen_DoMapAccumm_Aux_Z3 = 93,
  efunc_gen_OutlineConstantsm_Metatable_L1D1 = 94,
  efunc_gen_DoMapAccumm_Aux_Z4 = 95,
  efunc_gen_DoMapAccumm_Aux_Z0 = 96,
};


enum ident {
  ident_UnitName = 0,
  ident_Function = 1,
  ident_CmdNativeFunction = 2,
  ident_CmdMetatable = 3,
  ident_CmdEnum = 4,
  ident_CmdSwap = 5,
  ident_CmdConditionFunc = 6,
  ident_CmdDeclaration = 7,
  ident_CmdDefineIdent = 8,
  ident_CmdEmitNativeCode = 9,
  ident_GNm_Entry = 10,
  ident_GNm_Local = 11,
  ident_CmdNumber = 12,
  ident_CmdNumberSave = 13,
  ident_CmdCreateElem = 14,
  ident_ElNumber = 15,
  ident_CmdSentence = 16,
  ident_CmdOpenELoop = 17,
  ident_AlgLeft = 18,
  ident_Cookie1 = 19,
  ident_Cookie2 = 20,
  ident_NativeBlock = 21,
  ident_True = 22,
  ident_Symbol = 23,
  ident_Identifier = 24,
  ident_Name = 25,
  ident_CmdName = 26,
  ident_CmdNameSave = 27,
  ident_ElName = 28,
  ident_CmdADT = 29,
  ident_CmdADTSave = 30,
  ident_CmdIdent = 31,
  ident_CmdIdentSave = 32,
  ident_ElIdent = 33,
  ident_OnlyInterpret = 34,
  ident_Functionm_ToRASL = 35,
  ident_OnlyDirect = 36,
  ident_Functionm_ToNative = 37,
  ident_CmdConditionFuncm_ToRASL = 38,
  ident_CmdConditionFuncm_ToNative = 39,
  ident_Mu = 40,
  ident_Up = 41,
  ident_Evm_met = 42,
  ident_Residue = 43,
  ident_u_u_Metau_Residue = 44,
  ident_Apply = 45,
  ident_Map = 46,
  ident_Reduce = 47,
  ident_Fetch = 48,
  ident_MapAccum = 49,
  ident_DoMapAccum = 50,
  ident_DoMapAccumm_Aux = 51,
  ident_UnBracket = 52,
  ident_DelAccumulator = 53,
  ident_Inc = 54,
  ident_Dec = 55,
  ident_Pipe = 56,
  ident_LowLevelRASL = 57,
  ident_Canonize = 58,
  ident_CalcDigest = 59,
  ident_HashFuncName = 60,
  ident_CharFromScopeClass = 61,
  ident_SetScopeIDs = 62,
  ident_SetScopeIDsm_Commands = 63,
  ident_SetScopeIDsm_Command = 64,
  ident_SetScopeIDsm_Patch = 65,
  ident_SelectConstantsOutliner = 66,
  ident_OutlineConstantsm_WithNative = 67,
  ident_OutlineConstantsm_RASLOnly = 68,
  ident_OutlineConstantsm_Metatable = 69,
  ident_OutlineConstantsm_Commands = 70,
  ident_OutlineConstantsm_OneCommand = 71,
  ident_UpdateFuncTable = 72,
  ident_UpdateIdentTable = 73,
  ident_UpdateTable = 74,
  ident_MarkFunctionGenMode = 75,
};


static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Mu/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mu("Mu", COOKIE1_, COOKIE2_, func_Mu);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 </8 & __Step-Drop/9 >/10 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Residue("Residue", COOKIE1_, COOKIE2_, func_Residue);


static refalrts::FnResult func_u_u_Metau_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & __Meta_Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Metau_Residue("__Meta_Residue", COOKIE1_, COOKIE2_, func_u_u_Metau_Residue);


static refalrts::FnResult func_Apply(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Apply/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply/4 s.Fn#1/5 e.Argument#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.Argument#1 as range 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.Argument#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.Fn#1/5 AsIs: e.Argument#1/7 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply/4 (/5 t.Closure#1/9 e.Bounded#1/7 )/6 e.Argument#1/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument#1 as range 2
  context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Bounded#1 as range 7
  //DEBUG: e.Argument#1: 2
  //DEBUG: t.Closure#1: 9
  //DEBUG: e.Bounded#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply/4 } Tile{ AsIs: t.Closure#1/9 } Tile{ AsIs: e.Bounded#1/7 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Apply("Apply", COOKIE1_, COOKIE2_, func_Apply);


static refalrts::FnResult func_Map(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Map/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map/4 t.Fn#1/5 t.Next#1/9 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 7
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Next#1/9 } >/11 </12 & Map/13 t.Fn#1/5/14 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Map]);
    refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map/4 t.Fn#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map/4 t.Fn#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Map("Map", COOKIE1_, COOKIE2_, func_Map);


static refalrts::FnResult func_Reduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Reduce/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 t.Next#1/11 e.Tail#1/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
    if( ! context[12] )
      continue;
    // closed e.Tail#1 as range 9
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 11
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce/14 t.Fn#1/5/15 Tile{ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/17 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Reduce]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[13], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce/4 t.Fn#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Reduce("Reduce", COOKIE1_, COOKIE2_, func_Reduce);


static refalrts::FnResult func_Fetch(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Fetch/4 e.Argument#1/2 t.Function#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument#1 as range 2
  //DEBUG: t.Function#1: 5
  //DEBUG: e.Argument#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 } Tile{ AsIs: t.Function#1/5 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Apply]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Fetch("Fetch", COOKIE1_, COOKIE2_, func_Fetch);


static refalrts::FnResult func_MapAccum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum/4 t.Fn#1/5 t.Acc#1/7 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 } (/9 )/10 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MapAccum("MapAccum", COOKIE1_, COOKIE2_, func_MapAccum);


static refalrts::FnResult func_DoMapAccum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & DoMapAccum/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum/4 t.new#1/5 t.new#2/7 (/11 e.new#3/9 )/12 e.new#4/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#3 as range 9
  // closed e.new#4 as range 2
  do {
    // </0 & DoMapAccum/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/13 )/12 t.Next#1/17 e.Tail#1/15 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.Scanned#1 as range 13
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 15
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Acc#1: 7
    //DEBUG: e.Scanned#1: 13
    //DEBUG: t.Next#1: 17
    //DEBUG: e.Tail#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 </20 & Apply/21 t.Fn#1/5/22 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/24 )/25 Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Apply]);
    refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_DoMapAccumm_Aux]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/9 )/12 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 9
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: e.Scanned#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum/4 t.Fn#1/5 {REMOVED TILE} (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoMapAccum("DoMapAccum", COOKIE1_, COOKIE2_, func_DoMapAccum);


static refalrts::FnResult func_DoMapAccumm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoMapAccum-Aux/4 t.Fn#1/5 (/9 e.Scanned#1/7 )/10 (/13 t.Acc#1/15 e.StepScanned#1/11 )/14 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Scanned#1 as range 7
  // closed e.Tail#1 as range 2
  context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 11
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Scanned#1: 7
  //DEBUG: e.Tail#1: 2
  //DEBUG: t.Acc#1: 15
  //DEBUG: e.StepScanned#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#1/15 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Scanned#1/7 } Tile{ AsIs: e.StepScanned#1/11 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoMapAccumm_Aux("DoMapAccum-Aux", COOKIE1_, COOKIE2_, func_DoMapAccumm_Aux);


static refalrts::FnResult func_UnBracket(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & UnBracket/4 (/7 e.Expr#1/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#1 as range 5
  //DEBUG: e.Expr#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UnBracket/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Expr#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnBracket("UnBracket", COOKIE1_, COOKIE2_, func_UnBracket);


static refalrts::FnResult func_DelAccumulator(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & DelAccumulator/4 t.Acc#1/5 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2
  //DEBUG: t.Acc#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DelAccumulator/4 t.Acc#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DelAccumulator("DelAccumulator", COOKIE1_, COOKIE2_, func_DelAccumulator);


static refalrts::FnResult func_Inc(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Inc/4 e.Num#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Num#1 as range 2
  //DEBUG: e.Num#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: e.Num#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Add]);
  refalrts::reinit_number(context[4], 1UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Inc("Inc", COOKIE1_, COOKIE2_, func_Inc);


static refalrts::FnResult func_Dec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Dec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Dec/4 s.Num#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.Num#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 AsIs: s.Num#1/7 HalfReuse: 1/1 } >/8 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::update_name(context[4], functions[efunc_Sub]);
    refalrts::reinit_number(context[1], 1UL);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Dec/4 e.Num#1/2 >/1
  // closed e.Num#1 as range 2
  //DEBUG: e.Num#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 } (/5 Tile{ AsIs: e.Num#1/2 } )/6 1/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[5]);
  refalrts::alloc_close_bracket(vm, context[6]);
  refalrts::alloc_number(vm, context[7], 1UL);
  refalrts::update_name(context[4], functions[efunc_Sub]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Dec("Dec", COOKIE1_, COOKIE2_, func_Dec);


static refalrts::FnResult func_gen_Pipe_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Pipe$2\1/4 t.Func#1/5 (/9 e.Funcs#1/7 )/10 e.Arg#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Funcs#1 as range 7
  // closed e.Arg#2 as range 2
  //DEBUG: t.Func#1: 5
  //DEBUG: e.Funcs#1: 7
  //DEBUG: e.Arg#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & Apply/12 Tile{ AsIs: t.Func#1/5 } Tile{ AsIs: e.Arg#2/2 } >/13 </14 Tile{ HalfReuse: & Pipe/9 AsIs: e.Funcs#1/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Apply]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_name(context[9], functions[efunc_Pipe]);
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Pipe_S2L1("Pipe$2\\1", COOKIE1_, COOKIE2_, func_gen_Pipe_S2L1);


static refalrts::FnResult func_gen_Pipe_S3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pipe$3\1/4 e.Arg#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#2 as range 2
  //DEBUG: e.Arg#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pipe$3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Arg#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Pipe_S3L1("Pipe$3\\1", COOKIE1_, COOKIE2_, func_gen_Pipe_S3L1);


static refalrts::FnResult func_Pipe(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Pipe/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Pipe/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Pipe/4 t.Func#1/7 >/1
      if( ! refalrts::empty_seq( context[5], context[6] ) )
        continue;
      //DEBUG: t.Func#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Pipe/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Func#1/7 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Pipe/4 t.Func#1/7 e.Funcs#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Funcs#1 as range 9
    //DEBUG: t.Func#1: 7
    //DEBUG: e.Funcs#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: [*]/0 Reuse: & Pipe$2\1/4 AsIs: t.Func#1/7 } (/11 Tile{ AsIs: e.Funcs#1/9 } )/12 Tile{ HalfReuse: {*}/1 ]] }
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_Pipe_S2L1]);
    refalrts::reinit_unwrapped_closure(context[1], context[0]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    refalrts::wrap_closure( context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pipe/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pipe/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: & Pipe$3\1/1 ]] }
  refalrts::reinit_name(context[1], functions[efunc_gen_Pipe_S3L1]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Pipe("Pipe", COOKIE1_, COOKIE2_, func_Pipe);


static refalrts::FnResult func_gen_LowLevelRASL_A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & LowLevelRASL=5/4 s.DebugInfo#1/5 s.Hash1#2/6 s.Hash2#2/7 t.Tables#5/8 e.Items#6/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#6 as range 2
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.Hash1#2: 6
  //DEBUG: s.Hash2#2: 7
  //DEBUG: t.Tables#5: 8
  //DEBUG: e.Items#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL-RASL/4 AsIs: s.DebugInfo#1/5 AsIs: s.Hash1#2/6 AsIs: s.Hash2#2/7 AsIs: t.Tables#5/8 AsIs: e.Items#6/2 AsIs: >/1 } </10 & LowLevelRASL-Native/11 s.Hash1#2/6/12 s.Hash2#2/7/13 t.Tables#5/8/14 e.Items#6/2/16 >/18 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_LowLevelRASLm_Native]);
  refalrts::copy_stvar(vm, context[12], context[6]);
  refalrts::copy_stvar(vm, context[13], context[7]);
  refalrts::copy_evar(vm, context[14], context[15], context[8], context[9]);
  refalrts::copy_evar(vm, context[16], context[17], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_LowLevelRASLm_RASL]);
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASL_A5("LowLevelRASL=5", COOKIE1_, COOKIE2_, func_gen_LowLevelRASL_A5);


static refalrts::FnResult func_gen_LowLevelRASL_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & LowLevelRASL=4/4 s.DebugInfo#1/5 s.Hash1#2/6 s.Hash2#2/7 s.GenMode#1/8 t.Tables#5/9 e.Items#5/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#5 as range 2
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.Hash1#2: 6
  //DEBUG: s.Hash2#2: 7
  //DEBUG: s.GenMode#1: 8
  //DEBUG: t.Tables#5: 9
  //DEBUG: e.Items#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=5/4 AsIs: s.DebugInfo#1/5 AsIs: s.Hash1#2/6 AsIs: s.Hash2#2/7 } Tile{ AsIs: t.Tables#5/9 } </11 & Map@1/12 Tile{ AsIs: s.GenMode#1/8 } Tile{ AsIs: e.Items#5/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_Map_Z1]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASL_A5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASL_A4("LowLevelRASL=4", COOKIE1_, COOKIE2_, func_gen_LowLevelRASL_A4);


static refalrts::FnResult func_gen_LowLevelRASL_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & LowLevelRASL=3/4 s.DebugInfo#1/5 s.Hash1#2/6 s.Hash2#2/7 s.GenMode#1/8 s.OutlineConstants#4/9 e.Items#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#4 as range 2
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.Hash1#2: 6
  //DEBUG: s.Hash2#2: 7
  //DEBUG: s.GenMode#1: 8
  //DEBUG: s.OutlineConstants#4: 9
  //DEBUG: e.Items#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=4/4 AsIs: s.DebugInfo#1/5 AsIs: s.Hash1#2/6 AsIs: s.Hash2#2/7 AsIs: s.GenMode#1/8 } </10 & MapAccum@1/11 Tile{ AsIs: s.OutlineConstants#4/9 } (/12 (/13 0/14 )/15 (/16 0/17 )/18 )/19 Tile{ AsIs: e.Items#4/2 } >/20 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_MapAccum_Z1]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_number(vm, context[14], 0UL);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_number(vm, context[17], 0UL);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASL_A4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[12], context[19] );
  refalrts::link_brackets( context[16], context[18] );
  refalrts::link_brackets( context[13], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[19] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASL_A3("LowLevelRASL=3", COOKIE1_, COOKIE2_, func_gen_LowLevelRASL_A3);


static refalrts::FnResult func_gen_LowLevelRASL_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & LowLevelRASL=2/4 s.DebugInfo#1/5 s.Hash1#2/6 s.Hash2#2/7 s.GenMode#1/8 e.Items#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#3 as range 2
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.Hash1#2: 6
  //DEBUG: s.Hash2#2: 7
  //DEBUG: s.GenMode#1: 8
  //DEBUG: e.Items#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=3/4 AsIs: s.DebugInfo#1/5 AsIs: s.Hash1#2/6 AsIs: s.Hash2#2/7 AsIs: s.GenMode#1/8 } </9 & SelectConstantsOutliner/10 Tile{ AsIs: e.Items#3/2 } >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_SelectConstantsOutliner]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASL_A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASL_A2("LowLevelRASL=2", COOKIE1_, COOKIE2_, func_gen_LowLevelRASL_A2);


static refalrts::FnResult func_gen_LowLevelRASL_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & LowLevelRASL=1/4 s.DebugInfo#1/5 s.GenMode#1/6 (/9 s.Hash1#2/11 s.Hash2#2/12 )/10 e.Items#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Items#2 as range 2
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.GenMode#1: 6
  //DEBUG: e.Items#2: 2
  //DEBUG: s.Hash1#2: 11
  //DEBUG: s.Hash2#2: 12

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.GenMode#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=2/4 AsIs: s.DebugInfo#1/5 } Tile{ AsIs: s.Hash1#2/11 AsIs: s.Hash2#2/12 HalfReuse: s.GenMode1 #6/10 } </13 Tile{ HalfReuse: & Map@2/9 } s.Hash1#2/11/14 s.Hash2#2/12/15 Tile{ AsIs: e.Items#2/2 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::copy_stvar(vm, context[14], context[11]);
  refalrts::copy_stvar(vm, context[15], context[12]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASL_A2]);
  refalrts::reinit_svar( context[10], context[6] );
  refalrts::reinit_name(context[9], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[11], context[10] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASL_A1("LowLevelRASL=1", COOKIE1_, COOKIE2_, func_gen_LowLevelRASL_A1);


static refalrts::FnResult func_LowLevelRASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & LowLevelRASL/4 s.GenMode#1/5 s.DebugInfo#1/6 (/9 e.SrcName#1/7 )/10 e.ProgramElements#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.SrcName#1 as range 7
  // closed e.ProgramElements#1 as range 2
  //DEBUG: s.GenMode#1: 5
  //DEBUG: s.DebugInfo#1: 6
  //DEBUG: e.SrcName#1: 7
  //DEBUG: e.ProgramElements#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.GenMode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL=1/4 } Tile{ AsIs: s.DebugInfo#1/6 HalfReuse: s.GenMode1 #5/9 } </11 & MapAccum@2/12 (/13 4001567069/14 291363191/15 )/16 (/17 # UnitName/18 </19 & Canonize/20 Tile{ AsIs: e.SrcName#1/7 } >/21 Tile{ AsIs: )/10 AsIs: e.ProgramElements#1/2 AsIs: >/1 } >/22 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_MapAccum_Z2]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_number(vm, context[14], 4001567069UL);
  refalrts::alloc_number(vm, context[15], 291363191UL);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_UnitName]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_Canonize]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASL_A1]);
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[17], context[10] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[10], context[1] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[20] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LowLevelRASL("LowLevelRASL", 0U, 0U, func_LowLevelRASL);


static refalrts::FnResult func_Canonize(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Canonize/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Canonize/4 e.Canonized#1/7 '\\'/11 e.NotCanonized#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = refalrts::char_left( '\\', context[9], context[10] );
      if( ! context[11] )
        continue;
      // closed e.NotCanonized#1 as range 9
      //DEBUG: e.Canonized#1: 7
      //DEBUG: e.NotCanonized#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Canonized#1/7 } Tile{ HalfReuse: '/'/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Canonize/11 AsIs: e.NotCanonized#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[4], '/');
      refalrts::reinit_name(context[11], functions[efunc_Canonize]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Canonize/4 e.Canonized#1/2 >/1
  // closed e.Canonized#1 as range 2
  //DEBUG: e.Canonized#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Canonize/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Canonized#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Canonize("Canonize", COOKIE1_, COOKIE2_, func_Canonize);


static refalrts::FnResult func_CalcDigest(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & CalcDigest/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CalcDigest/4 (/7 s.new#1/13 s.new#2/14 )/8 (/11 s.new#3/15 e.new#4/9 )/12 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 9
  do {
    // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # UnitName/15 e.SrcName#1/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_UnitName], context[15] ) )
      continue;
    // closed e.SrcName#1 as range 16
    //DEBUG: s.Hash1#1: 13
    //DEBUG: s.Hash2#1: 14
    //DEBUG: e.SrcName#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashLittle2-Chars/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } e.SrcName#1/16/18 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # UnitName/15 AsIs: e.SrcName#1/16 AsIs: )/12 } Tile{ ]] }
    refalrts::copy_evar(vm, context[18], context[19], context[16], context[17]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_HashLittle2m_Chars]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CalcDigest/4 (/7 s.new#5/13 s.new#6/14 )/8 (/11 s.new#7/15 s.new#8/18 e.new#9/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    // closed e.new#9 as range 16
    do {
      // </0 & CalcDigest/4 (/7 s.new#10/13 s.new#11/14 )/8 (/11 s.new#12/15 s.new#13/18 (/23 e.new#14/21 )/24 e.new#15/19 )/12 >/1
      context[19] = context[16];
      context[20] = context[17];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.new#14 as range 21
      // closed e.new#15 as range 19
      do {
        // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # Function/15 s.ScopeClass#1/18 (/23 e.Name#1/25 )/24 e.Commands#1/27 )/12 >/1
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[19];
        context[28] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_Function], context[15] ) )
          continue;
        // closed e.Name#1 as range 25
        // closed e.Commands#1 as range 27
        //DEBUG: s.Hash1#1: 13
        //DEBUG: s.Hash2#1: 14
        //DEBUG: s.ScopeClass#1: 18
        //DEBUG: e.Name#1: 25
        //DEBUG: e.Commands#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashFuncName/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } s.ScopeClass#1/18/29 e.Name#1/25/30 'R'/32 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function/15 AsIs: s.ScopeClass#1/18 AsIs: (/23 AsIs: e.Name#1/25 AsIs: )/24 AsIs: e.Commands#1/27 AsIs: )/12 } Tile{ ]] }
        refalrts::copy_stvar(vm, context[29], context[18]);
        refalrts::copy_evar(vm, context[30], context[31], context[25], context[26]);
        refalrts::alloc_char(vm, context[32], 'R');
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_HashFuncName]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        res = refalrts::splice_evar( res, context[29], context[32] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdNativeFunction/15 s.ScopeClass#1/18 (/23 e.Name#1/25 )/24 t.SrcPos#1/29 e.Code#1/27 )/12 >/1
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[19];
        context[28] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[15] ) )
          continue;
        // closed e.Name#1 as range 25
        context[30] = refalrts::tvar_left( context[29], context[27], context[28] );
        if( ! context[30] )
          continue;
        // closed e.Code#1 as range 27
        //DEBUG: s.Hash1#1: 13
        //DEBUG: s.Hash2#1: 14
        //DEBUG: s.ScopeClass#1: 18
        //DEBUG: e.Name#1: 25
        //DEBUG: t.SrcPos#1: 29
        //DEBUG: e.Code#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashFuncName/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } s.ScopeClass#1/18/31 e.Name#1/25/32 'N'/34 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdNativeFunction/15 AsIs: s.ScopeClass#1/18 AsIs: (/23 AsIs: e.Name#1/25 AsIs: )/24 AsIs: t.SrcPos#1/29 AsIs: e.Code#1/27 AsIs: )/12 } Tile{ ]] }
        refalrts::copy_stvar(vm, context[31], context[18]);
        refalrts::copy_evar(vm, context[32], context[33], context[25], context[26]);
        refalrts::alloc_char(vm, context[34], 'N');
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_HashFuncName]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        res = refalrts::splice_evar( res, context[31], context[34] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdMetatable/15 s.ScopeClass#1/18 (/23 e.Name#1/25 )/24 e.Metatable#1/27 )/12 >/1
      context[25] = context[21];
      context[26] = context[22];
      context[27] = context[19];
      context[28] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[15] ) )
        continue;
      // closed e.Name#1 as range 25
      // closed e.Metatable#1 as range 27
      //DEBUG: s.Hash1#1: 13
      //DEBUG: s.Hash2#1: 14
      //DEBUG: s.ScopeClass#1: 18
      //DEBUG: e.Name#1: 25
      //DEBUG: e.Metatable#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashFuncName/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } s.ScopeClass#1/18/29 e.Name#1/25/30 'T'/32 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdMetatable/15 AsIs: s.ScopeClass#1/18 AsIs: (/23 AsIs: e.Name#1/25 AsIs: )/24 AsIs: e.Metatable#1/27 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_stvar(vm, context[29], context[18]);
      refalrts::copy_evar(vm, context[30], context[31], context[25], context[26]);
      refalrts::alloc_char(vm, context[32], 'T');
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_HashFuncName]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[29], context[32] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdEnum/15 s.ScopeClass#1/18 e.Name#1/19 )/12 >/1
      context[19] = context[16];
      context[20] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdEnum], context[15] ) )
        continue;
      // closed e.Name#1 as range 19
      //DEBUG: s.Hash1#1: 13
      //DEBUG: s.Hash2#1: 14
      //DEBUG: s.ScopeClass#1: 18
      //DEBUG: e.Name#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashFuncName/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } s.ScopeClass#1/18/21 e.Name#1/19/22 'E'/24 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdEnum/15 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/19 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_stvar(vm, context[21], context[18]);
      refalrts::copy_evar(vm, context[22], context[23], context[19], context[20]);
      refalrts::alloc_char(vm, context[24], 'E');
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_HashFuncName]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[21], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdSwap/15 s.ScopeClass#1/18 e.Name#1/19 )/12 >/1
      context[19] = context[16];
      context[20] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdSwap], context[15] ) )
        continue;
      // closed e.Name#1 as range 19
      //DEBUG: s.Hash1#1: 13
      //DEBUG: s.Hash2#1: 14
      //DEBUG: s.ScopeClass#1: 18
      //DEBUG: e.Name#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashFuncName/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } s.ScopeClass#1/18/21 e.Name#1/19/22 'S'/24 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdSwap/15 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/19 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_stvar(vm, context[21], context[18]);
      refalrts::copy_evar(vm, context[22], context[23], context[19], context[20]);
      refalrts::alloc_char(vm, context[24], 'S');
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_HashFuncName]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[21], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdConditionFunc/15 s.ScopeClass#1/18 e.Name#1/19 )/12 >/1
      context[19] = context[16];
      context[20] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[15] ) )
        continue;
      // closed e.Name#1 as range 19
      //DEBUG: s.Hash1#1: 13
      //DEBUG: s.Hash2#1: 14
      //DEBUG: s.ScopeClass#1: 18
      //DEBUG: e.Name#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashFuncName/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } s.ScopeClass#1/18/21 e.Name#1/19/22 'C'/24 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdConditionFunc/15 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/19 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_stvar(vm, context[21], context[18]);
      refalrts::copy_evar(vm, context[22], context[23], context[19], context[20]);
      refalrts::alloc_char(vm, context[24], 'C');
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_HashFuncName]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[21], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdDeclaration/15 s.ScopeClass#1/18 e.Name#1/19 )/12 >/1
    context[19] = context[16];
    context[20] = context[17];
    if( ! refalrts::ident_term( identifiers[ident_CmdDeclaration], context[15] ) )
      continue;
    // closed e.Name#1 as range 19
    //DEBUG: s.Hash1#1: 13
    //DEBUG: s.Hash2#1: 14
    //DEBUG: s.ScopeClass#1: 18
    //DEBUG: e.Name#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashFuncName/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } s.ScopeClass#1/18/21 e.Name#1/19/22 'D'/24 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdDeclaration/15 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/19 AsIs: )/12 } Tile{ ]] }
    refalrts::copy_stvar(vm, context[21], context[18]);
    refalrts::copy_evar(vm, context[22], context[23], context[19], context[20]);
    refalrts::alloc_char(vm, context[24], 'D');
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_HashFuncName]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdDefineIdent/15 e.Name#1/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdDefineIdent], context[15] ) )
      continue;
    // closed e.Name#1 as range 16
    //DEBUG: s.Hash1#1: 13
    //DEBUG: s.Hash2#1: 14
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CalcDigest/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 AsIs: )/8 AsIs: (/11 AsIs: # CmdDefineIdent/15 AsIs: e.Name#1/16 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdEmitNativeCode/15 t.SrcPos#1/16 e.Code#1/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[15] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[9], context[10] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 9
  //DEBUG: s.Hash1#1: 13
  //DEBUG: s.Hash2#1: 14
  //DEBUG: t.SrcPos#1: 16
  //DEBUG: e.Code#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CalcDigest/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 AsIs: )/8 AsIs: (/11 AsIs: # CmdEmitNativeCode/15 AsIs: t.SrcPos#1/16 AsIs: e.Code#1/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CalcDigest("CalcDigest", COOKIE1_, COOKIE2_, func_CalcDigest);


static refalrts::FnResult func_HashFuncName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & HashFuncName/4 s.Hash1#1/5 s.Hash2#1/6 s.ScopeClass#1/7 e.Name#1/2 s.Sign#1/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: s.ScopeClass#1: 7
  //DEBUG: s.Sign#1: 8
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HashLittle2-Chars/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } </9 & CharFromScopeClass/10 Tile{ AsIs: s.ScopeClass#1/7 } >/11 </12 & DisplayName/13 Tile{ AsIs: e.Name#1/2 } >/14 Tile{ AsIs: s.Sign#1/8 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_CharFromScopeClass]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_DisplayName]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_HashLittle2m_Chars]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HashFuncName("HashFuncName", COOKIE1_, COOKIE2_, func_HashFuncName);


static refalrts::FnResult func_CharFromScopeClass(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & CharFromScopeClass/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CharFromScopeClass/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CharFromScopeClass/4 # GN-Entry/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CharFromScopeClass/4 # GN-Entry/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'E'/1 ]] }
    refalrts::reinit_char(context[1], 'E');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CharFromScopeClass/4 # GN-Local/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CharFromScopeClass/4 # GN-Local/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 'L'/1 ]] }
  refalrts::reinit_char(context[1], 'L');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CharFromScopeClass("CharFromScopeClass", COOKIE1_, COOKIE2_, func_CharFromScopeClass);


static refalrts::FnResult func_SetScopeIDs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & SetScopeIDs/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetScopeIDs/4 s.new#1/5 s.new#2/6 t.new#3/7 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SetScopeIDs/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # Function/11 s.ScopeClass#1/12 (/15 e.Name#1/13 )/16 e.Commands#1/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left( identifiers[ident_Function], context[9], context[10] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Name#1 as range 13
    // closed e.Commands#1 as range 9
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: s.ScopeClass#1: 12
    //DEBUG: e.Name#1: 13
    //DEBUG: e.Commands#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/11 AsIs: s.ScopeClass#1/12 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & SetScopeIDs-Commands/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Commands#1/9 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_SetScopeIDsm_Commands]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetScopeIDs/4 s.Hash1#1/5 s.Hash2#1/6 t.OtherItem#1/7 >/1
  //DEBUG: t.OtherItem#1: 7
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetScopeIDs/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetScopeIDs("SetScopeIDs", COOKIE1_, COOKIE2_, func_SetScopeIDs);


static refalrts::FnResult func_SetScopeIDsm_Commands(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & SetScopeIDs-Commands/4 s.Hash1#1/5 s.Hash2#1/6 e.Commands#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#1 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@3/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 AsIs: e.Commands#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetScopeIDsm_Commands("SetScopeIDs-Commands", COOKIE1_, COOKIE2_, func_SetScopeIDsm_Commands);


static refalrts::FnResult func_SetScopeIDsm_Command(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & SetScopeIDs-Command/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetScopeIDs-Command/4 s.new#1/5 s.new#2/6 t.new#3/7 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SetScopeIDs-Command/4 s.new#4/5 s.new#5/6 (/7 s.new#6/11 e.new#7/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#7 as range 9
    do {
      // </0 & SetScopeIDs-Command/4 s.new#8/5 s.new#9/6 (/7 s.new#10/11 e.new#11/12 s.new#12/16 s.new#13/15 s.new#14/14 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::svar_right( context[14], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_right( context[15], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_right( context[16], context[12], context[13] ) )
        continue;
      // closed e.new#11 as range 12
      do {
        // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdNumber/11 s.Direction#1/16 s.BracketNum#1/15 s.Number#1/14 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdNumber], context[11] ) )
          continue;
        if( ! refalrts::empty_seq( context[12], context[13] ) )
          continue;
        //DEBUG: s.Hash1#1: 5
        //DEBUG: s.Hash2#1: 6
        //DEBUG: s.Direction#1: 16
        //DEBUG: s.BracketNum#1: 15
        //DEBUG: s.Number#1: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Number#1/14 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 } # CmdNumber/17 Tile{ AsIs: s.Direction#1/16 AsIs: s.BracketNum#1/15 } Tile{ AsIs: </0 Reuse: & SetScopeIDs-Patch/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 HalfReuse: s.Number1 #14/7 HalfReuse: >/11 } Tile{ HalfReuse: )/1 ]] }
        refalrts::alloc_ident(vm, context[17], identifiers[ident_CmdNumber]);
        refalrts::reinit_open_bracket(context[8]);
        refalrts::update_name(context[4], functions[efunc_SetScopeIDsm_Patch]);
        refalrts::reinit_svar( context[7], context[14] );
        refalrts::reinit_close_call(context[11]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[8], context[1] );
        refalrts::push_stack( vm, context[11] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[16], context[15] );
        res = refalrts::splice_evar( res, context[17], context[17] );
        res = refalrts::splice_evar( res, context[8], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SetScopeIDs-Command/4 s.new#15/5 s.new#16/6 (/7 s.new#17/11 s.new#21/19 s.new#20/16 s.new#19/15 s.new#18/14 )/8 >/1
      context[17] = context[12];
      context[18] = context[13];
      if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      do {
        // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdNumberSave/11 s.Direction#1/19 s.BracketNum#1/16 s.SaveOffset#1/15 s.Number#1/14 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdNumberSave], context[11] ) )
          continue;
        //DEBUG: s.Hash1#1: 5
        //DEBUG: s.Hash2#1: 6
        //DEBUG: s.Direction#1: 19
        //DEBUG: s.BracketNum#1: 16
        //DEBUG: s.SaveOffset#1: 15
        //DEBUG: s.Number#1: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNumberSave/11 AsIs: s.Direction#1/19 AsIs: s.BracketNum#1/16 AsIs: s.SaveOffset#1/15 } Tile{ AsIs: </0 Reuse: & SetScopeIDs-Patch/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: s.Number#1/14 HalfReuse: >/8 HalfReuse: )/1 ]] }
        refalrts::update_name(context[4], functions[efunc_SetScopeIDsm_Patch]);
        refalrts::reinit_close_call(context[8]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[7], context[1] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[14];
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[7], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdCreateElem/11 s.CreateMode#1/19 s.ElemNo#1/16 # ElNumber/15 s.Number#1/14 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[11] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_ElNumber], context[15] ) )
        continue;
      //DEBUG: s.Hash1#1: 5
      //DEBUG: s.Hash2#1: 6
      //DEBUG: s.CreateMode#1: 19
      //DEBUG: s.ElemNo#1: 16
      //DEBUG: s.Number#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdCreateElem/11 AsIs: s.CreateMode#1/19 AsIs: s.ElemNo#1/16 AsIs: # ElNumber/15 } Tile{ AsIs: </0 Reuse: & SetScopeIDs-Patch/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: s.Number#1/14 HalfReuse: >/8 HalfReuse: )/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SetScopeIDsm_Patch]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[7], context[1] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdSentence/11 e.SubCommands#1/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[11] ) )
        continue;
      // closed e.SubCommands#1 as range 12
      //DEBUG: s.Hash1#1: 5
      //DEBUG: s.Hash2#1: 6
      //DEBUG: e.SubCommands#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdSentence/11 } Tile{ AsIs: </0 Reuse: & SetScopeIDs-Commands/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.SubCommands#1/12 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SetScopeIDsm_Commands]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[7], context[1] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdOpenELoop/11 # AlgLeft/14 s.BracketNum#1/15 s.VarNumber#1/16 e.SubCommands#1/12 )/8 >/1
    context[12] = context[9];
    context[13] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[11] ) )
      continue;
    context[14] = refalrts::ident_left( identifiers[ident_AlgLeft], context[12], context[13] );
    if( ! context[14] )
      continue;
    if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
      continue;
    // closed e.SubCommands#1 as range 12
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: s.BracketNum#1: 15
    //DEBUG: s.VarNumber#1: 16
    //DEBUG: e.SubCommands#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdOpenELoop/11 AsIs: # AlgLeft/14 AsIs: s.BracketNum#1/15 AsIs: s.VarNumber#1/16 } Tile{ AsIs: </0 Reuse: & SetScopeIDs-Commands/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.SubCommands#1/12 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_SetScopeIDsm_Commands]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 t.OtherCommand#1/7 >/1
  //DEBUG: t.OtherCommand#1: 7
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherCommand#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetScopeIDsm_Command("SetScopeIDs-Command", COOKIE1_, COOKIE2_, func_SetScopeIDsm_Command);


static refalrts::FnResult func_SetScopeIDsm_Patch(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & SetScopeIDs-Patch/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetScopeIDs-Patch/4 s.new#1/5 s.new#2/6 s.new#3/7 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 # Cookie1/7 >/1
    if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[7] ) )
      continue;
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 # Cookie1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Hash11 #5/1 ]] }
    refalrts::reinit_svar( context[1], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 # Cookie2/7 >/1
    if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[7] ) )
      continue;
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 # Cookie2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Hash21 #6/1 ]] }
    refalrts::reinit_svar( context[1], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 s.Number#1/7 >/1
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: s.Number#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 s.Number#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Number1 #7/1 ]] }
  refalrts::reinit_svar( context[1], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetScopeIDsm_Patch("SetScopeIDs-Patch", COOKIE1_, COOKIE2_, func_SetScopeIDsm_Patch);


static refalrts::FnResult func_SelectConstantsOutliner(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & SelectConstantsOutliner/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & SelectConstantsOutliner/4 e.Items-B#1/7 (/13 # NativeBlock/15 t.SrcPos#1/16 e.Code#1/11 )/14 e.Items-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_NativeBlock], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Items-E#1 as range 9
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      // closed e.Code#1 as range 11
      //DEBUG: e.Items-B#1: 7
      //DEBUG: e.Items-E#1: 9
      //DEBUG: t.SrcPos#1: 16
      //DEBUG: e.Code#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: & OutlineConstants-WithNative/4 AsIs: e.Items-B#1/7 AsIs: (/13 AsIs: # NativeBlock/15 AsIs: t.SrcPos#1/16 AsIs: e.Code#1/11 AsIs: )/14 } Tile{ AsIs: e.Items-E#1/9 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_OutlineConstantsm_WithNative]);
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[4], context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SelectConstantsOutliner/4 e.Items-B#1/7 (/13 # CmdNativeFunction/15 s.ScopeClass#1/16 (/19 e.Name#1/17 )/20 t.SrcPos#1/21 e.Code#1/11 )/14 e.Items-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_CmdNativeFunction], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Items-E#1 as range 9
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Name#1 as range 17
      context[22] = refalrts::tvar_left( context[21], context[11], context[12] );
      if( ! context[22] )
        continue;
      // closed e.Code#1 as range 11
      //DEBUG: e.Items-B#1: 7
      //DEBUG: e.Items-E#1: 9
      //DEBUG: s.ScopeClass#1: 16
      //DEBUG: e.Name#1: 17
      //DEBUG: t.SrcPos#1: 21
      //DEBUG: e.Code#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: & OutlineConstants-WithNative/4 AsIs: e.Items-B#1/7 AsIs: (/13 AsIs: # CmdNativeFunction/15 AsIs: s.ScopeClass#1/16 AsIs: (/19 AsIs: e.Name#1/17 AsIs: )/20 AsIs: t.SrcPos#1/21 AsIs: e.Code#1/11 AsIs: )/14 } Tile{ AsIs: e.Items-E#1/9 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_OutlineConstantsm_WithNative]);
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[4], context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SelectConstantsOutliner/4 e.Items#1/2 >/1
  // closed e.Items#1 as range 2
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & SelectConstantsOutliner/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: & OutlineConstants-RASLOnly/0 } Tile{ AsIs: e.Items#1/2 } Tile{ ]] }
  refalrts::reinit_name(context[0], functions[efunc_OutlineConstantsm_RASLOnly]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SelectConstantsOutliner("SelectConstantsOutliner", COOKIE1_, COOKIE2_, func_SelectConstantsOutliner);


static refalrts::FnResult func_gen_OutlineConstantsm_WithNative_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & OutlineConstants-WithNative$2=2/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.Tables#3/10 e.Commands#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Name#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#3 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: t.Tables#3: 10
  //DEBUG: e.Commands#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#3/10 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } Tile{ AsIs: e.Commands#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Function]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_WithNative_S2A2("OutlineConstants-WithNative$2=2", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_WithNative_S2A2);


static refalrts::FnResult func_gen_OutlineConstantsm_WithNative_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & OutlineConstants-WithNative$2=1/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 (/12 e.Commands#1/10 )/13 t.Tables#2/14 s.Id#2/16 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Name#1 as range 6
  // closed e.Commands#1 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: e.Commands#1: 10
  //DEBUG: t.Tables#2: 14
  //DEBUG: s.Id#2: 16

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/16 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-WithNative$2=2/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 HalfReuse: </12 } Tile{ HalfReuse: & OutlineConstants-Commands/13 AsIs: t.Tables#2/14 } Tile{ AsIs: e.Commands#1/10 } >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_WithNative_S2A2]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[13], functions[efunc_OutlineConstantsm_Commands]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  refalrts::splice_to_freelist_open( vm, context[12], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_WithNative_S2A1("OutlineConstants-WithNative$2=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_WithNative_S2A1);


static refalrts::FnResult func_gen_OutlineConstantsm_WithNative_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & OutlineConstants-WithNative$3=1/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.SrcPos#1/10 (/14 e.Code#1/12 )/15 t.Tables#2/16 s.Id#2/18 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Name#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Code#1 as range 12
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: t.SrcPos#1: 10
  //DEBUG: e.Code#1: 12
  //DEBUG: t.Tables#2: 16
  //DEBUG: s.Id#2: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/14 {REMOVED TILE} )/15 {REMOVED TILE} s.Id#2/18 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/16 } Tile{ HalfReuse: (/0 HalfReuse: # CmdNativeFunction/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: t.SrcPos#1/10 } Tile{ AsIs: e.Code#1/12 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdNativeFunction]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_WithNative_S3A1("OutlineConstants-WithNative$3=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_WithNative_S3A1);


static refalrts::FnResult func_gen_OutlineConstantsm_WithNative_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & OutlineConstants-WithNative$4=1/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.Tables#2/10 e.Metatable#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Name#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Metatable#2 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: t.Tables#2: 10
  //DEBUG: e.Metatable#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/10 } Tile{ HalfReuse: (/0 HalfReuse: # CmdMetatable/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } Tile{ AsIs: e.Metatable#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdMetatable]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_WithNative_S4A1("OutlineConstants-WithNative$4=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_WithNative_S4A1);


static refalrts::FnResult func_gen_OutlineConstantsm_WithNative_S5A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OutlineConstants-WithNative$5=2/4 s.Definition#1/5 s.ScopeClass#1/6 (/9 e.Name#1/7 )/10 t.Tables#3/11 s.Id#3/13 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Name#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Definition#1: 5
  //DEBUG: s.ScopeClass#1: 6
  //DEBUG: e.Name#1: 7
  //DEBUG: t.Tables#3: 11
  //DEBUG: s.Id#3: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.ScopeClass#1/6 {REMOVED TILE} {REMOVED TILE} s.Id#3/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#3/11 } Tile{ HalfReuse: (/4 AsIs: s.Definition#1/5 } Tile{ HalfReuse: s.ScopeClass1 #6/9 AsIs: e.Name#1/7 AsIs: )/10 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_svar( context[9], context[6] );
  refalrts::link_brackets( context[4], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_WithNative_S5A2("OutlineConstants-WithNative$5=2", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_WithNative_S5A2);


static refalrts::FnResult func_gen_OutlineConstantsm_WithNative_S6A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & OutlineConstants-WithNative$6=1/4 t.Tables#2/5 s.Id#2/7 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Tables#2: 5
  //DEBUG: s.Id#2: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OutlineConstants-WithNative$6=1/4 {REMOVED TILE} s.Id#2/7 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_WithNative_S6A1("OutlineConstants-WithNative$6=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_WithNative_S6A1);


static refalrts::FnResult func_OutlineConstantsm_WithNative(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & OutlineConstants-WithNative/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OutlineConstants-WithNative/4 t.new#1/10 (/7 s.new#2/9 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OutlineConstants-WithNative/4 t.Tables#1/10 (/7 # UnitName/9 e.SrcName#1/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_UnitName], context[9] ) )
      continue;
    // closed e.SrcName#1 as range 12
    //DEBUG: t.Tables#1: 10
    //DEBUG: e.SrcName#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OutlineConstants-WithNative/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#1/10 AsIs: (/7 AsIs: # UnitName/9 AsIs: e.SrcName#1/12 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OutlineConstants-WithNative/4 t.new#4/10 (/7 s.new#5/9 s.new#6/14 e.new#7/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & OutlineConstants-WithNative/4 t.new#8/10 (/7 s.new#9/9 s.new#10/14 (/19 e.new#11/17 )/20 e.new#12/15 )/8 >/1
      context[15] = context[12];
      context[16] = context[13];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.new#11 as range 17
      // closed e.new#12 as range 15
      do {
        // </0 & OutlineConstants-WithNative/4 t.Tables#1/10 (/7 # Function/9 s.ScopeClass#1/14 (/19 e.Name#1/21 )/20 e.Commands#1/23 )/8 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[15];
        context[24] = context[16];
        if( ! refalrts::ident_term( identifiers[ident_Function], context[9] ) )
          continue;
        // closed e.Name#1 as range 21
        // closed e.Commands#1 as range 23
        //DEBUG: t.Tables#1: 10
        //DEBUG: s.ScopeClass#1: 14
        //DEBUG: e.Name#1: 21
        //DEBUG: e.Commands#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-WithNative$2=1/9 AsIs: s.ScopeClass#1/14 AsIs: (/19 AsIs: e.Name#1/21 AsIs: )/20 } (/25 Tile{ AsIs: e.Commands#1/23 } )/26 Tile{ AsIs: </0 Reuse: & UpdateFuncTable/4 AsIs: t.Tables#1/10 } e.Name#1/21/27 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[25]);
        refalrts::alloc_close_bracket(vm, context[26]);
        refalrts::copy_evar(vm, context[27], context[28], context[21], context[22]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[9], functions[efunc_gen_OutlineConstantsm_WithNative_S2A1]);
        refalrts::update_name(context[4], functions[efunc_UpdateFuncTable]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[25], context[25] );
        res = refalrts::splice_evar( res, context[7], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & OutlineConstants-WithNative/4 t.Tables#1/10 (/7 # CmdNativeFunction/9 s.ScopeClass#1/14 (/19 e.Name#1/21 )/20 t.SrcPos#1/25 e.Code#1/23 )/8 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[15];
        context[24] = context[16];
        if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[9] ) )
          continue;
        // closed e.Name#1 as range 21
        context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
        if( ! context[26] )
          continue;
        // closed e.Code#1 as range 23
        //DEBUG: t.Tables#1: 10
        //DEBUG: s.ScopeClass#1: 14
        //DEBUG: e.Name#1: 21
        //DEBUG: t.SrcPos#1: 25
        //DEBUG: e.Code#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-WithNative$3=1/9 AsIs: s.ScopeClass#1/14 AsIs: (/19 AsIs: e.Name#1/21 AsIs: )/20 AsIs: t.SrcPos#1/25 } (/27 Tile{ AsIs: e.Code#1/23 } )/28 Tile{ AsIs: </0 Reuse: & UpdateFuncTable/4 AsIs: t.Tables#1/10 } e.Name#1/21/29 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[27]);
        refalrts::alloc_close_bracket(vm, context[28]);
        refalrts::copy_evar(vm, context[29], context[30], context[21], context[22]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[9], functions[efunc_gen_OutlineConstantsm_WithNative_S3A1]);
        refalrts::update_name(context[4], functions[efunc_UpdateFuncTable]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[28], context[28] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[27], context[27] );
        res = refalrts::splice_evar( res, context[7], context[26] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OutlineConstants-WithNative/4 t.Tables#1/10 (/7 # CmdMetatable/9 s.ScopeClass#1/14 (/19 e.Name#1/21 )/20 e.Metatable#1/23 )/8 >/1
      context[21] = context[17];
      context[22] = context[18];
      context[23] = context[15];
      context[24] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[9] ) )
        continue;
      // closed e.Name#1 as range 21
      // closed e.Metatable#1 as range 23
      //DEBUG: t.Tables#1: 10
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.Name#1: 21
      //DEBUG: e.Metatable#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-WithNative$4=1/9 AsIs: s.ScopeClass#1/14 AsIs: (/19 AsIs: e.Name#1/21 AsIs: )/20 } Tile{ AsIs: </0 Reuse: & OutlineConstants-Metatable/4 AsIs: t.Tables#1/10 } Tile{ AsIs: e.Metatable#1/23 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[9], functions[efunc_gen_OutlineConstantsm_WithNative_S4A1]);
      refalrts::update_name(context[4], functions[efunc_OutlineConstantsm_Metatable]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[7], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OutlineConstants-WithNative/4 t.Tables#1/10 (/7 s.Definition#1/9 s.ScopeClass#1/14 e.Name#1/15 )/8 >/1
    context[15] = context[12];
    context[16] = context[13];
    // closed e.Name#1 as range 15
    //DEBUG: t.Tables#1: 10
    //DEBUG: s.Definition#1: 9
    //DEBUG: s.ScopeClass#1: 14
    //DEBUG: e.Name#1: 15
    //9: s.Definition#1
    //10: t.Tables#1
    //14: s.ScopeClass#1
    //15: e.Name#1
    //22: s.Definition#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_OutlineConstantsm_WithNative_S5C1]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_OneOf]);
    refalrts::copy_stvar(vm, context[22], context[9]);
    refalrts::alloc_ident(vm, context[23], identifiers[ident_CmdEnum]);
    refalrts::alloc_ident(vm, context[24], identifiers[ident_CmdSwap]);
    refalrts::alloc_ident(vm, context[25], identifiers[ident_CmdConditionFunc]);
    refalrts::alloc_ident(vm, context[26], identifiers[ident_CmdDeclaration]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[20] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </17 & OutlineConstants-WithNative$5?1/21 # True/22 >/18
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::call_left( context[19], context[20], context[17], context[18] );
      context[22] = refalrts::ident_left( identifiers[ident_True], context[19], context[20] );
      if( ! context[22] )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: t.Tables#1: 10
      //DEBUG: s.Definition#1: 9
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.Name#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # True/22 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-WithNative$5=2/4 } Tile{ AsIs: s.Definition#1/9 AsIs: s.ScopeClass#1/14 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Name#1/15 } Tile{ AsIs: )/8 AsIs: </17 Reuse: & UpdateFuncTable/21 } Tile{ AsIs: t.Tables#1/10 } e.Name#1/15/23 Tile{ AsIs: >/18 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[15], context[16]);
      refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_WithNative_S5A2]);
      refalrts::update_name(context[21], functions[efunc_UpdateFuncTable]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[17] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[8], context[21] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[14] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[17], context[18]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OutlineConstants-WithNative/4 t.Tables#1/10 (/7 # CmdDefineIdent/9 e.Name#1/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdDefineIdent], context[9] ) )
      continue;
    // closed e.Name#1 as range 12
    //DEBUG: t.Tables#1: 10
    //DEBUG: e.Name#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-WithNative$6=1/4 } Tile{ HalfReuse: </7 HalfReuse: & UpdateIdentTable/9 } Tile{ AsIs: t.Tables#1/10 } Tile{ AsIs: e.Name#1/12 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_WithNative_S6A1]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_UpdateIdentTable]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OutlineConstants-WithNative/4 t.Tables#1/10 (/7 # CmdEmitNativeCode/9 t.SrcPos#1/12 e.Code#1/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 5
  //DEBUG: t.Tables#1: 10
  //DEBUG: t.SrcPos#1: 12
  //DEBUG: e.Code#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OutlineConstants-WithNative/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#1/10 AsIs: (/7 AsIs: # CmdEmitNativeCode/9 AsIs: t.SrcPos#1/12 AsIs: e.Code#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OutlineConstantsm_WithNative("OutlineConstants-WithNative", COOKIE1_, COOKIE2_, func_OutlineConstantsm_WithNative);


static refalrts::FnResult func_gen_OutlineConstantsm_RASLOnly_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & OutlineConstants-RASLOnly$1=1/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.Tables#2/10 e.Commands#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Name#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: t.Tables#2: 10
  //DEBUG: e.Commands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/10 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } Tile{ AsIs: e.Commands#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Function]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_RASLOnly_S1A1("OutlineConstants-RASLOnly$1=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_RASLOnly_S1A1);


static refalrts::FnResult func_gen_OutlineConstantsm_RASLOnly_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & OutlineConstants-RASLOnly$3=1/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.Tables#2/10 e.Metatable#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.Name#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Metatable#2 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: t.Tables#2: 10
  //DEBUG: e.Metatable#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/10 } Tile{ HalfReuse: (/0 HalfReuse: # CmdMetatable/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } Tile{ AsIs: e.Metatable#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdMetatable]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_RASLOnly_S3A1("OutlineConstants-RASLOnly$3=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_RASLOnly_S3A1);


static refalrts::FnResult func_OutlineConstantsm_RASLOnly(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & OutlineConstants-RASLOnly/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OutlineConstants-RASLOnly/4 t.new#1/5 t.new#2/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OutlineConstants-RASLOnly/4 t.new#3/5 (/7 s.new#4/11 e.new#5/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & OutlineConstants-RASLOnly/4 t.Tables#1/5 (/7 # Function/11 s.ScopeClass#1/14 (/17 e.Name#1/15 )/18 e.Commands#1/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_Function], context[11] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Name#1 as range 15
      // closed e.Commands#1 as range 12
      //DEBUG: t.Tables#1: 5
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.Name#1: 15
      //DEBUG: e.Commands#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-RASLOnly$1=1/11 AsIs: s.ScopeClass#1/14 AsIs: (/17 AsIs: e.Name#1/15 AsIs: )/18 } Tile{ AsIs: </0 Reuse: & OutlineConstants-Commands/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Commands#1/12 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_RASLOnly_S1A1]);
      refalrts::update_name(context[4], functions[efunc_OutlineConstantsm_Commands]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[7], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & OutlineConstants-RASLOnly/4 t.Tables#1/5 (/7 # CmdDefineIdent/11 e.Name#1/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_CmdDefineIdent], context[11] ) )
        continue;
      // closed e.Name#1 as range 12
      //DEBUG: t.Tables#1: 5
      //DEBUG: e.Name#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OutlineConstants-RASLOnly/4 {REMOVED TILE} (/7 # CmdDefineIdent/11 e.Name#1/12 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#1/5 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OutlineConstants-RASLOnly/4 t.Tables#1/5 (/7 # CmdMetatable/11 s.ScopeClass#1/14 (/17 e.Name#1/15 )/18 e.Metatable#1/12 )/8 >/1
    context[12] = context[9];
    context[13] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Name#1 as range 15
    // closed e.Metatable#1 as range 12
    //DEBUG: t.Tables#1: 5
    //DEBUG: s.ScopeClass#1: 14
    //DEBUG: e.Name#1: 15
    //DEBUG: e.Metatable#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-RASLOnly$3=1/11 AsIs: s.ScopeClass#1/14 AsIs: (/17 AsIs: e.Name#1/15 AsIs: )/18 } Tile{ AsIs: </0 Reuse: & OutlineConstants-Metatable/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Metatable#1/12 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_RASLOnly_S3A1]);
    refalrts::update_name(context[4], functions[efunc_OutlineConstantsm_Metatable]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[7], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OutlineConstants-RASLOnly/4 t.Tables#1/5 t.OtherItem#1/7 >/1
  //DEBUG: t.Tables#1: 5
  //DEBUG: t.OtherItem#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OutlineConstants-RASLOnly/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#1/5 AsIs: t.OtherItem#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OutlineConstantsm_RASLOnly("OutlineConstants-RASLOnly", COOKIE1_, COOKIE2_, func_OutlineConstantsm_RASLOnly);


static refalrts::FnResult func_gen_OutlineConstantsm_Metatable_L1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & OutlineConstants-Metatable\1=2/4 s.IdentId#3/5 t.Tables#4/6 s.FuncId#4/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.IdentId#3: 5
  //DEBUG: t.Tables#4: 6
  //DEBUG: s.FuncId#4: 8

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#4/6 } Tile{ HalfReuse: (/4 AsIs: s.IdentId#3/5 } Tile{ AsIs: s.FuncId#4/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_Metatable_L1A2("OutlineConstants-Metatable\\1=2", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_Metatable_L1A2);


static refalrts::FnResult func_gen_OutlineConstantsm_Metatable_L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OutlineConstants-Metatable\1=1/4 (/7 e.Function#2/5 )/8 t.Tables#3/9 s.IdentId#3/11 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Function#2 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Function#2: 5
  //DEBUG: t.Tables#3: 9
  //DEBUG: s.IdentId#3: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.IdentId#3/11 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-Metatable\1=2/4 HalfReuse: s.IdentId3 #11/7 } </12 Tile{ HalfReuse: & UpdateFuncTable/8 AsIs: t.Tables#3/9 } Tile{ AsIs: e.Function#2/5 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_Metatable_L1A2]);
  refalrts::reinit_svar( context[7], context[11] );
  refalrts::reinit_name(context[8], functions[efunc_UpdateFuncTable]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_Metatable_L1A1("OutlineConstants-Metatable\\1=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_Metatable_L1A1);


static refalrts::FnResult func_gen_OutlineConstantsm_Metatable_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & OutlineConstants-Metatable\1/4 t.Tables#2/21 (/7 (/11 # Symbol/13 # Identifier/14 e.Ident#2/9 )/12 (/17 # Symbol/19 # Name/20 e.Function#2/15 )/18 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = refalrts::ident_left( identifiers[ident_Symbol], context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::ident_left( identifiers[ident_Identifier], context[9], context[10] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[5], context[6] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = refalrts::ident_left( identifiers[ident_Symbol], context[15], context[16] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::ident_left( identifiers[ident_Name], context[15], context[16] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Ident#2 as range 9
  // closed e.Function#2 as range 15
  context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Ident#2: 9
  //DEBUG: e.Function#2: 15
  //DEBUG: t.Tables#2: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OutlineConstants-Metatable\1/4 {REMOVED TILE} (/7 (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </17 HalfReuse: & OutlineConstants-Metatable\1=1/19 HalfReuse: (/20 AsIs: e.Function#2/15 AsIs: )/18 HalfReuse: </8 HalfReuse: & UpdateIdentTable/1 } Tile{ AsIs: t.Tables#2/21 } Tile{ AsIs: e.Ident#2/9 } Tile{ HalfReuse: >/13 HalfReuse: >/14 } Tile{ ]] }
  refalrts::reinit_open_call(context[17]);
  refalrts::reinit_name(context[19], functions[efunc_gen_OutlineConstantsm_Metatable_L1A1]);
  refalrts::reinit_open_bracket(context[20]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[1], functions[efunc_UpdateIdentTable]);
  refalrts::reinit_close_call(context[13]);
  refalrts::reinit_close_call(context[14]);
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[20], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[17], context[1] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_Metatable_L1("OutlineConstants-Metatable\\1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_Metatable_L1);


static refalrts::FnResult func_OutlineConstantsm_Metatable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & OutlineConstants-Metatable/4 t.Tables#1/5 e.Metatable#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Metatable#1 as range 2
  //DEBUG: t.Tables#1: 5
  //DEBUG: e.Metatable#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@3/4 AsIs: t.Tables#1/5 AsIs: e.Metatable#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OutlineConstantsm_Metatable("OutlineConstants-Metatable", COOKIE1_, COOKIE2_, func_OutlineConstantsm_Metatable);


static refalrts::FnResult func_OutlineConstantsm_Commands(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & OutlineConstants-Commands/4 t.Tables#1/5 e.Commands#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#1 as range 2
  //DEBUG: t.Tables#1: 5
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@4/4 AsIs: t.Tables#1/5 AsIs: e.Commands#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OutlineConstantsm_Commands("OutlineConstants-Commands", COOKIE1_, COOKIE2_, func_OutlineConstantsm_Commands);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OutlineConstants-OneCommand$1=1/4 s.Direction#1/5 s.BracketNum#1/6 (/9 e.Func#1/7 )/10 t.Tables#2/11 s.Id#2/13 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Func#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction#1: 5
  //DEBUG: s.BracketNum#1: 6
  //DEBUG: e.Func#1: 7
  //DEBUG: t.Tables#2: 11
  //DEBUG: s.Id#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/11 } Tile{ HalfReuse: (/0 HalfReuse: # CmdName/4 AsIs: s.Direction#1/5 AsIs: s.BracketNum#1/6 HalfReuse: s.Id2 #13/9 AsIs: e.Func#1/7 AsIs: )/10 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdName]);
  refalrts::reinit_svar( context[9], context[13] );
  refalrts::link_brackets( context[0], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S1A1("OutlineConstants-OneCommand$1=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S1A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & OutlineConstants-OneCommand$2=1/4 s.Direction#1/5 s.BracketNum#1/6 s.SaveOffset#1/7 (/10 e.Func#1/8 )/11 t.Tables#2/12 s.Id#2/14 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.Func#1 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction#1: 5
  //DEBUG: s.BracketNum#1: 6
  //DEBUG: s.SaveOffset#1: 7
  //DEBUG: e.Func#1: 8
  //DEBUG: t.Tables#2: 12
  //DEBUG: s.Id#2: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/14 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/12 } Tile{ HalfReuse: (/0 HalfReuse: # CmdNameSave/4 AsIs: s.Direction#1/5 AsIs: s.BracketNum#1/6 AsIs: s.SaveOffset#1/7 HalfReuse: s.Id2 #14/10 AsIs: e.Func#1/8 AsIs: )/11 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdNameSave]);
  refalrts::reinit_svar( context[10], context[14] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S2A1("OutlineConstants-OneCommand$2=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S2A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OutlineConstants-OneCommand$3=1/4 s.CreateMode#1/5 s.ElemNo#1/6 (/9 e.Func#1/7 )/10 t.Tables#2/11 s.Id#2/13 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Func#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.CreateMode#1: 5
  //DEBUG: s.ElemNo#1: 6
  //DEBUG: e.Func#1: 7
  //DEBUG: t.Tables#2: 11
  //DEBUG: s.Id#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/11 } Tile{ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 AsIs: s.CreateMode#1/5 AsIs: s.ElemNo#1/6 HalfReuse: # ElName/9 } Tile{ AsIs: s.Id#2/13 } Tile{ AsIs: e.Func#1/7 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
  refalrts::reinit_ident(context[9], identifiers[ident_ElName]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S3A1("OutlineConstants-OneCommand$3=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S3A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & OutlineConstants-OneCommand$4=1/4 s.Direction#1/5 s.BracketNum#1/6 s.InnerBrackets#1/7 (/10 e.Func#1/8 )/11 t.Tables#2/12 s.Id#2/14 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.Func#1 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction#1: 5
  //DEBUG: s.BracketNum#1: 6
  //DEBUG: s.InnerBrackets#1: 7
  //DEBUG: e.Func#1: 8
  //DEBUG: t.Tables#2: 12
  //DEBUG: s.Id#2: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/14 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/12 } Tile{ HalfReuse: (/0 HalfReuse: # CmdADT/4 AsIs: s.Direction#1/5 AsIs: s.BracketNum#1/6 AsIs: s.InnerBrackets#1/7 HalfReuse: s.Id2 #14/10 AsIs: e.Func#1/8 AsIs: )/11 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdADT]);
  refalrts::reinit_svar( context[10], context[14] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S4A1("OutlineConstants-OneCommand$4=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S4A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S5A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & OutlineConstants-OneCommand$5=1/4 s.Direction#1/5 s.BracketNum#1/6 s.InnerBrackets#1/7 (/10 e.Func#1/8 )/11 t.Tables#2/12 s.Id#2/14 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.Func#1 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction#1: 5
  //DEBUG: s.BracketNum#1: 6
  //DEBUG: s.InnerBrackets#1: 7
  //DEBUG: e.Func#1: 8
  //DEBUG: t.Tables#2: 12
  //DEBUG: s.Id#2: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/14 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/12 } Tile{ HalfReuse: (/0 HalfReuse: # CmdADTSave/4 AsIs: s.Direction#1/5 AsIs: s.BracketNum#1/6 AsIs: s.InnerBrackets#1/7 HalfReuse: s.Id2 #14/10 AsIs: e.Func#1/8 AsIs: )/11 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdADTSave]);
  refalrts::reinit_svar( context[10], context[14] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S5A1("OutlineConstants-OneCommand$5=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S5A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S6A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OutlineConstants-OneCommand$6=1/4 s.Direction#1/5 s.BracketNum#1/6 (/9 e.Ident#1/7 )/10 t.Tables#2/11 s.Id#2/13 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Ident#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction#1: 5
  //DEBUG: s.BracketNum#1: 6
  //DEBUG: e.Ident#1: 7
  //DEBUG: t.Tables#2: 11
  //DEBUG: s.Id#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/11 } Tile{ HalfReuse: (/0 HalfReuse: # CmdIdent/4 AsIs: s.Direction#1/5 AsIs: s.BracketNum#1/6 HalfReuse: s.Id2 #13/9 AsIs: e.Ident#1/7 AsIs: )/10 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdIdent]);
  refalrts::reinit_svar( context[9], context[13] );
  refalrts::link_brackets( context[0], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S6A1("OutlineConstants-OneCommand$6=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S6A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S7A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & OutlineConstants-OneCommand$7=1/4 s.Direction#1/5 s.BracketNum#1/6 s.SaveOffset#1/7 (/10 e.Ident#1/8 )/11 t.Tables#2/12 s.Id#2/14 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.Ident#1 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Direction#1: 5
  //DEBUG: s.BracketNum#1: 6
  //DEBUG: s.SaveOffset#1: 7
  //DEBUG: e.Ident#1: 8
  //DEBUG: t.Tables#2: 12
  //DEBUG: s.Id#2: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/14 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/12 } Tile{ HalfReuse: (/0 HalfReuse: # CmdIdentSave/4 AsIs: s.Direction#1/5 AsIs: s.BracketNum#1/6 AsIs: s.SaveOffset#1/7 HalfReuse: s.Id2 #14/10 AsIs: e.Ident#1/8 AsIs: )/11 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdIdentSave]);
  refalrts::reinit_svar( context[10], context[14] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S7A1("OutlineConstants-OneCommand$7=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S7A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S8A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OutlineConstants-OneCommand$8=1/4 s.CreateMode#1/5 s.ElemNo#1/6 (/9 e.Ident#1/7 )/10 t.Tables#2/11 s.Id#2/13 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.Ident#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.CreateMode#1: 5
  //DEBUG: s.ElemNo#1: 6
  //DEBUG: e.Ident#1: 7
  //DEBUG: t.Tables#2: 11
  //DEBUG: s.Id#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/11 } Tile{ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 AsIs: s.CreateMode#1/5 AsIs: s.ElemNo#1/6 HalfReuse: # ElIdent/9 } Tile{ AsIs: s.Id#2/13 } Tile{ AsIs: e.Ident#1/7 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
  refalrts::reinit_ident(context[9], identifiers[ident_ElIdent]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S8A1("OutlineConstants-OneCommand$8=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S8A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S9A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & OutlineConstants-OneCommand$9=1/4 t.Tables#2/5 e.Commands#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 2
  //DEBUG: t.Tables#2: 5
  //DEBUG: e.Commands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/5 } Tile{ HalfReuse: (/0 HalfReuse: # CmdSentence/4 } Tile{ AsIs: e.Commands#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdSentence]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S9A1("OutlineConstants-OneCommand$9=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S9A1);


static refalrts::FnResult func_gen_OutlineConstantsm_OneCommand_S10A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & OutlineConstants-OneCommand$10=1/4 s.BracketNum#1/5 s.VarNumber#1/6 t.Tables#2/7 e.Commands#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 2
  //DEBUG: s.BracketNum#1: 5
  //DEBUG: s.VarNumber#1: 6
  //DEBUG: t.Tables#2: 7
  //DEBUG: e.Commands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#2/7 } (/9 Tile{ HalfReuse: # CmdOpenELoop/0 HalfReuse: # AlgLeft/4 AsIs: s.BracketNum#1/5 AsIs: s.VarNumber#1/6 } Tile{ AsIs: e.Commands#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::reinit_ident(context[0], identifiers[ident_CmdOpenELoop]);
  refalrts::reinit_ident(context[4], identifiers[ident_AlgLeft]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[9], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OutlineConstantsm_OneCommand_S10A1("OutlineConstants-OneCommand$10=1", COOKIE1_, COOKIE2_, func_gen_OutlineConstantsm_OneCommand_S10A1);


static refalrts::FnResult func_OutlineConstantsm_OneCommand(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & OutlineConstants-OneCommand/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OutlineConstants-OneCommand/4 t.new#1/5 t.new#2/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OutlineConstants-OneCommand/4 t.new#3/5 (/7 s.new#4/11 e.new#5/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & OutlineConstants-OneCommand/4 t.new#6/5 (/7 s.new#7/11 s.new#8/14 s.new#9/15 e.new#10/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
        continue;
      // closed e.new#10 as range 12
      do {
        // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdName/11 s.Direction#1/14 s.BracketNum#1/15 e.Func#1/16 )/8 >/1
        context[16] = context[12];
        context[17] = context[13];
        if( ! refalrts::ident_term( identifiers[ident_CmdName], context[11] ) )
          continue;
        // closed e.Func#1 as range 16
        //DEBUG: t.Tables#1: 5
        //DEBUG: s.Direction#1: 14
        //DEBUG: s.BracketNum#1: 15
        //DEBUG: e.Func#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$1=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 } (/18 e.Func#1/16/19 )/21 Tile{ AsIs: </0 Reuse: & UpdateFuncTable/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Func#1/16 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[18]);
        refalrts::copy_evar(vm, context[19], context[20], context[16], context[17]);
        refalrts::alloc_close_bracket(vm, context[21]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S1A1]);
        refalrts::update_name(context[4], functions[efunc_UpdateFuncTable]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[18], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[18], context[21] );
        res = refalrts::splice_evar( res, context[7], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & OutlineConstants-OneCommand/4 t.new#11/5 (/7 s.new#12/11 s.new#13/14 s.new#14/15 s.new#15/18 e.new#16/16 )/8 >/1
        context[16] = context[12];
        context[17] = context[13];
        if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
          continue;
        // closed e.new#16 as range 16
        do {
          // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdNameSave/11 s.Direction#1/14 s.BracketNum#1/15 s.SaveOffset#1/18 e.Func#1/19 )/8 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_CmdNameSave], context[11] ) )
            continue;
          // closed e.Func#1 as range 19
          //DEBUG: t.Tables#1: 5
          //DEBUG: s.Direction#1: 14
          //DEBUG: s.BracketNum#1: 15
          //DEBUG: s.SaveOffset#1: 18
          //DEBUG: e.Func#1: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$2=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 AsIs: s.SaveOffset#1/18 } (/21 e.Func#1/19/22 )/24 Tile{ AsIs: </0 Reuse: & UpdateFuncTable/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Func#1/19 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[21]);
          refalrts::copy_evar(vm, context[22], context[23], context[19], context[20]);
          refalrts::alloc_close_bracket(vm, context[24]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S2A1]);
          refalrts::update_name(context[4], functions[efunc_UpdateFuncTable]);
          refalrts::reinit_close_call(context[8]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[21], context[24] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[0], context[6] );
          res = refalrts::splice_evar( res, context[21], context[24] );
          res = refalrts::splice_evar( res, context[7], context[18] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdCreateElem/11 s.CreateMode#1/14 s.ElemNo#1/15 # ElName/18 e.Func#1/19 )/8 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[11] ) )
            continue;
          if( ! refalrts::ident_term( identifiers[ident_ElName], context[18] ) )
            continue;
          // closed e.Func#1 as range 19
          //DEBUG: t.Tables#1: 5
          //DEBUG: s.CreateMode#1: 14
          //DEBUG: s.ElemNo#1: 15
          //DEBUG: e.Func#1: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$3=1/11 AsIs: s.CreateMode#1/14 AsIs: s.ElemNo#1/15 HalfReuse: (/18 AsIs: e.Func#1/19 AsIs: )/8 HalfReuse: </1 } Tile{ Reuse: & UpdateFuncTable/4 AsIs: t.Tables#1/5 } e.Func#1/19/21 Tile{ HalfReuse: >/0 } >/23 Tile{ ]] }
          refalrts::copy_evar(vm, context[21], context[22], context[19], context[20]);
          refalrts::alloc_close_call(vm, context[23]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S3A1]);
          refalrts::reinit_open_bracket(context[18]);
          refalrts::reinit_open_call(context[1]);
          refalrts::update_name(context[4], functions[efunc_UpdateFuncTable]);
          refalrts::reinit_close_call(context[0]);
          refalrts::push_stack( vm, context[23] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[1] );
          refalrts::link_brackets( context[18], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[23], context[23] );
          res = refalrts::splice_evar( res, context[0], context[0] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[4], context[6] );
          res = refalrts::splice_evar( res, context[7], context[1] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdADT/11 s.Direction#1/14 s.BracketNum#1/15 s.InnerBrackets#1/18 e.Func#1/19 )/8 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_CmdADT], context[11] ) )
            continue;
          // closed e.Func#1 as range 19
          //DEBUG: t.Tables#1: 5
          //DEBUG: s.Direction#1: 14
          //DEBUG: s.BracketNum#1: 15
          //DEBUG: s.InnerBrackets#1: 18
          //DEBUG: e.Func#1: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$4=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 AsIs: s.InnerBrackets#1/18 } (/21 e.Func#1/19/22 )/24 Tile{ AsIs: </0 Reuse: & UpdateFuncTable/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Func#1/19 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[21]);
          refalrts::copy_evar(vm, context[22], context[23], context[19], context[20]);
          refalrts::alloc_close_bracket(vm, context[24]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S4A1]);
          refalrts::update_name(context[4], functions[efunc_UpdateFuncTable]);
          refalrts::reinit_close_call(context[8]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[21], context[24] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[0], context[6] );
          res = refalrts::splice_evar( res, context[21], context[24] );
          res = refalrts::splice_evar( res, context[7], context[18] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdADTSave/11 s.Direction#1/14 s.BracketNum#1/15 s.InnerBrackets#1/18 e.Func#1/19 )/8 >/1
        context[19] = context[16];
        context[20] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CmdADTSave], context[11] ) )
          continue;
        // closed e.Func#1 as range 19
        //DEBUG: t.Tables#1: 5
        //DEBUG: s.Direction#1: 14
        //DEBUG: s.BracketNum#1: 15
        //DEBUG: s.InnerBrackets#1: 18
        //DEBUG: e.Func#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$5=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 AsIs: s.InnerBrackets#1/18 } (/21 e.Func#1/19/22 )/24 Tile{ AsIs: </0 Reuse: & UpdateFuncTable/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Func#1/19 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[21]);
        refalrts::copy_evar(vm, context[22], context[23], context[19], context[20]);
        refalrts::alloc_close_bracket(vm, context[24]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S5A1]);
        refalrts::update_name(context[4], functions[efunc_UpdateFuncTable]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[21], context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[21], context[24] );
        res = refalrts::splice_evar( res, context[7], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdIdent/11 s.Direction#1/14 s.BracketNum#1/15 e.Ident#1/16 )/8 >/1
        context[16] = context[12];
        context[17] = context[13];
        if( ! refalrts::ident_term( identifiers[ident_CmdIdent], context[11] ) )
          continue;
        // closed e.Ident#1 as range 16
        //DEBUG: t.Tables#1: 5
        //DEBUG: s.Direction#1: 14
        //DEBUG: s.BracketNum#1: 15
        //DEBUG: e.Ident#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$6=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 } (/18 e.Ident#1/16/19 )/21 Tile{ AsIs: </0 Reuse: & UpdateIdentTable/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Ident#1/16 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[18]);
        refalrts::copy_evar(vm, context[19], context[20], context[16], context[17]);
        refalrts::alloc_close_bracket(vm, context[21]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S6A1]);
        refalrts::update_name(context[4], functions[efunc_UpdateIdentTable]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[18], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[18], context[21] );
        res = refalrts::splice_evar( res, context[7], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OutlineConstants-OneCommand/4 t.new#11/5 (/7 s.new#12/11 s.new#13/14 s.new#14/15 s.new#15/18 e.new#16/16 )/8 >/1
      context[16] = context[12];
      context[17] = context[13];
      if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
        continue;
      // closed e.new#16 as range 16
      do {
        // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdIdentSave/11 s.Direction#1/14 s.BracketNum#1/15 s.SaveOffset#1/18 e.Ident#1/19 )/8 >/1
        context[19] = context[16];
        context[20] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CmdIdentSave], context[11] ) )
          continue;
        // closed e.Ident#1 as range 19
        //DEBUG: t.Tables#1: 5
        //DEBUG: s.Direction#1: 14
        //DEBUG: s.BracketNum#1: 15
        //DEBUG: s.SaveOffset#1: 18
        //DEBUG: e.Ident#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$7=1/11 AsIs: s.Direction#1/14 AsIs: s.BracketNum#1/15 AsIs: s.SaveOffset#1/18 } (/21 e.Ident#1/19/22 )/24 Tile{ AsIs: </0 Reuse: & UpdateIdentTable/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Ident#1/19 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[21]);
        refalrts::copy_evar(vm, context[22], context[23], context[19], context[20]);
        refalrts::alloc_close_bracket(vm, context[24]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S7A1]);
        refalrts::update_name(context[4], functions[efunc_UpdateIdentTable]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[21], context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[21], context[24] );
        res = refalrts::splice_evar( res, context[7], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdCreateElem/11 s.CreateMode#1/14 s.ElemNo#1/15 # ElIdent/18 e.Ident#1/19 )/8 >/1
      context[19] = context[16];
      context[20] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[11] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_ElIdent], context[18] ) )
        continue;
      // closed e.Ident#1 as range 19
      //DEBUG: t.Tables#1: 5
      //DEBUG: s.CreateMode#1: 14
      //DEBUG: s.ElemNo#1: 15
      //DEBUG: e.Ident#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-OneCommand$8=1/11 AsIs: s.CreateMode#1/14 AsIs: s.ElemNo#1/15 HalfReuse: (/18 AsIs: e.Ident#1/19 AsIs: )/8 HalfReuse: </1 } Tile{ Reuse: & UpdateIdentTable/4 AsIs: t.Tables#1/5 } e.Ident#1/19/21 Tile{ HalfReuse: >/0 } >/23 Tile{ ]] }
      refalrts::copy_evar(vm, context[21], context[22], context[19], context[20]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[11], functions[efunc_gen_OutlineConstantsm_OneCommand_S8A1]);
      refalrts::reinit_open_bracket(context[18]);
      refalrts::reinit_open_call(context[1]);
      refalrts::update_name(context[4], functions[efunc_UpdateIdentTable]);
      refalrts::reinit_close_call(context[0]);
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::link_brackets( context[18], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[4], context[6] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdSentence/11 e.Commands#1/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[11] ) )
        continue;
      // closed e.Commands#1 as range 12
      //DEBUG: t.Tables#1: 5
      //DEBUG: e.Commands#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & OutlineConstants-OneCommand$9=1/4 } Tile{ HalfReuse: </7 HalfReuse: & OutlineConstants-Commands/11 } Tile{ AsIs: t.Tables#1/5 } Tile{ AsIs: e.Commands#1/12 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_OneCommand_S9A1]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[11], functions[efunc_OutlineConstantsm_Commands]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 (/7 # CmdOpenELoop/11 # AlgLeft/14 s.BracketNum#1/15 s.VarNumber#1/16 e.Commands#1/12 )/8 >/1
    context[12] = context[9];
    context[13] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[11] ) )
      continue;
    context[14] = refalrts::ident_left( identifiers[ident_AlgLeft], context[12], context[13] );
    if( ! context[14] )
      continue;
    if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
      continue;
    // closed e.Commands#1 as range 12
    //DEBUG: t.Tables#1: 5
    //DEBUG: s.BracketNum#1: 15
    //DEBUG: s.VarNumber#1: 16
    //DEBUG: e.Commands#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </11 HalfReuse: & OutlineConstants-OneCommand$10=1/14 AsIs: s.BracketNum#1/15 AsIs: s.VarNumber#1/16 } Tile{ AsIs: </0 Reuse: & OutlineConstants-Commands/4 AsIs: t.Tables#1/5 } Tile{ AsIs: e.Commands#1/12 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[11]);
    refalrts::reinit_name(context[14], functions[efunc_gen_OutlineConstantsm_OneCommand_S10A1]);
    refalrts::update_name(context[4], functions[efunc_OutlineConstantsm_Commands]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[11], context[16] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OutlineConstants-OneCommand/4 t.Tables#1/5 t.OtherCommand#1/7 >/1
  //DEBUG: t.Tables#1: 5
  //DEBUG: t.OtherCommand#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OutlineConstants-OneCommand/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tables#1/5 AsIs: t.OtherCommand#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OutlineConstantsm_OneCommand("OutlineConstants-OneCommand", COOKIE1_, COOKIE2_, func_OutlineConstantsm_OneCommand);


static refalrts::FnResult func_gen_UpdateFuncTable_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & UpdateFuncTable=1/4 t.IdentTable#1/5 t.FuncTable#2/7 s.Id#2/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.IdentTable#1: 5
  //DEBUG: t.FuncTable#2: 7
  //DEBUG: s.Id#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/9 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: t.FuncTable#2/7 } Tile{ AsIs: t.IdentTable#1/5 } Tile{ HalfReuse: )/4 } Tile{ HalfReuse: s.Id2 #9/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_svar( context[1], context[9] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdateFuncTable_A1("UpdateFuncTable=1", COOKIE1_, COOKIE2_, func_gen_UpdateFuncTable_A1);


static refalrts::FnResult func_UpdateFuncTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & UpdateFuncTable/4 (/7 t.FuncTable#1/9 t.IdentTable#1/11 )/8 e.Name#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Name#1 as range 2
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Name#1: 2
  //DEBUG: t.FuncTable#1: 9
  //DEBUG: t.IdentTable#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdateFuncTable=1/4 } Tile{ AsIs: t.IdentTable#1/11 HalfReuse: </8 } Tile{ HalfReuse: & UpdateTable/7 AsIs: t.FuncTable#1/9 } Tile{ AsIs: e.Name#1/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_UpdateFuncTable_A1]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[7], functions[efunc_UpdateTable]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  res = refalrts::splice_evar( res, context[11], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UpdateFuncTable("UpdateFuncTable", COOKIE1_, COOKIE2_, func_UpdateFuncTable);


static refalrts::FnResult func_gen_UpdateIdentTable_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & UpdateIdentTable=1/4 t.FuncTable#1/5 t.IdentTable#2/7 s.Id#2/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.FuncTable#1: 5
  //DEBUG: t.IdentTable#2: 7
  //DEBUG: s.Id#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Id#2/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: t.FuncTable#1/5 AsIs: t.IdentTable#2/7 } Tile{ HalfReuse: )/0 } Tile{ HalfReuse: s.Id2 #9/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_svar( context[1], context[9] );
  refalrts::link_brackets( context[4], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdateIdentTable_A1("UpdateIdentTable=1", COOKIE1_, COOKIE2_, func_gen_UpdateIdentTable_A1);


static refalrts::FnResult func_UpdateIdentTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & UpdateIdentTable/4 (/7 t.FuncTable#1/9 t.IdentTable#1/11 )/8 e.Name#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Name#1 as range 2
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Name#1: 2
  //DEBUG: t.FuncTable#1: 9
  //DEBUG: t.IdentTable#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdateIdentTable=1/4 } Tile{ AsIs: t.FuncTable#1/9 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & UpdateTable/8 } Tile{ AsIs: t.IdentTable#1/11 } Tile{ AsIs: e.Name#1/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_UpdateIdentTable_A1]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_UpdateTable]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UpdateIdentTable("UpdateIdentTable", COOKIE1_, COOKIE2_, func_UpdateIdentTable);


static refalrts::FnResult func_UpdateTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & UpdateTable/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & UpdateTable/4 (/7 s.new#1/9 e.new#2/5 )/8 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & UpdateTable/4 (/7 s.NextId#1/9 e.Names-B#1/14 (/20 s.Id#1/24 e.Name#1/22 )/21 e.Names-E#1/16 )/8 e.Name#1/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.Name#1 as range 12
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[16] = context[10];
      context[17] = context[11];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      if( ! refalrts::repeated_evar_right( vm, context[22], context[23], context[12], context[13], context[18], context[19] ) )
        continue;
      // closed e.Names-E#1 as range 16
      if( ! refalrts::svar_left( context[24], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      //DEBUG: s.NextId#1: 9
      //DEBUG: e.Name#1: 12
      //DEBUG: e.Names-B#1: 14
      //DEBUG: e.Names-E#1: 16
      //DEBUG: s.Id#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & UpdateTable/4 {REMOVED TILE} e.Name#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.NextId#1/9 AsIs: e.Names-B#1/14 AsIs: (/20 AsIs: s.Id#1/24 AsIs: e.Name#1/22 AsIs: )/21 AsIs: e.Names-E#1/16 AsIs: )/8 } Tile{ HalfReuse: s.Id1 #24/1 ]] }
      refalrts::reinit_svar( context[1], context[24] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UpdateTable/4 (/7 s.NextId#1/9 e.Names#1/5 )/8 e.Name#1/2 >/1
  // closed e.Names#1 as range 5
  // closed e.Name#1 as range 2
  //DEBUG: s.NextId#1: 9
  //DEBUG: e.Names#1: 5
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/10 Tile{ AsIs: </0 Reuse: & Add/4 HalfReuse: 1/7 AsIs: s.NextId#1/9 } >/11 Tile{ AsIs: e.Names#1/5 } (/12 Tile{ HalfReuse: s.NextId1 #9/8 AsIs: e.Name#1/2 HalfReuse: )/1 } )/13 s.NextId#1/9/14 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::copy_stvar(vm, context[14], context[9]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_number(context[7], 1UL);
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[10], context[13] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UpdateTable("UpdateTable", COOKIE1_, COOKIE2_, func_UpdateTable);


static refalrts::FnResult func_MarkFunctionGenMode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & MarkFunctionGenMode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MarkFunctionGenMode/4 s.new#1/9 (/7 s.new#2/10 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & MarkFunctionGenMode/4 s.new#4/9 (/7 s.new#5/10 s.new#6/13 e.new#7/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#7 as range 11
    do {
      // </0 & MarkFunctionGenMode/4 s.new#8/9 (/7 # Function/10 s.new#9/13 (/18 e.new#10/16 )/19 e.new#11/14 )/8 >/1
      context[14] = context[11];
      context[15] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Function], context[10] ) )
        continue;
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      // closed e.new#10 as range 16
      // closed e.new#11 as range 14
      do {
        // </0 & MarkFunctionGenMode/4 # OnlyInterpret/9 (/7 # Function/10 s.ScopeClass#1/13 (/18 e.Name#1/20 )/19 e.Commands#1/22 )/8 >/1
        context[20] = context[16];
        context[21] = context[17];
        context[22] = context[14];
        context[23] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_OnlyInterpret], context[9] ) )
          continue;
        // closed e.Name#1 as range 20
        // closed e.Commands#1 as range 22
        //DEBUG: s.ScopeClass#1: 13
        //DEBUG: e.Name#1: 20
        //DEBUG: e.Commands#1: 22

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 # OnlyInterpret/9 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Function-ToRASL/10 AsIs: s.ScopeClass#1/13 AsIs: (/18 AsIs: e.Name#1/20 AsIs: )/19 AsIs: e.Commands#1/22 AsIs: )/8 } Tile{ ]] }
        refalrts::update_ident(context[10], identifiers[ident_Functionm_ToRASL]);
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[18], context[19] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & MarkFunctionGenMode/4 # OnlyDirect/9 (/7 # Function/10 s.ScopeClass#1/13 (/18 e.Name#1/20 )/19 e.Commands#1/22 )/8 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[14];
      context[23] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_OnlyDirect], context[9] ) )
        continue;
      // closed e.Name#1 as range 20
      // closed e.Commands#1 as range 22
      //DEBUG: s.ScopeClass#1: 13
      //DEBUG: e.Name#1: 20
      //DEBUG: e.Commands#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 # OnlyDirect/9 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Function-ToNative/10 AsIs: s.ScopeClass#1/13 AsIs: (/18 AsIs: e.Name#1/20 AsIs: )/19 AsIs: e.Commands#1/22 AsIs: )/8 } Tile{ ]] }
      refalrts::update_ident(context[10], identifiers[ident_Functionm_ToNative]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MarkFunctionGenMode/4 s.new#8/9 (/7 # CmdConditionFunc/10 s.new#9/13 e.new#10/14 )/8 >/1
    context[14] = context[11];
    context[15] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[10] ) )
      continue;
    // closed e.new#10 as range 14
    do {
      // </0 & MarkFunctionGenMode/4 # OnlyInterpret/9 (/7 # CmdConditionFunc/10 s.ScopeClass#1/13 e.Name#1/16 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_OnlyInterpret], context[9] ) )
        continue;
      // closed e.Name#1 as range 16
      //DEBUG: s.ScopeClass#1: 13
      //DEBUG: e.Name#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 # OnlyInterpret/9 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdConditionFunc-ToRASL/10 AsIs: s.ScopeClass#1/13 AsIs: e.Name#1/16 AsIs: )/8 } Tile{ ]] }
      refalrts::update_ident(context[10], identifiers[ident_CmdConditionFuncm_ToRASL]);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MarkFunctionGenMode/4 # OnlyDirect/9 (/7 # CmdConditionFunc/10 s.ScopeClass#1/13 e.Name#1/16 )/8 >/1
    context[16] = context[14];
    context[17] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_OnlyDirect], context[9] ) )
      continue;
    // closed e.Name#1 as range 16
    //DEBUG: s.ScopeClass#1: 13
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 # OnlyDirect/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdConditionFunc-ToNative/10 AsIs: s.ScopeClass#1/13 AsIs: e.Name#1/16 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident(context[10], identifiers[ident_CmdConditionFuncm_ToNative]);
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MarkFunctionGenMode/4 s.GenMode#1/9 (/7 s.Type#1/10 e.Info#1/5 )/8 >/1
  // closed e.Info#1 as range 5
  //DEBUG: s.GenMode#1: 9
  //DEBUG: s.Type#1: 10
  //DEBUG: e.Info#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 s.GenMode#1/9 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Type#1/10 AsIs: e.Info#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MarkFunctionGenMode("MarkFunctionGenMode", COOKIE1_, COOKIE2_, func_MarkFunctionGenMode);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@1/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@1/4 s.GenMode#1/5 t.Next#1/8 e.Tail#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 6
    //DEBUG: s.GenMode#1: 5
    //DEBUG: t.Next#1: 8
    //DEBUG: e.Tail#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MarkFunctionGenMode/4 AsIs: s.GenMode#1/5 AsIs: t.Next#1/8 } >/10 </11 & Map@1/12 s.GenMode#1/5/13 Tile{ AsIs: e.Tail#1/6 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Map_Z1]);
    refalrts::copy_stvar(vm, context[13], context[5]);
    refalrts::update_name(context[4], functions[efunc_MarkFunctionGenMode]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@1/4 s.GenMode#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.GenMode#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 s.GenMode#1/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 s.GenMode#1/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.GenMode#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/6 & MarkFunctionGenMode/7 Tile{ AsIs: s.GenMode#1/5 } )/8 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_MarkFunctionGenMode]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[6], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_MapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & MapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@1/4 s.new#1/5 t.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & MapAccum@1/4 s.OutlineConstants#4/5 t.Acc#1/6 e.Tail#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    // closed e.Tail#1 as range 8
    //DEBUG: t.Acc#1: 6
    //DEBUG: s.OutlineConstants#4: 5
    //DEBUG: e.Tail#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: s.OutlineConstants#4/5 AsIs: t.Acc#1/6 } (/10 Tile{ AsIs: e.Tail#1/8 } )/11 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[10]);
    refalrts::alloc_close_bracket(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@1/4 s.OutlineConstants#4/5 t.accum#0/6 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 6
  //DEBUG: s.OutlineConstants#4: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@0/4 AsIs: s.OutlineConstants#4/5 AsIs: t.accum#0/6 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z1("MapAccum@1", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z1);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@2/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Map@2/4 s.Hash1#2/5 s.Hash2#2/6 t.Next#1/9 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 7
    //DEBUG: s.Hash1#2: 5
    //DEBUG: s.Hash2#2: 6
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SetScopeIDs/4 AsIs: s.Hash1#2/5 AsIs: s.Hash2#2/6 AsIs: t.Next#1/9 } >/11 </12 & Map@2/13 s.Hash1#2/5/14 s.Hash2#2/6/15 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::copy_stvar(vm, context[14], context[5]);
    refalrts::copy_stvar(vm, context[15], context[6]);
    refalrts::update_name(context[4], functions[efunc_SetScopeIDs]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@2/4 s.Hash1#2/5 s.Hash2#2/6 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Hash1#2: 5
    //DEBUG: s.Hash2#2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 s.Hash1#2/5 s.Hash2#2/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 s.Hash1#2/5 s.Hash2#2/6 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.Hash1#2: 5
  //DEBUG: s.Hash2#2: 6
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map@0/8 Tile{ HalfReuse: (/0 Reuse: & SetScopeIDs/4 AsIs: s.Hash1#2/5 AsIs: s.Hash2#2/6 } )/9 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::update_name(context[4], functions[efunc_SetScopeIDs]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_MapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@2/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@2/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@2/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & CalcDigest/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_CalcDigest]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z2("MapAccum@2", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z2);


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@3/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 t.Next#1/9 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 7
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SetScopeIDs-Command/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 AsIs: t.Next#1/9 } >/11 </12 & Map@3/13 s.Hash1#1/5/14 s.Hash2#1/6/15 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z3]);
    refalrts::copy_stvar(vm, context[14], context[5]);
    refalrts::copy_stvar(vm, context[15], context[6]);
    refalrts::update_name(context[4], functions[efunc_SetScopeIDsm_Command]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 s.Hash1#1/5 s.Hash2#1/6 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map@0/8 Tile{ HalfReuse: (/0 Reuse: & SetScopeIDs-Command/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } )/9 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::update_name(context[4], functions[efunc_SetScopeIDsm_Command]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


static refalrts::FnResult func_gen_MapAccum_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@3/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@3/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@3/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@3/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & OutlineConstants-Metatable\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_Metatable_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z3("MapAccum@3", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z3);


static refalrts::FnResult func_gen_MapAccum_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@4/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@4/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@4/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@4/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & OutlineConstants-OneCommand/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_OutlineConstantsm_OneCommand]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z4("MapAccum@4", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z4);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & DoMapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@1/4 s.new#1/9 t.new#2/10 e.new#3/2 (/7 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#4 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & DoMapAccum@1/4 s.OutlineConstants#4/9 t.Acc#1/10 e.Scanned#1/12 (/7 t.Next#1/16 e.Tail#1/14 )/8 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[14] = context[5];
    context[15] = context[6];
    // closed e.Scanned#1 as range 12
    context[17] = refalrts::tvar_left( context[16], context[14], context[15] );
    if( ! context[17] )
      continue;
    // closed e.Tail#1 as range 14
    //DEBUG: t.Acc#1: 10
    //DEBUG: s.OutlineConstants#4: 9
    //DEBUG: e.Scanned#1: 12
    //DEBUG: t.Next#1: 16
    //DEBUG: e.Tail#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@1/4 AsIs: s.OutlineConstants#4/9 } Tile{ AsIs: e.Scanned#1/12 } Tile{ AsIs: (/7 } </18 s.OutlineConstants#4/9/19 Tile{ AsIs: t.Acc#1/10 } Tile{ AsIs: t.Next#1/16 } >/20 )/21 (/22 Tile{ AsIs: e.Tail#1/14 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::copy_stvar(vm, context[19], context[9]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[22], context[8] );
    refalrts::link_brackets( context[7], context[21] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@1/4 s.OutlineConstants#4/9 t.Acc#1/10 e.Scanned#1/12 (/7 )/8 >/1
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 12
    //DEBUG: t.Acc#1: 10
    //DEBUG: s.OutlineConstants#4: 9
    //DEBUG: e.Scanned#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 s.OutlineConstants#4/9 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/10 } Tile{ AsIs: e.Scanned#1/12 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 s.OutlineConstants#4/9 t.acc#0/10 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 10
  //DEBUG: s.OutlineConstants#4: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 AsIs: s.OutlineConstants#4/9 AsIs: t.acc#0/10 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_DoMapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@2/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoMapAccum@2/4 t.Acc#1/9 e.Scanned#1/11 (/7 t.Next#1/15 e.Tail#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.Scanned#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & DoMapAccum-Aux@2/18 Tile{ AsIs: e.Scanned#1/11 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & CalcDigest/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/19 )/20 (/21 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoMapAccumm_Aux_Z2]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_CalcDigest]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[21], context[8] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@2/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@2/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@2/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & CalcDigest/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_CalcDigest]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z2("DoMapAccum@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z2);


static refalrts::FnResult func_gen_DoMapAccum_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & DoMapAccum@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@3/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoMapAccum@3/4 t.new#4/9 e.new#5/11 (/7 t.new#6/15 e.new#7/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.new#5 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#7 as range 13
    do {
      // </0 & DoMapAccum@3/4 t.Acc#1/9 e.Scanned#1/17 (/7 (/15 (/25 # Symbol/27 # Identifier/28 e.5#0/23 )/26 (/31 # Symbol/33 # Name/34 e.7#0/29 )/32 )/16 e.Tail#1/19 )/8 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      context[27] = refalrts::ident_left( identifiers[ident_Symbol], context[23], context[24] );
      if( ! context[27] )
        continue;
      context[28] = refalrts::ident_left( identifiers[ident_Identifier], context[23], context[24] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[21], context[22] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_Symbol], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = refalrts::ident_left( identifiers[ident_Name], context[29], context[30] );
      if( ! context[34] )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.Scanned#1 as range 17
      // closed e.5#0 as range 23
      // closed e.7#0 as range 29
      // closed e.Tail#1 as range 19
      //DEBUG: t.Acc#1: 9
      //DEBUG: e.Scanned#1: 17
      //DEBUG: e.5#0: 23
      //DEBUG: e.7#0: 29
      //DEBUG: e.Tail#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@3/4 } Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 HalfReuse: </15 HalfReuse: & OutlineConstants-Metatable\1=1/25 HalfReuse: (/27 } Tile{ AsIs: e.7#0/29 } Tile{ AsIs: )/26 HalfReuse: </31 HalfReuse: & UpdateIdentTable/33 } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.5#0/23 } Tile{ HalfReuse: >/34 } Tile{ HalfReuse: >/28 } Tile{ AsIs: )/32 HalfReuse: (/16 AsIs: e.Tail#1/19 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z3]);
      refalrts::reinit_open_call(context[15]);
      refalrts::reinit_name(context[25], functions[efunc_gen_OutlineConstantsm_Metatable_L1A1]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_open_call(context[31]);
      refalrts::reinit_name(context[33], functions[efunc_UpdateIdentTable]);
      refalrts::reinit_close_call(context[34]);
      refalrts::reinit_close_call(context[28]);
      refalrts::reinit_open_bracket(context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[8] );
      refalrts::link_brackets( context[7], context[32] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[31] );
      refalrts::link_brackets( context[27], context[26] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[32];
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[7], context[27] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@3/4 t.Acc#1/9 e.Scanned#1/17 (/7 t.Next#1/15 e.Tail#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@3/22 Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & OutlineConstants-Metatable\1*1/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/23 )/24 (/25 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z3]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_OutlineConstantsm_Metatable_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[25], context[8] );
    refalrts::link_brackets( context[7], context[24] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@3/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@3/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@3/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & OutlineConstants-Metatable\1/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_OutlineConstantsm_Metatable_L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z3("DoMapAccum@3", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z3);


static refalrts::FnResult func_gen_DoMapAccum_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@4/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoMapAccum@4/4 t.Acc#1/9 e.Scanned#1/11 (/7 t.Next#1/15 e.Tail#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.Scanned#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & DoMapAccum-Aux@4/18 Tile{ AsIs: e.Scanned#1/11 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & OutlineConstants-OneCommand/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/19 )/20 (/21 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoMapAccumm_Aux_Z4]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_OutlineConstantsm_OneCommand]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[21], context[8] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@4/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@4/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@4/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & OutlineConstants-OneCommand/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_OutlineConstantsm_OneCommand]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z4("DoMapAccum@4", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z4);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum-Aux@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@1/4 s.new#1/13 e.new#2/2 (/11 e.new#3/9 )/12 (/7 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#3 as range 9
  // closed e.new#4 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoMapAccum-Aux@1/4 s.OutlineConstants#4/13 e.Scanned#1/14 (/11 t.Acc#1/20 e.StepScanned#1/16 )/12 (/7 e.Tail#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Scanned#1 as range 14
    // closed e.Tail#1 as range 18
    context[21] = refalrts::tvar_left( context[20], context[16], context[17] );
    if( ! context[21] )
      continue;
    // closed e.StepScanned#1 as range 16
    //DEBUG: s.OutlineConstants#4: 13
    //DEBUG: e.Scanned#1: 14
    //DEBUG: e.Tail#1: 18
    //DEBUG: t.Acc#1: 20
    //DEBUG: e.StepScanned#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: s.OutlineConstants#4/13 } Tile{ AsIs: t.Acc#1/20 } Tile{ AsIs: e.Scanned#1/14 } Tile{ AsIs: e.StepScanned#1/16 } Tile{ AsIs: (/7 AsIs: e.Tail#1/18 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::splice_to_freelist_open( vm, context[13], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@1/4 s.OutlineConstants#4/13 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: s.OutlineConstants#4: 13
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 AsIs: s.OutlineConstants#4/13 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z1("DoMapAccum-Aux@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z1);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@2/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 9
  // closed e.new#3 as range 5
  do {
    // </0 & DoMapAccum-Aux@2/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@2/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & CalcDigest/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_CalcDigest]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z2("DoMapAccum-Aux@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z2);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@3/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 9
  // closed e.new#3 as range 5
  do {
    // </0 & DoMapAccum-Aux@3/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@3/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@3/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & OutlineConstants-Metatable\1/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_OutlineConstantsm_Metatable_L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z3("DoMapAccum-Aux@3", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z3);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@4/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 9
  // closed e.new#3 as range 5
  do {
    // </0 & DoMapAccum-Aux@4/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@4/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@4/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & OutlineConstants-OneCommand/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_OutlineConstantsm_OneCommand]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z4("DoMapAccum-Aux@4", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z4);


//End of file
