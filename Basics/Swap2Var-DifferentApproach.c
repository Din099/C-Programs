//Swapping 2 variables - different approaches
#include <stdio.h>

int main()
{
    int a = 20, b = 30;
    // Case 1 - with using third variable - extra memory space
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    printf("a=%d, b=%d\n",a,b);
    
    // Case 2 - Using arithmetic operators
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a=%d, b=%d\n",a,b);
    
    // case 3 - using bitwise operators
    a = a^b;
    b = b^a;
    a = a^b;
    printf("a=%d, b=%d\n",a,b);
    
    // case 4 - using one-liner bitwise operator
    a^=b^=a^=b;//order of evaluation is right to left
    printf("a=%d, b=%d\n",a,b);
    
    // case 5 - using one-liner arithmetic operator
    a = (a+b) - (b=a);
    printf("a=%d, b=%d\n",a,b);
    return 0;
}
