//Using bitwise & to find given number is odd or even
#include <stdio.h>

int main()
{
    int num = 28;
    
    (num & 1) ? printf("Num is odd\n") : printf("Num is even\n");
    
    return 0;
}
