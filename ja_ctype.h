#ifndef JA_CTYPE_H
#define JA_CTYPE_H
#include <ctype.h>

#define 英字か isalpha
#define 数字か isdigit
#define 英数字か isalnum
#define 小文字か islower
#define 大文字か isupper
#define 空白か isspace
#define 制御文字か iscntrl
#define 印字可能か isprint
#define 十六進数か isxdigit
#define グラフィック文字か isgraph
#define 区切り文字か ispunct
#define 小文字に変換 tolower
#define 大文字に変換 toupper

#endif // JA_CTYPE_H