#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node * next;
};


// linked list traversal code 

void linkedlistTreaversal(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("Element is %d:\n",ptr->data);
        ptr = ptr->next;
    }
    
}



int main(){
    printf("hello world");
    struct Node * head;
    struct Node * second;
    struct Node * third;

    // Allocate memory for nodes in the linked list un heap
    head =(struct Node *)malloc(sizeof(struct Node));
    second =(struct Node *)malloc(sizeof(struct Node));
    third =(struct Node *)malloc(sizeof(struct Node));

    // linked first node to second 
    head->data =7;
    head->next=second;

    // linked second  node to third 
    second->data =70;
    second->next=third;

    // last node
    third->data =723;
    third->next=NULL;

linkedlistTreaversal(head);
    return 0;
}