#include <stdio.h>
#include <stdlib.h>
  
#ifdef DBG_MACRO_C_ENABLE
#define DEBUG_MSG(x, args ...) fprintf(stderr, " [%s(), %s:%u]\n" \
x, __FUNCTION__, __FILE__,__LINE__, ## args)
#else
#define DEBUG_MSG(x, args ...)
#endif