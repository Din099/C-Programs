//itoa -interger to character function to print the numbers in char format
#include<stdio.h>
#include<stdarg.h>

void itoa(int n)
{
    int i = 0;
    char arr[10];
    while(n)
    {
        arr[i++] = n%10 + 48;
        n/=10;
    }
    while(i--)
        putchar(arr[i]);
}

int main()
{
    int n = 15;
    itoa(n);
    return 0;
}
