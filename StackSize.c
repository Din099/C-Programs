//Program to check the stack size
//Operating System decides the Stack size
#include <stdio.h>
void fun(int cnt)
{
    char arr[1000000];//this line will consume the 1MB per iteration of recursive function 'fun'.
    printf("Entered cnt=%d\n", cnt);
    
    if(cnt<20)
        fun(cnt+1);
        
    printf("Cnt=%d\n",cnt);
}
int main()
{
    fun(1);

    return 0;
}
