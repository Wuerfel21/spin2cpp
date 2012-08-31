#include <propeller.h>
#include "test35.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
INLINE__ int32_t PostFunc__(int32_t *x, int32_t y) { int32_t t = *x; *x = y; return t; }
#define PostEffect__(X, Y) PostFunc__(&(X), (Y))
#endif

uint8_t test35::dat[] = {
  0x02, 0x0a, 0xfc, 0x5c, 0x01, 0x00, 0x3c, 0x5c, 0x01, 0x0c, 0xfc, 0x80, 0x02, 0x0e, 0xfc, 0x80, 
  0x03, 0x12, 0xfc, 0x80, 0x00, 0x00, 0x7c, 0x5c, 
};
int32_t test35::Start(void)
{
  int32_t result = 0;
  return result;
}

