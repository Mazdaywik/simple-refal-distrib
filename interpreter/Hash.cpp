// This file automatically generated from 'Hash.ref'
// Don't edit! Edit 'Hash.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2835852153_894198459
#define COOKIE1_ 2835852153U
#define COOKIE2_ 894198459U

enum efunc {
  efunc_HashLittle2m_Chars = 0,
};

#line 2 "Hash.ref"
/*
  Следующие манипуляции нужны для того, чтобы, оставаясь в рамках C++98,
  переносимо получить тип uint32_t.
*/
#include <stddef.h>

using refalrts::UInt32;

#line 24 "Hash.cpp"

static refalrts::FnResult func_HashLittle2m_Chars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
#line 14 "Hash.ref"
  refalrts::Iter content_b = 0;
  refalrts::Iter content_e = 0;
  refalrts::Iter func_name =
    refalrts::call_left(content_b, content_e, arg_begin, arg_end);

  refalrts::Iter sPrimInitval = 0;
  refalrts::Iter sSecInitval = 0;

  if (
    ! refalrts::svar_left(sPrimInitval, content_b, content_e)
    || refalrts::cDataNumber != sPrimInitval->tag
  ) {
    return refalrts::cRecognitionImpossible;
  }

  if (
    ! refalrts::svar_left(sSecInitval, content_b, content_e)
    || refalrts::cDataNumber != sSecInitval->tag
  ) {
    return refalrts::cRecognitionImpossible;
  }

  size_t length = 0;
  refalrts::Iter p = content_b;
  if (p != 0) {
    while (p != content_e->next && refalrts::cDataChar == p->tag) {
      ++ length;
      p = p->next;
    }

    if (p != content_e->next) {
      return refalrts::cRecognitionImpossible;
    }
  }

  /*
    Код ниже — результат переработки кода функции hashlittle2(),
    взятой со страницы http://www.burtleburtle.net/bob/c/lookup3.c.
    Оригинальная функция передана в общественное достояние,
    обширные комментарии Боба Дженкинса опущены.
  */
#define rot(x,k) (((x)<<(k)) | ((x)>>(32-(k))))
#define mix(a,b,c) \
{ \
  a -= c;  a ^= rot(c, 4);  c += b; \
  b -= a;  b ^= rot(a, 6);  a += c; \
  c -= b;  c ^= rot(b, 8);  b += a; \
  a -= c;  a ^= rot(c,16);  c += b; \
  b -= a;  b ^= rot(a,19);  a += c; \
  c -= b;  c ^= rot(b, 4);  b += a; \
}

#define final(a,b,c) \
{ \
  c ^= b; c -= rot(b,14); \
  a ^= c; a -= rot(c,11); \
  b ^= a; b -= rot(a,25); \
  c ^= b; c -= rot(b,16); \
  a ^= c; a -= rot(c,4);  \
  b ^= a; b -= rot(a,14); \
  c ^= b; c -= rot(b,24); \
}

  UInt32 a,b,c;                                          /* internal state */

  /* Set up the internal state */
  a = b = c = 0xdeadbeef
    + static_cast<UInt32>(length)
    + static_cast<UInt32>(sPrimInitval->number_info);
  c += static_cast<UInt32>(sSecInitval->number_info);

  unsigned char buffer[12];
  p = content_b;

  while (length > 12) {
    for (size_t i = 0; i < 12; ++i) {
      buffer[i] = static_cast<unsigned char>(p->char_info);
      p = p->next;
    }
    const UInt32 *k = reinterpret_cast<const UInt32*>(buffer);

    a += k[0];
    b += k[1];
    c += k[2];
    mix(a,b,c);
    length -= 12;
  }

  for (size_t i = 0; i < length; ++i) {
    buffer[i] = static_cast<unsigned char>(p->char_info);
    p = p->next;
  }
  const UInt32 *k = reinterpret_cast<const UInt32*>(buffer);

  /*
   * "k[2]&0xffffff" actually reads beyond the end of the string, but
   * then masks off the part it's not allowed to read.  Because the
   * string is aligned, the masked-off tail is in the same word as the
   * rest of the string.  Every machine with memory protection I've seen
   * does it on word boundaries, so is OK with this.  But VALGRIND will
   * still catch it and complain.  The masking trick does make the hash
   * noticably faster for short strings (like English words).
   */
#ifndef VALGRIND

  switch(length)
  {
    case 12: c+=k[2]; b+=k[1]; a+=k[0]; break;
    case 11: c+=k[2]&0xffffff; b+=k[1]; a+=k[0]; break;
    case 10: c+=k[2]&0xffff; b+=k[1]; a+=k[0]; break;
    case 9 : c+=k[2]&0xff; b+=k[1]; a+=k[0]; break;
    case 8 : b+=k[1]; a+=k[0]; break;
    case 7 : b+=k[1]&0xffffff; a+=k[0]; break;
    case 6 : b+=k[1]&0xffff; a+=k[0]; break;
    case 5 : b+=k[1]&0xff; a+=k[0]; break;
    case 4 : a+=k[0]; break;
    case 3 : a+=k[0]&0xffffff; break;
    case 2 : a+=k[0]&0xffff; break;
    case 1 : a+=k[0]&0xff; break;
    case 0 : break;
  }

#else /* make valgrind happy */

  k8 = (const uint8_t *)k;
  switch(length)
  {
    case 12: c+=k[2]; b+=k[1]; a+=k[0]; break;
    case 11: c+=static_cast<UInt32>(k8[10])<<16;  /* fall through */
    case 10: c+=static_cast<UInt32>(k8[9])<<8;    /* fall through */
    case 9 : c+=k8[8];                            /* fall through */
    case 8 : b+=k[1]; a+=k[0]; break;
    case 7 : b+=static_cast<UInt32>(k8[6])<<16;   /* fall through */
    case 6 : b+=static_cast<UInt32>(k8[5])<<8;    /* fall through */
    case 5 : b+=k8[4];                            /* fall through */
    case 4 : a+=k[0]; break;
    case 3 : a+=static_cast<UInt32>(k8[2])<<16;   /* fall through */
    case 2 : a+=static_cast<UInt32>(k8[1])<<8;    /* fall through */
    case 1 : a+=k8[0]; break;
    case 0 : break;
  }

#endif /* !valgrind */

  final(a,b,c);

  sPrimInitval->number_info = c;
  sSecInitval->number_info = b;

  refalrts::splice_to_freelist(vm, arg_begin, func_name);
  refalrts::Iter start_garbage =
    content_b != 0 ? content_b : arg_end;
  refalrts::splice_to_freelist(vm, start_garbage, arg_end);

#undef final
#undef mix
  return refalrts::cSuccess;
#line 189 "Hash.cpp"
}

static refalrts::NativeReference nat_ref_HashLittle2m_Chars("HashLittle2-Chars", 0U, 0U, func_HashLittle2m_Chars);


//End of file
