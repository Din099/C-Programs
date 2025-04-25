//a C program to print name using scanf()
#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter the name:\n");
    scanf("%s",name);//scanf("%c",&name);
    printf("Name is: %s\n",name);
}
