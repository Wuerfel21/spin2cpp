#include <propeller.h>
#include "test86.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
INLINE__ int32_t PostFunc__(int32_t *x, int32_t y) { int32_t t = *x; *x = y; return t; }
#define PostEffect__(X, Y) PostFunc__(&(X), (Y))
#endif

int32_t test86::Set1(void)
{
  int32_t result = 0;
  OUTA = ((OUTA & 0xfffffffd) | 0x2);
  return result;
}

int32_t test86::Set(int32_t Pin)
{
  int32_t result = 0;
  OUTA = ((OUTA & (~(1 << Pin))) | (1 << Pin));
  return result;
}

