/* A basic c program to understand the concept of PID, child process and parent process*/

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
    int id;
    id = fork();
    
    if(id == 0)
    {
        printf("Printing inside child process, with PID %d\n", id);
    }
    else if(id > 0)
    {
        printf("Printing inside parent process, with PID %d\n", id);
    }
    else
    {
        perror("Unable to fork\n");
    }
    return 0;
}
