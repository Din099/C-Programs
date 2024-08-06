// Code to print pyramid of numbers in 180 degrees
#include <stdio.h>

int main() {
    // Write C code here
    int rows;
    printf("Enter the rows: \n");
    scanf("%d",&rows);
    
    //first loop to print the rows
    for(int i=1; i<=rows; i++)
    {
        //inner loop 1 to print the first half of the 180 pyramid
        for(int j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    //second loop for inverse pyramid
    for(int i=rows-1; i>=1; i--)
    {
        //Inner loop  to print the second half of the 180 pyramid
        for(int k=1; k<=i; k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
        
    return 0;
}
