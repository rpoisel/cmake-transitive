#define ACCESS_A 0
#define ACCESS_B 1
#define ACCESS_C 1

#if ACCESS_A == 1
#include <A.h>
#endif
#if ACCESS_B == 1
#include <B.h>
#endif
#if ACCESS_C == 1
#include <C.h>
#endif

int main(void)
{
  int retVal = 0;
#if ACCESS_A == 1
  retVal += foo();
#endif
#if ACCESS_B == 1
  retVal += bar();
#endif
#if ACCESS_C == 1
  retVal += baz();
#endif
  return retVal;
}
