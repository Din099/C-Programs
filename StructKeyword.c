//Program to demonstrate struct keyword
#include <stdio.h>
#include<string.h>
struct phonebook{
    char name[20];
    unsigned int phonenumber;
};

int main(void)
{
    struct phonebook contact;
    strcpy(contact.name,"Shiv");
    contact.phonenumber = 1234567890;
    printf("The name is %s and the number is %d",contact.name, contact.phonenumber);
    return 0;
}
