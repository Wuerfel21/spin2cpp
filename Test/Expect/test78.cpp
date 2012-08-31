#include <propeller.h>
#include "test78.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
INLINE__ int32_t PostFunc__(int32_t *x, int32_t y) { int32_t t = *x; *x = y; return t; }
#define PostEffect__(X, Y) PostFunc__(&(X), (Y))
#endif

uint8_t test78::dat[] = {
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x14, 0x00, 0x1c, 0x00, 0x24, 0x00, 0x05, 0x00, 0x07, 0x00, 
  0x09, 0x00, 0x00, 0x00, 0x45, 0x72, 0x72, 0x6f, 0x72, 0x20, 0x31, 0x00, 0x45, 0x72, 0x72, 0x6f, 
  0x72, 0x20, 0x32, 0x00, 0x45, 0x72, 0x72, 0x6f, 0x72, 0x20, 0x33, 0x00, 
};
int32_t test78::Geterr(int32_t N)
{
  int32_t result = 0;
  return (int32_t)((((uint16_t *)&dat[6])[N])+dat);
}

