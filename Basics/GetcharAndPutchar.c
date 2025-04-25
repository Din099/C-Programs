//getchar()and putchar()
#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter the character: ");
    ch = getchar();
    printf("The entered character is : ");
    putchar(ch);
    return 0;
}
