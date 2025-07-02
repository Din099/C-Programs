#include <stdio.h>

int main()
{
    char c1 = 0xA;
    char c2;
    
    for(int i=7; i>=0; i--){
        c2 = c1>>i;//shifting bits to rightmost (LSB) position.
        printf("%d", c2 & 1); // getting the status of that particular bit- either one or zero
    }
    
    return 0;
}
