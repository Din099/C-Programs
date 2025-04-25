//Function pointer in place of selection without branching
#include<stdio.h>
int sum(int x, int y)
{
    return x+y;
}
int sub(int x, int y)
{
    return x-y;
}
int mul(int x, int y)
{
    return x*y;
}
int div(int x, int y)
{
    return x/y;
}

int main()
{
    int choice;
    //int (*FUNCPTR)(int, int);//FUNCPTR is a 8 byte pointer variable
    typedef int (*FPTR)(int,int);//FPTR is a new datatype
    FPTR arr[4]={sum,sub,mul,div};
    printf("1:sum 2:sub 3:mul 4:div\n");
    scanf("%d",&choice);
    if((choice < 1) || (choice >4))
    {
        printf("Invalid choice\n");
        return 0;
    }
    
    printf("result = %d\n", (*arr[choice-1])(5,2));
    return 0;
    
}
