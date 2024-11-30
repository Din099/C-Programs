//User defined printf function using variable argument function
#include<stdio.h>
#include<stdarg.h>

void itoa(int n)
{
    int i = 0;
    char arr[10];
    while(n)
    {
        arr[i++] = n%10 + 48;
        n/=10;
    }
    while(i--)
        putchar(arr[i]);
}

int myPrintf(const char *p, ...)
{
    int i,n;
    char j;
    va_list handle;
    va_start(handle, p);
    for(i=0; p[i]; i++)
    {
        if(p[i]=='%')
        {
            i++;
            if(p[i]=='d')
            {
                n = va_arg(handle, int);
                itoa(n);
            }
            if(p[i]=='c')
            {
                j = va_arg(handle,int);
                putchar(j);
            }
            if(p[i]=='f')
            {
                double d;
                d = va_arg(handle, double);
                n = (int)d;
                itoa(n);
                putchar('.');
                d=d-n;
                d*=1000000;
                n=d;
                itoa(n);
            }
        }
        else
            putchar(p[i]);
        
    }
    va_end(handle);
    return 0;
}

int main()
{
    int x = 0x15;
    float f = 18.72;
    char c = 'D';
    myPrintf("myPrintf x=%d, c=%c, f=%f\n",x,c,f);
    return 0;
}
