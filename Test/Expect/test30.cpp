#include <propeller.h>
#include "test30.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
INLINE__ int32_t PostFunc__(int32_t *x, int32_t y) { int32_t t = *x; *x = y; return t; }
#define PostEffect__(X, Y) PostFunc__(&(X), (Y))
#endif

int32_t test30::Test(void)
{
  int32_t X = 0;
  if ((A == 0) && (B == 0)) {
    return 0;
  } else {
    if (A == 0) {
      return 1;
    } else {
      if (B == 0) {
        return 2;
      } else {
        X = (-1);
      }
    }
  }
  return X;
}

