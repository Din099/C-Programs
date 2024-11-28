//Print string function using variable argument list 
#include<stdio.h>
#include<stdarg.h>
void printStr(char*,...);
int main()
{
    char *p = "Git";
    char str[10] ="Hub";
    printStr("Welcome ", "to ", p,str,NULL);
    //printStr(p,str,NULL);
    return 0;
}
void printStr(char* ptr,...)
{
    va_list handle;
    puts(ptr);//ptr recieves the first actual argument
    va_start(handle, ptr);
    while(ptr = va_arg(handle, char*))
    {
        printf("%s", ptr);
        //puts(ptr);
    }
    va_end(handle);
}
