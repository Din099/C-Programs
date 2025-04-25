// Online C compiler to run C program online
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
        for(int j = 1; j < 2 * (rows - i); j++)
        {
            printf(" ");
        }
        
        //inner loop 2 to print the numbers
        for(int k = 1; k < 2*i; k++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}
