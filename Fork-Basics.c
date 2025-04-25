/* A basic c program to understand the use of fork() system-call*/

/* 1. The program till statement c=a+b; before fork(), runs in user mode and
then once the control is at line of fork(), the process runs in in kernel mode. 

2. fork() is a system call, which creates new process, called as child process.

3. In child process, child process starts running after the fork() line.

4. fork() function returns an integer value called as Id or PID.
    if fork() returns zero, it means you're in a child process.
    if fork() returns non-zero positive value, it means you're in parent process.
    if fork() returns negative numbers, then you've some errors that occured.

5. Id in parent is different from id in child process.*/

#include<stdio.h>
#include<unistd.h>//library used for fork() system call
int main()
{
    int a, b, c;
    a=2, b=5;
    c = a+b;
    fork();//runs in kernel mode
    printf("Hi\n");
    return 0;
}
