//Printing using printf(), scanf(), and fgets()
#include<stdio.h>

void Printf()
{
    printf("Printing name via 'printf'.\n");
}

void Scanf()
{
    char ch[20];
    printf("Enter the name in Scanf function:");
    scanf("%s",ch);//& is not required as the ch is character array and here we are storing at the location of the characterarray &ch
    printf("In Scanf() - Your name is %s ",ch);
}

void FGets()
{
    char ch1[20];
    printf("Enter the name in FGets function:");
    fgets(ch1, 20, stdin);//char *fgets(char s[restrict .size], int size, FILE *restrict stream);
    printf("In FGets()- YOur name is %s:",ch1);
}
int main()
{
    Printf();
    FGets();
    Scanf();
    
    return 0;
}
