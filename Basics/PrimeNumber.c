//Prime number program
#include <stdio.h>
int Prime(int num)
{

//Eliminating the boundary condition for number less than zero
  if(num > 0){
        int count = 0;
        //removing boundary condition
        if(num == 1)
        {
            printf("%d is neither prime nor composite number.\n",num);
            return 1;
        }
        for(int i = 2; i<(num-1);i++)
        {
            if((num % i)==0)
            {
                count+=1;
            }
        }
        if(count > 0)
        {
            printf("%d is NOT a PRIME Number\n",num);
        }
        else
            printf("%d is a PRIME Number\n",num);

    }
    else
        printf("Please enter a natural number\n");
}
int main() {
    // Write C code here
    int num = 0;
    printf("Enter the number: \n");
    scanf("%i",&num);
    Prime(num);
    
    return 0;
}
