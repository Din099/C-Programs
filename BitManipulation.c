//Bitwise operators and bit manipulation in C

#include <stdio.h>

int main()
{
    int a = 5; //(0000 0101)
    int b = 9; //(0000 1001)
    
    printf("a = %u, b = %u\n", a,b);
    
    printf("a & b = %u\n", a&b);//0000 0001 ->1
    
    printf("a | b = %u\n", a|b);//0000 1101 -> 13
    
    printf("a ^ b = %u\n", a^b);//0000 1100 -> 12
    
    printf("~a = %u\n", ~a);//1111 1010 -> negative number

    printf("b << 1 = %u\n",b<<1);//0001 0010 -> 18
    
    printf("b >> 1 = %u\n", b>>1);//0000 0100 -> 4
    
    return 0;
}
