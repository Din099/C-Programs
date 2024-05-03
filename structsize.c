#include<stdio.h>
#pragma pack(1)
int main()
{
    struct size{
        int a;
        char b;
        int c;
    };
    struct size x;
    printf("%d\n",sizeof(x));
}