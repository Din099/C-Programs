//No. of set bits
#include <stdio.h>
int main()
{
  int a = 2586; // 1010
  int bits = sizeof(int)*8;
  int cnt=0;
  int setBit=0;
  for(int i=0; i<bits; i++)
    {
      setBit = a & 1;
      if(setBit == 1)
      {
        cnt++;
      }
      a = a>>1;
    }
  printf("No of bits set = %d\n", cnt);
}
