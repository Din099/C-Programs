//Printing name using fgets()
#include<stdio.h>
int main()
{
    char ch[20];
    printf("Enter the name:\n");
    fgets(ch, 20, stdin);//fgets
    printf("Name is: %s\n",ch);
    return 0;
}
//fgets() - reads from the stream and stores into a buffer pointed by ch. Reading stops at EOF or newline
//return value - returns ch on success and NULL on error or end of file occurs while no characters have been read
