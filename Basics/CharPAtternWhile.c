#include <stdio.h>

int main() {
    // Write C code here
    int rows, column; char ch;
    printf("Enter the rows: \n");
    scanf("%d",&rows);
    ch = 'A';
    
    while(rows)
    {
        column = rows;
        while(column)
        {
            printf("%c",ch);
            ch++;
            column--;
        }
        rows--;
        printf("\n");
    }
    
    return 0;
}
