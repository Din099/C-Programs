//program to check if a number is a power of 2 or not
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num && ((num & num-1)==0)){
        printf("pow of 2");
    }
    else
        printf("not pow of 2");
}
