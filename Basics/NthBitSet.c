//nth bit is set or not
#include <stdio.h>

int main()
{
  int a = 2586; // 1010
  int n = 5;

  // nth bit is set or not
  int res = (a >> n) & 1;
  
  printf("Nth of bit is set = %b\n", res);
}
