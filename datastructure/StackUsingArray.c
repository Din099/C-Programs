//Stack implementation using array

#include<stdio.h>
#define N 5
int stack[N];
int top = -1;
//to push the item into stack
void push(int x)
{
    if(top == N-1)
    {
        printf("overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
//to pop item out of stack
void pop()
{
    int temp;
    if(top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        temp = stack[top];
        top--;
    }
    printf("The popped item is %d\n", temp);
}
//to check the item in the stack
void peek()
{
    if(top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack element is %d", stack[top]);
    }
}
//to display the stack items
void display()
{
    int i;
    for (i=top; i>=0; i--)
    {
        printf("The element is %d\n", stack[i]);
    }
}

int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    push(num);
    display();
    push(10);
    display();
    pop();
    peek();
    return 0;
}
