#include <propeller.h>
#include "test11.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
INLINE__ int32_t PostFunc__(int32_t *x, int32_t y) { int32_t t = *x; *x = y; return t; }
#define PostEffect__(X, Y) PostFunc__(&(X), (Y))
#endif

int32_t test11::Peek(void)
{
  int32_t result = 0;
  return Count;
}

int32_t test11::Donext(void)
{
  int32_t result = 0;
  Count = (Peek() + 1);
  return Count;
}

