//Program to demonstrate the do while loop
#include <stdio.h>
int main(void)
{
    int i=0;
    //do while loop executes the code inside for once and then checks for the condition in while()
    do{
        printf("i = %d\n",i);
        i++;
        printf("i = %d\n",i);
    }while(i<3);
    //printf("i = %d\n",i);
    return 0;
}
