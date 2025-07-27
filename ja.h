#ifndef JA_H
#define JA_H

#include "ja_stdio.h"
#include "ja_stdlib.h"
#include "ja_string.h"
#include "ja_types.h"
#include "ja_math.h"
#include "ja_ctype.h"
#include "ja_time.h"
#include "ja_func.h"
#include "ja_var.h"

#ifdef _win32
    #include "ja_winapi.h"
    #include "ja_win32.h"
#else
    #include "ja_POSIX.h"
    #include "ja_x11.h"
#endif

#endif // JA_H