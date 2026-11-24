// identify if system is little endian or big endian

#include <stdio.h>

int main()
{
    unsigned int i = 1; 
    char *ch = (char *)&i;
    
    char a = *ch;
    
    if(a == 1)
    {
        printf("Little endian");
    }
    else
    {
        printf("Big endian");
    }
    return 0;
}
