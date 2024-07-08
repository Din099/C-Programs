//Program to demonstrate enum
#include <stdio.h>

//enum declaration
enum week{Mon, Tue, Wed, Thu, Fri, Sat, Sun};
int main(void)
{
    //Object of enum week
    enum week day;
    day = Sun;
    printf("%d",day);
    return 0;
}
