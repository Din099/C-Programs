//Program to count digits in a number using while loop
#include <stdio.h>

int main()
{
    int num=1234;
    int count=0;
    
    while(num){
        num = num/10;
        count++;
    }
    printf("Num is %d and Count is :%d",num, count);
    return 0;
}
