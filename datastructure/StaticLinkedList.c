//static linkedlist
#include <stdio.h>
struct Node{
  int value;
  struct Node* next;
};
typedef struct Node node_t;

void printlist(node_t *head){
    node_t * temporary = head;
    while(temporary != NULL){
        printf(" %d ->", temporary->value);
        temporary = temporary->next;
    }
}

int main()
{  //adding the nodes statically
    node_t n1, n2, n3;
    node_t *head;
    
    n1.value=10;
    n2.value=30;
    n3.value=60;
    //inserting a new node
    node_t n4;
    n4.value = 70;
    
    head = &n1;
    n4.next = &n3;
    n3.next = NULL;
    n2.next = &n4;
    n1.next = &n2;
    head = head->next;
    printlist(head);
    return 0;
}
