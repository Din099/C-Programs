// Program to print the number pattern
#include <stdio.h>

int main() {
    // Write C code here
    int rows, num =1;
    printf("Enter the rows: \n");
    scanf("%d",&rows);
    
    //first loop to print the whitespaces
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=(rows-i); j++)
        {
            printf(" ");
        }
        num = i;
        for(int k=1; k<=i; k++)
        {
            printf("%d",num);
            ++num;
        }
        //num = i;
        num = num-2;
        for(int k=1;k<i;k++)
        {
            printf("%d",num);
            num--;
        }
       
        printf("\n");
    }   
        //second loop to print the numbers
    // for(int i=1; i<=rows; i++)
    // {
        
    //     printf("\n");
    // }

    //printf("%d",i);
    
    return 0;
}
