//Inverted Half pyramid of numbers
#include <stdio.h>

int main() {
    // Write C code here

    for(int i=5; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
