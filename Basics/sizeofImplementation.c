//implementation of sizeof
#include <stdio.h>

int main()
{
    int a = 10;

    int* b = &a;
    int* c = &a + 1;
    
    printf("Addresses b=%lld, &a+1=%lld; \nSizeof int is %lld\n", b, c, ((char*)c - (char *)b));

    return 0;
}
