// C program to print continuous character pattern by converting number in to character

#include <stdio.h>

int main() {
    // Write C code here
    int rows, ch;
    printf("Enter the rows: \n");
    scanf("%d",&rows);
    ch = 65;
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i;j++)
        {
            if(ch < 91)
            {
                printf("%c ",ch);
                ch++;
            }
            else
                break;
        }
        printf("\n");
    }
    
    return 0;
}
