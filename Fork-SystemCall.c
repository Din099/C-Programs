//Program to demonstrate fork() function- creating a process - called as child process
#include <stdio.h>

int main()
{
    printf("Hello World printing before fork()\n");
    fork();
    printf("Hello world after fork(). \n");
    return 0;
}
