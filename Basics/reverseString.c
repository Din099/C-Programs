//C code to reverse a string

#include <stdio.h>
#include<string.h>

void reverseString(char *str)
{
    int left = 0;
    int right = strlen(str)-1; 
    while(left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    printf("%s",str);
}

int main()
{
    //char str[] = "Hello World!";
    char str[100];
    scanf("%[^\n]c",str);//take input from user
    //printf("%s",str);
    reverseString(str);
    return 0;
}
