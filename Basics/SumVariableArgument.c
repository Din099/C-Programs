// Online C compiler to run C program online
//Sum function with variable argument list
#include <stdio.h>
#include<stdarg.h>
int sum(int, ...);
int main() {
    // Write C code here
    int a=11, b=22, c=33;
    printf("%d\n",sum(3,a,b,c));
    printf("%d\n",sum(2,a,25));

    return 0;
}
int sum(int cnt,...)
{
    int result = 0;
    va_list handle;//typedef for variable argument list
    va_start(handle, cnt);
    while(cnt--)
    {
        result += va_arg(handle, int);
    }
    va_end(handle);//freeing the resources, memory hold by handle
    return result;
}
