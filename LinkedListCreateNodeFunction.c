//Linked list using a function 
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node * next;
}Node;

//creates new node and returns the pointer to it
Node *createNode(int data)
{
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    
    return newNode;
}

int main()
{
    //1. Create a node and assign the values
    Node* first = createNode(15);
    first->next = createNode(30);
    first->next->next = createNode(45);
    
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
