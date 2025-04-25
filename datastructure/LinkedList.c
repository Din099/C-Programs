//Linked list in c
#include <stdio.h>
#include <stdlib.h>
//defining structure of a node
typedef struct node{
    int data;
    struct node * next;
}Node;

int main()
{
    //1. Create a node and assign the values
    Node * first = (Node*)malloc(sizeof(Node));
    
    first->data = 10;
    
    Node * second = (Node *)malloc(sizeof(Node));
    second->data = 20;
    
    Node* third = (Node *)malloc(sizeof(Node));
    third->data = 30;
    
    //link the next nodes
    first->next = second;
    second->next = third;
    third->next = NULL;
    //printing the Linked list
    printf("Linked List :\n");
    Node* temp = first;
    while(temp)
    {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    }
    
    return 0;
}
