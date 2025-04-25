//Diamond pyramid of *
#include <stdio.h>

int main() {
    // Write C code here
    int rows;
    printf("Enter the rows: \n");
    scanf("%d",&rows);
    
    //first loop to print the rows
    for(int i = 1; i <= rows; i++)
    {
        //to print the white spaces/blank spaces
        for(int j = i; j < rows; j++)
        {
            printf(" ");
        }
        
        //inner loop 2 to print the numbers
        for(int k = 1; k <= 2*i - 1; k++)
        {
            //if(k== 2*i-1 || k==1 || i==rows)
            printf("*");
            // else
            //     printf(" ");
        }
        printf("\n");
    }
    
    //Second loop to print inverse pyramid with one less row
    for(int i = rows-1; i>=1 ; i--)
    {
        //to print the white spaces/blank spaces
        for(int j = rows; j >i; j--)
        {
            printf(" ");
        }
        
        //inner loop 2 to print the numbers
        for(int k = 2*i - 1; k >=1 ; k--)        
        {
            //if(k== 2*i-1 || k==1 || i==rows)
            printf("*");
            // else
            //     printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
