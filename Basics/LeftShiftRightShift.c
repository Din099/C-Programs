//Multiplication and division by left shift (<<) and right shift(>>) operator
#include <stdio.h>

int main()
{
    int num = 29;
    
    printf("Multiplication by 2\n");
    printf("num << 1 = %d\n", num << 1);//Num get multiplied by 2
    
    printf("Division by 2\n");
    printf("num >> 1 = %d\n", num >> 1);//Num get divided by 2
    
    return 0;
}
