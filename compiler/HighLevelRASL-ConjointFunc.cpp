// This file automatically generated from 'HighLevelRASL-ConjointFunc.sref'
// Don't edit! Edit 'HighLevelRASL-ConjointFunc.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2176547019_3284606486
static const refalrts::RefalIdentifier ident_CmdComment = refalrts::ident_from_static("CmdComment");
static const refalrts::RefalIdentifier ident_CmdFail = refalrts::ident_from_static("CmdFail");
static const refalrts::RefalIdentifier ident_CmdIssueMemory = refalrts::ident_from_static("CmdIssueMemory");
static const refalrts::RefalIdentifier ident_CmdOpenELoop = refalrts::ident_from_static("CmdOpenELoop");
static const refalrts::RefalIdentifier ident_CmdSentence = refalrts::ident_from_static("CmdSentence");
static const refalrts::RefalIdentifier ident_Function = refalrts::ident_from_static("Function");
static const refalrts::RefalIdentifier ident_Junk = refalrts::ident_from_static("Junk");
static const refalrts::RefalIdentifier ident_TkVariable = refalrts::ident_from_static("TkVariable");
static refalrts::ExternalReference ref_ComposeVars("ComposeVars", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_CreateGlobalGen("CreateGlobalGen", 0U, 0U);
static refalrts::ExternalReference ref_CreateHardPattern("CreateHardPattern", 0U, 0U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_GenPattern("GenPattern", 0U, 0U);
static refalrts::ExternalReference ref_GenResult("GenResult", 0U, 0U);
static refalrts::ExternalReference ref_HighLevelRASLm_Functionm_Conjoint("HighLevelRASL-Function-Conjoint", 0U, 0U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A1("HighLevelRASL-Function-Conjoint=1", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A1L1("HighLevelRASL-Function-Conjoint=1\\1", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A1L1A1("HighLevelRASL-Function-Conjoint=1\\1=1", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A2("HighLevelRASL-Function-Conjoint=2", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A3("HighLevelRASL-Function-Conjoint=3", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A4("HighLevelRASL-Function-Conjoint=4", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A5("HighLevelRASL-Function-Conjoint=5", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A5L1("HighLevelRASL-Function-Conjoint=5\\1", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A6("HighLevelRASL-Function-Conjoint=6", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A6L1("HighLevelRASL-Function-Conjoint=6\\1", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A1("HighLevelRASL-Function-Conjoint=6\\1=1", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A2("HighLevelRASL-Function-Conjoint=6\\1=2", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A3("HighLevelRASL-Function-Conjoint=6\\1=3", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_gen_HighLevelRASLm_Functionm_Conjoint_L1("HighLevelRASL-Function-Conjoint\\1", 2176547019U, 3284606486U);
static refalrts::ExternalReference ref_MakeSavers("MakeSavers", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_Max("Max", 0U, 0U);
static refalrts::ExternalReference ref_PatternComment("PatternComment", 0U, 0U);
static refalrts::ExternalReference ref_SplitGen("SplitGen", 0U, 0U);

static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & HighLevelRASL-Function-Conjoint\1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx ( # CmdOpenELoop e.idx )
    // </0 & HighLevelRASL-Function-Conjoint\1/4 e.Commands#8/5 (/9 # CmdOpenELoop/11 e.OpenELoop#8/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_CmdOpenELoop, context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Commands#8 as range 5
    // closed e.OpenELoop#8 as range 7
    //DEBUG: e.Commands#8: 5
    //DEBUG: e.OpenELoop#8: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#8/5 } Tile{ AsIs: (/9 AsIs: # CmdOpenELoop/11 AsIs: e.OpenELoop#8/7 AsIs: )/10 HalfReuse: (/1 } Tile{ HalfReuse: # CmdFail/0 HalfReuse: )/4 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[1] );
    refalrts::reinit_ident( context[0], ident_CmdFail );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::link_brackets( context[1], context[4] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & HighLevelRASL-Function-Conjoint\1/4 e.LastSentence#8/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.LastSentence#8 as range 5
  //DEBUG: e.LastSentence#8: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL-Function-Conjoint\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.LastSentence#8/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_L1("HighLevelRASL-Function-Conjoint\\1", 2176547019U, 3284606486U, func_gen_HighLevelRASLm_Functionm_Conjoint_L1);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A6(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & HighLevelRASL-Function-Conjoint=6/4 s.ScopeClass#1/10 (/13 e.Name#1/11 )/14 (/17 e.FastGen#3/15 )/18 (/21 e.GlobalGen#3/19 )/22 (/25 e.CommonMatchCommands#5/23 )/26 s.MaxMemory#7/27 e.Sentences#7/2 (/7 # CmdSentence/9 e.LastSentence#7/5 )/8 >/1
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
  context[9] = refalrts::ident_left(  ident_CmdSentence, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.LastSentence#7 as range 5
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.Name#1 as range 11
  // closed e.FastGen#3 as range 15
  // closed e.GlobalGen#3 as range 19
  // closed e.CommonMatchCommands#5 as range 23
  if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#7 as range 2
  //DEBUG: e.LastSentence#7: 5
  //DEBUG: s.ScopeClass#1: 10
  //DEBUG: e.Name#1: 11
  //DEBUG: e.FastGen#3: 15
  //DEBUG: e.GlobalGen#3: 19
  //DEBUG: e.CommonMatchCommands#5: 23
  //DEBUG: s.MaxMemory#7: 27
  //DEBUG: e.Sentences#7: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#1/10 AsIs: (/13 AsIs: e.Name#1/11 AsIs: )/14 AsIs: (/17 } Tile{ HalfReuse: # CmdIssueMemory/26 AsIs: s.MaxMemory#7/27 } )/28 (/29 # CmdComment/30"FAST GEN:"/31 </33 & PatternComment/34 Tile{ AsIs: e.FastGen#3/15 } >/35 )/36 (/37 # CmdComment/38"GLOBAL GEN:"/39 Tile{ HalfReuse: </18 HalfReuse: & PatternComment/21 AsIs: e.GlobalGen#3/19 HalfReuse: >/22 HalfReuse: )/25 } Tile{ AsIs: e.CommonMatchCommands#5/23 } Tile{ AsIs: e.Sentences#7/2 } Tile{ HalfReuse: </7 HalfReuse: & Fetch/9 AsIs: e.LastSentence#7/5 HalfReuse: & HighLevelRASL-Function-Conjoint\1/8 AsIs: >/1 } )/41 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[30], ident_CmdComment ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[31], context[32], "FAST GEN:", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], ref_PatternComment.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[38], ident_CmdComment ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[39], context[40], "GLOBAL GEN:", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[41] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Function );
  refalrts::reinit_ident( context[26], ident_CmdIssueMemory );
  refalrts::reinit_open_call( context[18] );
  refalrts::reinit_name( context[21], ref_PatternComment.ref.function );
  refalrts::reinit_close_call( context[22] );
  refalrts::reinit_close_bracket( context[25] );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[9], ref_Fetch.ref.function );
  refalrts::reinit_name( context[8], ref_gen_HighLevelRASLm_Functionm_Conjoint_L1.ref.function );
  refalrts::link_brackets( context[0], context[41] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[37], context[25] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[29], context[36] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[33] );
  refalrts::link_brackets( context[17], context[28] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[41], context[41] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[18], context[25] );
  res = refalrts::splice_evar( res, context[35], context[40] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[28], context[34] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A6("HighLevelRASL-Function-Conjoint=6", 2176547019U, 3284606486U, func_gen_HighLevelRASLm_Functionm_Conjoint_A6);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & HighLevelRASL-Function-Conjoint=6\1=3/4 s.MaxMemory#7/5 (/8 e.HardGenComment#7/6 )/9 (/12 # CmdIssueMemory/14 s.Memory#10/15 )/13 e.Commands#10/2 >/1
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
  context[14] = refalrts::ident_left(  ident_CmdIssueMemory, context[10], context[11] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.HardGenComment#7 as range 6
  // closed e.Commands#10 as range 2
  if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[10], context[11] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.MaxMemory#7: 5
  //DEBUG: e.HardGenComment#7: 6
  //DEBUG: e.Commands#10: 2
  //DEBUG: s.Memory#10: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Memory#10/15 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Max/4 AsIs: s.MaxMemory#7/5 HalfReuse: s.Memory10 #15/8 } >/16 (/17 Tile{ HalfReuse: # CmdSentence/9 AsIs: (/12 Reuse: # CmdComment/14 } Tile{ AsIs: e.HardGenComment#7/6 } Tile{ AsIs: )/13 AsIs: e.Commands#10/2 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Max.ref.function );
  refalrts::reinit_svar( context[8], context[15] );
  refalrts::reinit_ident( context[9], ident_CmdSentence );
  refalrts::update_ident( context[14], ident_CmdComment );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[17], context[1] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[13];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A3("HighLevelRASL-Function-Conjoint=6\\1=3", 2176547019U, 3284606486U, func_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A3);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & HighLevelRASL-Function-Conjoint=6\1=2/4 s.MaxMemory#7/5 (/8 e.HardGenComment#7/6 )/9 s.FnGenResult#1/10 (/13 e.Conditions#7/11 )/14 (/17 e.Result#7/15 )/18 s.FnGenSubst#1/19 s.ContextSize#9/20 (/23 e.CmdSaves#9/21 )/24 e.SubstitutesAnsJunks#9/2 >/1
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
  // closed e.HardGenComment#7 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.Conditions#7 as range 11
  // closed e.Result#7 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[20], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.CmdSaves#9 as range 21
  // closed e.SubstitutesAnsJunks#9 as range 2
  //DEBUG: s.MaxMemory#7: 5
  //DEBUG: e.HardGenComment#7: 6
  //DEBUG: s.FnGenResult#1: 10
  //DEBUG: e.Conditions#7: 11
  //DEBUG: e.Result#7: 15
  //DEBUG: s.FnGenSubst#1: 19
  //DEBUG: s.ContextSize#9: 20
  //DEBUG: e.CmdSaves#9: 21
  //DEBUG: e.SubstitutesAnsJunks#9: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </25 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL-Function-Conjoint=6\1=3/4 AsIs: s.MaxMemory#7/5 AsIs: (/8 } Tile{ AsIs: e.HardGenComment#7/6 } )/26 {*}/27 </28 Tile{ HalfReuse: & GenResult/9 AsIs: s.FnGenResult#1/10 AsIs: (/13 AsIs: e.Conditions#7/11 AsIs: )/14 AsIs: (/17 AsIs: e.Result#7/15 AsIs: )/18 } </29 Tile{ AsIs: s.FnGenSubst#1/19 AsIs: s.ContextSize#9/20 } Tile{ AsIs: e.SubstitutesAnsJunks#9/2 } (/30 )/31 Tile{ AsIs: (/23 AsIs: e.CmdSaves#9/21 AsIs: )/24 } >/32 >/33 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[27], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[33] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A3.ref.function );
  refalrts::reinit_name( context[9], ref_GenResult.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[33] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[29] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[30], context[31] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[8], context[26] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[9], context[18] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::use( res );
  refalrts::wrap_closure( context[27] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A2("HighLevelRASL-Function-Conjoint=6\\1=2", 2176547019U, 3284606486U, func_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A2);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & HighLevelRASL-Function-Conjoint=6\1=1/4 s.MaxMemory#7/5 (/8 e.HardGenComment#7/6 )/9 s.FnGenResult#1/10 (/13 e.Conditions#7/11 )/14 (/17 e.Result#7/15 )/18 s.FnGenSubst#1/19 s.ContextSize#5/20 e.SubstitutesAnsJunks#8/2 >/1
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
  // closed e.HardGenComment#7 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.Conditions#7 as range 11
  // closed e.Result#7 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[20], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SubstitutesAnsJunks#8 as range 2
  //DEBUG: s.MaxMemory#7: 5
  //DEBUG: e.HardGenComment#7: 6
  //DEBUG: s.FnGenResult#1: 10
  //DEBUG: e.Conditions#7: 11
  //DEBUG: e.Result#7: 15
  //DEBUG: s.FnGenSubst#1: 19
  //DEBUG: s.ContextSize#5: 20
  //DEBUG: e.SubstitutesAnsJunks#8: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </21 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL-Function-Conjoint=6\1=2/4 AsIs: s.MaxMemory#7/5 AsIs: (/8 AsIs: e.HardGenComment#7/6 AsIs: )/9 AsIs: s.FnGenResult#1/10 AsIs: (/13 AsIs: e.Conditions#7/11 AsIs: )/14 AsIs: (/17 AsIs: e.Result#7/15 AsIs: )/18 AsIs: s.FnGenSubst#1/19 } {*}/22 </23 & MakeSavers/24 Tile{ AsIs: s.ContextSize#5/20 AsIs: e.SubstitutesAnsJunks#8/2 AsIs: >/1 } >/25 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[22], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], ref_MakeSavers.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A2.ref.function );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[20], context[1] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[0], context[19] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::use( res );
  refalrts::wrap_closure( context[22] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A1("HighLevelRASL-Function-Conjoint=6\\1=1", 2176547019U, 3284606486U, func_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A1);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A6L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & HighLevelRASL-Function-Conjoint=6\1/4 s.FnGenResult#1/21 s.FnGenSubst#1/22 s.ContextSize#5/23 (/26 e.MarkedPattern#5/24 )/27 (/30 e.Vars#5/28 )/31 s.MaxMemory#7/32 (/7 (/11 e.Substitute#7/9 )/12 (/15 e.HardGenComment#7/13 )/16 e.Conditions#7/5 (/19 e.Result#7/17 )/20 )/8 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Substitute#7 as range 9
  // closed e.HardGenComment#7 as range 13
  // closed e.Conditions#7 as range 5
  // closed e.Result#7 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  context[28] = 0;
  context[29] = 0;
  context[30] = refalrts::brackets_left( context[28], context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[30], context[31]);
  // closed e.MarkedPattern#5 as range 24
  // closed e.Vars#5 as range 28
  if( ! refalrts::svar_left( context[32], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Substitute#7: 9
  //DEBUG: e.HardGenComment#7: 13
  //DEBUG: e.Conditions#7: 5
  //DEBUG: e.Result#7: 17
  //DEBUG: s.FnGenResult#1: 21
  //DEBUG: s.FnGenSubst#1: 22
  //DEBUG: s.ContextSize#5: 23
  //DEBUG: e.MarkedPattern#5: 24
  //DEBUG: e.Vars#5: 28
  //DEBUG: s.MaxMemory#7: 32

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.FnGenSubst#1/22 s.ContextSize#5/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.MaxMemory#7/32 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & HighLevelRASL-Function-Conjoint=6\1=1/33 Tile{ HalfReuse: s.MaxMemory7 #32/27 AsIs: (/30 } Tile{ AsIs: e.HardGenComment#7/13 } Tile{ AsIs: )/16 } Tile{ AsIs: s.FnGenResult#1/21 } Tile{ AsIs: (/26 } Tile{ AsIs: e.Conditions#7/5 } Tile{ AsIs: )/31 } Tile{ AsIs: (/19 AsIs: e.Result#7/17 AsIs: )/20 HalfReuse: s.FnGenSubst1 #22/8 HalfReuse: s.ContextSize5 #23/1 } {*}/34 </35 & ComposeVars/36 (/37 Tile{ AsIs: e.MarkedPattern#5/24 } Tile{ HalfReuse: )/7 AsIs: (/11 AsIs: e.Substitute#7/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Vars#5/28 } )/38 >/39 >/40 Tile{ ]] }
  if( ! refalrts::alloc_name( context[33], ref_gen_HighLevelRASLm_Functionm_Conjoint_A6L1A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[34], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[36], ref_ComposeVars.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_svar( context[27], context[32] );
  refalrts::reinit_svar( context[8], context[22] );
  refalrts::reinit_svar( context[1], context[23] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[39] );
  refalrts::push_stack( context[35] );
  refalrts::link_brackets( context[15], context[38] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[37], context[7] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[26], context[31] );
  refalrts::link_brackets( context[30], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[38], context[40] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[34], context[37] );
  res = refalrts::splice_evar( res, context[19], context[1] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[27], context[30] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  refalrts::splice_to_freelist_open( context[4], res );
  refalrts::wrap_closure( context[34] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A6L1("HighLevelRASL-Function-Conjoint=6\\1", 2176547019U, 3284606486U, func_gen_HighLevelRASLm_Functionm_Conjoint_A6L1);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & HighLevelRASL-Function-Conjoint=5/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 (/12 e.FastGen#3/10 )/13 (/16 e.GlobalGen#3/14 )/17 (/20 e.CommonMatchCommands#5/18 )/21 s.FnGenResult#1/22 s.FnGenSubst#1/23 s.ContextSize#5/24 (/27 e.MarkedPattern#5/25 )/28 (/31 e.Vars#5/29 )/32 (/35 )/36 e.SentencesWithSubst#6/2 >/1
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.Name#1 as range 6
  // closed e.FastGen#3 as range 10
  // closed e.GlobalGen#3 as range 14
  // closed e.CommonMatchCommands#5 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_left( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  if( ! refalrts::empty_seq( context[33], context[34] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern#5 as range 25
  // closed e.Vars#5 as range 29
  // closed e.SentencesWithSubst#6 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: e.FastGen#3: 10
  //DEBUG: e.GlobalGen#3: 14
  //DEBUG: e.CommonMatchCommands#5: 18
  //DEBUG: s.FnGenResult#1: 22
  //DEBUG: s.FnGenSubst#1: 23
  //DEBUG: s.ContextSize#5: 24
  //DEBUG: e.MarkedPattern#5: 25
  //DEBUG: e.Vars#5: 29
  //DEBUG: e.SentencesWithSubst#6: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </37 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL-Function-Conjoint=6/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.FastGen#3/10 AsIs: )/13 AsIs: (/16 AsIs: e.GlobalGen#3/14 AsIs: )/17 AsIs: (/20 AsIs: e.CommonMatchCommands#5/18 AsIs: )/21 } {*}/38 </39 & MapReduce/40 [*]/41 & HighLevelRASL-Function-Conjoint=6\1/42 Tile{ AsIs: s.FnGenResult#1/22 AsIs: s.FnGenSubst#1/23 AsIs: s.ContextSize#5/24 AsIs: (/27 AsIs: e.MarkedPattern#5/25 AsIs: )/28 AsIs: (/31 AsIs: e.Vars#5/29 AsIs: )/32 HalfReuse: {*}/35 HalfReuse: s.ContextSize5 #24/36 AsIs: e.SentencesWithSubst#6/2 AsIs: >/1 } >/43 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[38], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[40], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[42], ref_gen_HighLevelRASLm_Functionm_Conjoint_A6L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[43] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_HighLevelRASLm_Functionm_Conjoint_A6.ref.function );
  refalrts::reinit_unwrapped_closure( context[35], context[41] );
  refalrts::reinit_svar( context[36], context[24] );
  refalrts::push_stack( context[43] );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[39] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[43], context[43] );
  res = refalrts::splice_evar( res, context[22], context[1] );
  res = refalrts::splice_evar( res, context[38], context[42] );
  res = refalrts::splice_evar( res, context[0], context[21] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  refalrts::use( res );
  refalrts::wrap_closure( context[38] );
  refalrts::wrap_closure( context[35] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A5("HighLevelRASL-Function-Conjoint=5", 2176547019U, 3284606486U, func_gen_HighLevelRASLm_Functionm_Conjoint_A5);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A5L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & HighLevelRASL-Function-Conjoint=5\1/4 (/7 (/11 e.Substitute#6/9 )/12 e.Substs#6/5 )/8 (/15 (/19 e.HardGenComment#6/17 )/20 e.Conditions#6/13 (/23 e.Result#6/21 )/24 )/16 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[13], context[14] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitute#6 as range 9
  // closed e.Substs#6 as range 5
  // closed e.HardGenComment#6 as range 17
  // closed e.Conditions#6 as range 13
  // closed e.Result#6 as range 21
  //DEBUG: e.Substitute#6: 9
  //DEBUG: e.Substs#6: 5
  //DEBUG: e.HardGenComment#6: 17
  //DEBUG: e.Conditions#6: 13
  //DEBUG: e.Result#6: 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & HighLevelRASL-Function-Conjoint=5\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 AsIs: e.Substs#6/5 AsIs: )/8 } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Substitute#6/9 } Tile{ HalfReuse: )/15 AsIs: (/19 AsIs: e.HardGenComment#6/17 AsIs: )/20 AsIs: e.Conditions#6/13 AsIs: (/23 AsIs: e.Result#6/21 AsIs: )/24 AsIs: )/16 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[15] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[12], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A5L1("HighLevelRASL-Function-Conjoint=5\\1", 2176547019U, 3284606486U, func_gen_HighLevelRASLm_Functionm_Conjoint_A5L1);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & HighLevelRASL-Function-Conjoint=4/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 (/12 e.FastGen#3/10 )/13 (/16 e.GlobalGen#3/14 )/17 s.FnGenResult#1/18 s.FnGenSubst#1/19 (/22 e.SentSubsts#4/20 )/23 (/26 e.SentenceTails#2/24 )/27 s.ContextSize#5/28 (/31 e.Vars#5/29 )/32 (/35 e.MarkedPattern#5/33 )/36 e.CommonMatchCommands#5/2 >/1
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Name#1 as range 6
  // closed e.FastGen#3 as range 10
  // closed e.GlobalGen#3 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  // closed e.SentSubsts#4 as range 20
  // closed e.SentenceTails#2 as range 24
  if( ! refalrts::svar_left( context[28], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_left( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  // closed e.Vars#5 as range 29
  // closed e.MarkedPattern#5 as range 33
  // closed e.CommonMatchCommands#5 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: e.FastGen#3: 10
  //DEBUG: e.GlobalGen#3: 14
  //DEBUG: s.FnGenResult#1: 18
  //DEBUG: s.FnGenSubst#1: 19
  //DEBUG: e.SentSubsts#4: 20
  //DEBUG: e.SentenceTails#2: 24
  //DEBUG: s.ContextSize#5: 28
  //DEBUG: e.Vars#5: 29
  //DEBUG: e.MarkedPattern#5: 33
  //DEBUG: e.CommonMatchCommands#5: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ContextSize#5/28 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </37 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL-Function-Conjoint=5/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.FastGen#3/10 AsIs: )/13 AsIs: (/16 AsIs: e.GlobalGen#3/14 AsIs: )/17 } Tile{ AsIs: (/31 } Tile{ AsIs: e.CommonMatchCommands#5/2 } )/38 Tile{ AsIs: s.FnGenResult#1/18 AsIs: s.FnGenSubst#1/19 } Tile{ HalfReuse: s.ContextSize5 #28/32 AsIs: (/35 AsIs: e.MarkedPattern#5/33 AsIs: )/36 } Tile{ AsIs: (/26 } Tile{ AsIs: e.Vars#5/29 } Tile{ AsIs: )/27 } {*}/39 </40 & MapReduce/41 & HighLevelRASL-Function-Conjoint=5\1/42 Tile{ AsIs: (/22 AsIs: e.SentSubsts#4/20 AsIs: )/23 } Tile{ AsIs: e.SentenceTails#2/24 } >/43 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[39], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[41], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[42], ref_gen_HighLevelRASLm_Functionm_Conjoint_A5L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[43] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_HighLevelRASLm_Functionm_Conjoint_A5.ref.function );
  refalrts::reinit_svar( context[32], context[28] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[43] );
  refalrts::push_stack( context[40] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[31], context[38] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[43], context[43] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[39], context[42] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[32], context[36] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[0], context[17] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  refalrts::wrap_closure( context[39] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A4("HighLevelRASL-Function-Conjoint=4", 2176547019U, 3284606486U, func_gen_HighLevelRASLm_Functionm_Conjoint_A4);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & HighLevelRASL-Function-Conjoint=3/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 (/12 e.FastGen#3/10 )/13 (/16 e.GlobalGen#3/14 )/17 s.FnGenResult#1/18 s.FnGenSubst#1/19 (/22 e.SentenceTails#2/20 )/23 (/26 e.CommonPattern#4/24 )/27 e.SentSubsts#4/2 >/1
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Name#1 as range 6
  // closed e.FastGen#3 as range 10
  // closed e.GlobalGen#3 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  // closed e.SentenceTails#2 as range 20
  // closed e.CommonPattern#4 as range 24
  // closed e.SentSubsts#4 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: e.FastGen#3: 10
  //DEBUG: e.GlobalGen#3: 14
  //DEBUG: s.FnGenResult#1: 18
  //DEBUG: s.FnGenSubst#1: 19
  //DEBUG: e.SentenceTails#2: 20
  //DEBUG: e.CommonPattern#4: 24
  //DEBUG: e.SentSubsts#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </28 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL-Function-Conjoint=4/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.FastGen#3/10 AsIs: )/13 AsIs: (/16 AsIs: e.GlobalGen#3/14 AsIs: )/17 AsIs: s.FnGenResult#1/18 AsIs: s.FnGenSubst#1/19 AsIs: (/22 } Tile{ AsIs: e.SentSubsts#4/2 } Tile{ AsIs: )/23 AsIs: (/26 } Tile{ AsIs: e.SentenceTails#2/20 } Tile{ AsIs: )/27 } {*}/29 </30 & GenPattern/31 s.FnGenSubst#1/19/32 (/33 e.Name#1/6/34 )/36 Tile{ AsIs: e.CommonPattern#4/24 } >/37 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[29], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], ref_GenPattern.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[32], context[19]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[34], context[35], context[6], context[7]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[37] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_HighLevelRASLm_Functionm_Conjoint_A4.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[30] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[29], context[36] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[23], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[22] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  refalrts::use( res );
  refalrts::wrap_closure( context[29] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A3("HighLevelRASL-Function-Conjoint=3", 2176547019U, 3284606486U, func_gen_HighLevelRASLm_Functionm_Conjoint_A3);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & HighLevelRASL-Function-Conjoint=2/4 s.ScopeClass#1/17 (/20 e.Name#1/18 )/21 s.FnGenResult#1/22 s.FnGenSubst#1/23 (/15 e.SentenceTails#2/13 )/16 (/11 e.FastGen#3/9 )/12 (/7 e.GlobalGen#3/5 )/8 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.SentenceTails#2 as range 13
  // closed e.FastGen#3 as range 9
  // closed e.GlobalGen#3 as range 5
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.Name#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.SentenceTails#2: 13
  //DEBUG: e.FastGen#3: 9
  //DEBUG: e.GlobalGen#3: 5
  //DEBUG: s.ScopeClass#1: 17
  //DEBUG: e.Name#1: 18
  //DEBUG: s.FnGenResult#1: 22
  //DEBUG: s.FnGenSubst#1: 23

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.FnGenResult#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL-Function-Conjoint=3/4 AsIs: s.ScopeClass#1/17 AsIs: (/20 } Tile{ AsIs: e.Name#1/18 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.FastGen#3/9 AsIs: )/12 AsIs: (/7 AsIs: e.GlobalGen#3/5 AsIs: )/8 HalfReuse: s.FnGenResult1 #22/1 } Tile{ AsIs: s.FnGenSubst#1/23 AsIs: (/15 } Tile{ AsIs: e.SentenceTails#2/13 } Tile{ AsIs: )/21 } {*}/25 </26 & SplitGen/27 (/28 e.GlobalGen#3/5/29 )/31 e.SentenceTails#2/13/32 >/34 >/35 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[25], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], ref_SplitGen.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[29], context[30], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[32], context[33], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_HighLevelRASLm_Functionm_Conjoint_A3.ref.function );
  refalrts::reinit_svar( context[1], context[22] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[26] );
  refalrts::link_brackets( context[28], context[31] );
  refalrts::link_brackets( context[15], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[20], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[35] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[23], context[15] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[0], context[20] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  refalrts::wrap_closure( context[25] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A2("HighLevelRASL-Function-Conjoint=2", 2176547019U, 3284606486U, func_gen_HighLevelRASLm_Functionm_Conjoint_A2);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & HighLevelRASL-Function-Conjoint=1/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 s.FnGenResult#1/10 s.FnGenSubst#1/11 (/14 e.HardPatterns#2/12 )/15 e.SentenceTails#2/2 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.HardPatterns#2 as range 12
  // closed e.SentenceTails#2 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: s.FnGenResult#1: 10
  //DEBUG: s.FnGenSubst#1: 11
  //DEBUG: e.HardPatterns#2: 12
  //DEBUG: e.SentenceTails#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </16 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL-Function-Conjoint=2/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: s.FnGenResult#1/10 AsIs: s.FnGenSubst#1/11 AsIs: (/14 } Tile{ AsIs: e.SentenceTails#2/2 } Tile{ AsIs: )/15 } {*}/17 </18 & CreateGlobalGen/19 Tile{ AsIs: e.HardPatterns#2/12 } >/20 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[17], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ref_CreateGlobalGen.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_HighLevelRASLm_Functionm_Conjoint_A2.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A1("HighLevelRASL-Function-Conjoint=1", 2176547019U, 3284606486U, func_gen_HighLevelRASLm_Functionm_Conjoint_A1);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A1L1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & HighLevelRASL-Function-Conjoint=1\1=1/4 (/7 e.HardPatterns#2/5 )/8 (/11 e.Conditions#2/9 )/12 (/15 e.Result#2/13 )/16 e.HardPattern#3/2 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.HardPatterns#2 as range 5
  // closed e.Conditions#2 as range 9
  // closed e.Result#2 as range 13
  // closed e.HardPattern#3 as range 2
  //DEBUG: e.HardPatterns#2: 5
  //DEBUG: e.Conditions#2: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: e.HardPattern#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.HardPatterns#2/5 HalfReuse: (/8 } e.HardPattern#3/2/17 )/19 Tile{ AsIs: )/12 } (/20 Tile{ AsIs: (/11 } Tile{ AsIs: </0 Reuse: & PatternComment/4 } Tile{ AsIs: e.HardPattern#3/2 } >/21 )/22 Tile{ AsIs: e.Conditions#2/9 } Tile{ AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 } Tile{ HalfReuse: )/1 ]] }
  if (! refalrts::copy_evar(context[17], context[18], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[8] );
  refalrts::update_name( context[4], ref_PatternComment.ref.function );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[20], context[1] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[22] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[8], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A1L1A1("HighLevelRASL-Function-Conjoint=1\\1=1", 2176547019U, 3284606486U, func_gen_HighLevelRASLm_Functionm_Conjoint_A1L1A1);


static refalrts::FnResult func_gen_HighLevelRASLm_Functionm_Conjoint_A1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & HighLevelRASL-Function-Conjoint=1\1/4 (/7 e.HardPatterns#2/5 )/8 (/11 (/15 e.Pattern#2/13 )/16 e.Conditions#2/9 (/19 e.Result#2/17 )/20 )/12 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.HardPatterns#2 as range 5
  // closed e.Pattern#2 as range 13
  // closed e.Conditions#2 as range 9
  // closed e.Result#2 as range 17
  //DEBUG: e.HardPatterns#2: 5
  //DEBUG: e.Pattern#2: 13
  //DEBUG: e.Conditions#2: 9
  //DEBUG: e.Result#2: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </21 Tile{ HalfReuse: [*]/0 Reuse: & HighLevelRASL-Function-Conjoint=1\1=1/4 AsIs: (/7 AsIs: e.HardPatterns#2/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Conditions#2/9 } )/22 Tile{ AsIs: (/19 AsIs: e.Result#2/17 AsIs: )/20 HalfReuse: {*}/12 HalfReuse: </1 } Tile{ HalfReuse: & CreateHardPattern/15 AsIs: e.Pattern#2/13 HalfReuse: >/16 } >/23 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_HighLevelRASLm_Functionm_Conjoint_A1L1A1.ref.function );
  refalrts::reinit_unwrapped_closure( context[12], context[0] );
  refalrts::reinit_open_call( context[1] );
  refalrts::reinit_name( context[15], ref_CreateHardPattern.ref.function );
  refalrts::reinit_close_call( context[16] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[22] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[19], context[1] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HighLevelRASLm_Functionm_Conjoint_A1L1("HighLevelRASL-Function-Conjoint=1\\1", 2176547019U, 3284606486U, func_gen_HighLevelRASLm_Functionm_Conjoint_A1L1);


static refalrts::FnResult func_HighLevelRASLm_Functionm_Conjoint(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & HighLevelRASL-Function-Conjoint/4 s.FnGenSubst#1/5 s.FnGenResult#1/6 s.ScopeClass#1/7 (/10 e.Name#1/8 )/11 e.Sentences#1/2 >/1
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
  // closed e.Name#1 as range 8
  // closed e.Sentences#1 as range 2
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: s.FnGenResult#1: 6
  //DEBUG: s.ScopeClass#1: 7
  //DEBUG: e.Name#1: 8
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & HighLevelRASL-Function-Conjoint=1/12 Tile{ AsIs: s.ScopeClass#1/7 AsIs: (/10 AsIs: e.Name#1/8 AsIs: )/11 } Tile{ AsIs: s.FnGenResult#1/6 } Tile{ AsIs: s.FnGenSubst#1/5 } {*}/13 </14 & MapReduce/15 & HighLevelRASL-Function-Conjoint=1\1/16 (/17 )/18 Tile{ AsIs: e.Sentences#1/2 } >/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[12], ref_gen_HighLevelRASLm_Functionm_Conjoint_A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[13], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_gen_HighLevelRASLm_Functionm_Conjoint_A1L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[14] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[18] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HighLevelRASLm_Functionm_Conjoint("HighLevelRASL-Function-Conjoint", 0U, 0U, func_HighLevelRASLm_Functionm_Conjoint);


static refalrts::FnResult func_ComposeVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 72 elems
  refalrts::Iter context[72];
  refalrts::zeros( context, 72 );
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ )
  // </0 & ComposeVars/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  do {
    // ( e.idx ) ( e.idx ) ( e.idx )
    // </0 & ComposeVars/4 (/7 e.MarkedPattern-B#1/23 (/33 # TkVariable/35 s.Mode#1/36 e.Name#1/31 s.Offset#1/37 )/34 e.MarkedPattern-E#1/25 )/8 (/11 e.Substitute-B#1/38 (/46 s.Tag#1/48 (/51 e.Name#1/54 )/52 '$'/53 e.Subst#1/44 )/47 e.Substitute-E#1/40 )/12 (/15 e.Vars-B#1/56 (/62 s.Mode#1/64 (/67 e.Name#1/69 )/68 s.Offset#1/71 )/63 e.Vars-E#1/58 )/16 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    refalrts::start_e_loop();
    do {
      context[25] = context[17];
      context[26] = context[18];
      context[27] = context[19];
      context[28] = context[20];
      context[29] = context[21];
      context[30] = context[22];
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[25], context[26] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left(  ident_TkVariable, context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.MarkedPattern-E#1 as range 25
      if( ! refalrts::svar_left( context[36], context[31], context[32] ) )
        continue;
      if( ! refalrts::svar_right( context[37], context[31], context[32] ) )
        continue;
      // closed e.Name#1 as range 31
      context[38] = 0;
      context[39] = 0;
      refalrts::start_e_loop();
      do {
        context[40] = context[27];
        context[41] = context[28];
        context[42] = context[29];
        context[43] = context[30];
        context[44] = 0;
        context[45] = 0;
        context[46] = refalrts::brackets_left( context[44], context[45], context[40], context[41] );
        if( ! context[46] )
          continue;
        refalrts::bracket_pointers(context[46], context[47]);
        // closed e.Substitute-E#1 as range 40
        if( ! refalrts::svar_left( context[48], context[44], context[45] ) )
          continue;
        context[49] = 0;
        context[50] = 0;
        context[51] = refalrts::brackets_left( context[49], context[50], context[44], context[45] );
        if( ! context[51] )
          continue;
        refalrts::bracket_pointers(context[51], context[52]);
        context[53] = refalrts::char_left( '$', context[44], context[45] );
        if( ! context[53] )
          continue;
        if( ! refalrts::repeated_evar_left( context[54], context[55], context[31], context[32], context[49], context[50] ) )
          continue;
        if( ! refalrts::empty_seq( context[49], context[50] ) )
          continue;
        // closed e.Subst#1 as range 44
        context[56] = 0;
        context[57] = 0;
        refalrts::start_e_loop();
        do {
          context[58] = context[42];
          context[59] = context[43];
          context[60] = 0;
          context[61] = 0;
          context[62] = refalrts::brackets_left( context[60], context[61], context[58], context[59] );
          if( ! context[62] )
            continue;
          refalrts::bracket_pointers(context[62], context[63]);
          if( ! refalrts::repeated_stvar_left( context[64], context[36], context[60], context[61] ) )
            continue;
          context[65] = 0;
          context[66] = 0;
          context[67] = refalrts::brackets_left( context[65], context[66], context[60], context[61] );
          if( ! context[67] )
            continue;
          refalrts::bracket_pointers(context[67], context[68]);
          if( ! refalrts::repeated_evar_left( context[69], context[70], context[54], context[55], context[65], context[66] ) )
            continue;
          if( ! refalrts::empty_seq( context[65], context[66] ) )
            continue;
          if( ! refalrts::repeated_stvar_left( context[71], context[37], context[60], context[61] ) )
            continue;
          if( ! refalrts::empty_seq( context[60], context[61] ) )
            continue;
          // closed e.Vars-E#1 as range 58
          //DEBUG: e.MarkedPattern-B#1: 23
          //DEBUG: e.MarkedPattern-E#1: 25
          //DEBUG: s.Mode#1: 36
          //DEBUG: s.Offset#1: 37
          //DEBUG: e.Name#1: 31
          //DEBUG: e.Substitute-B#1: 38
          //DEBUG: e.Substitute-E#1: 40
          //DEBUG: s.Tag#1: 48
          //DEBUG: e.Subst#1: 44
          //DEBUG: e.Vars-B#1: 56
          //DEBUG: e.Vars-E#1: 58

          refalrts::reset_allocator();
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/36 e.Name#1/31 s.Offset#1/37 {REMOVED TILE} {REMOVED TILE} (/46 s.Tag#1/48 (/51 e.Name#1/54 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/64 (/67 e.Name#1/69 )/68 s.Offset#1/71 )/63 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Junk/7 AsIs: e.MarkedPattern-B#1/23 HalfReuse: )/33 HalfReuse: (/35 } Tile{ HalfReuse: s.Tag1 #48/52 HalfReuse: s.Offset1 #71/53 AsIs: e.Subst#1/44 AsIs: )/47 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ComposeVars/62 } Tile{ HalfReuse: (/34 AsIs: e.MarkedPattern-E#1/25 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Substitute-B#1/38 } Tile{ AsIs: e.Substitute-E#1/40 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Vars-B#1/56 } Tile{ AsIs: e.Vars-E#1/58 } Tile{ AsIs: )/16 AsIs: >/1 ]] }
          refalrts::reinit_open_bracket( context[4] );
          refalrts::reinit_ident( context[7], ident_Junk );
          refalrts::reinit_close_bracket( context[33] );
          refalrts::reinit_open_bracket( context[35] );
          refalrts::reinit_svar( context[52], context[48] );
          refalrts::reinit_svar( context[53], context[71] );
          refalrts::reinit_name( context[62], ref_ComposeVars.ref.function );
          refalrts::reinit_open_bracket( context[34] );
          refalrts::push_stack( context[1] );
          refalrts::push_stack( context[0] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[34], context[8] );
          refalrts::link_brackets( context[35], context[47] );
          refalrts::link_brackets( context[4], context[33] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_evar( res, context[58], context[59] );
          res = refalrts::splice_evar( res, context[56], context[57] );
          res = refalrts::splice_evar( res, context[12], context[15] );
          res = refalrts::splice_evar( res, context[40], context[41] );
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[34], context[11] );
          res = refalrts::splice_evar( res, context[62], context[62] );
          res = refalrts::splice_evar( res, context[0], context[0] );
          res = refalrts::splice_evar( res, context[52], context[47] );
          res = refalrts::splice_evar( res, context[4], context[35] );
          refalrts::splice_to_freelist_open( trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[56], context[57], context[42], context[43] ) );
      } while ( refalrts::open_evar_advance( context[38], context[39], context[27], context[28] ) );
    } while ( refalrts::open_evar_advance( context[23], context[24], context[17], context[18] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( ) ( )
  // </0 & ComposeVars/4 (/7 e.MarkedPattern#1/17 )/8 (/11 )/12 (/15 )/16 >/1
  context[17] = context[5];
  context[18] = context[6];
  context[19] = context[9];
  context[20] = context[10];
  context[21] = context[13];
  context[22] = context[14];
  if( ! refalrts::empty_seq( context[19], context[20] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[21], context[22] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern#1 as range 17
  //DEBUG: e.MarkedPattern#1: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 )/12 (/15 )/16 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Junk/7 AsIs: e.MarkedPattern#1/17 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_Junk );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ComposeVars("ComposeVars", 2176547019U, 3284606486U, func_ComposeVars);


//End of file
