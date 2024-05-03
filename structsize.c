#include<stdio.h>
#pragma pack(1)//using pragma pack (1) for packaging the memory units into 1 bytes
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
