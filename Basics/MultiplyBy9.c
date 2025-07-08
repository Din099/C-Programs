//Embedded C program to multiply any number by 9 in the fastest manner.
#include <stdio.h>

int main()
{
    int num=0;
    printf("Enter a num\n");
    scanf("%d", &num);
    printf("%d",(num<<3)+num);
    return 0;
}
