//Using bitwise and logical AND(&) operator, finding whether the number is power a of 2
#include <stdio.h>

//  Function to check if x is power of 2
int isPowerOfTwo(int x)
{
  	if (x == 0)
  	    return 0;
    return x && (!(x & (x - 1)));
}
int main()
{
    int x = 64;
    int powOf2;
    powOf2 = isPowerOfTwo(x);
    if(powOf2)
        printf("X is power of 2\n");
    else
        printf("X is not a power of 2\n");
    
    return 0;
}
