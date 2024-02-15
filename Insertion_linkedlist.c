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


// inserton  node at the beginning of the linked list 

struct Node * insertAtFirst(struct Node *head,int data){
    struct Node *ptr =(struct Node*)malloc(sizeof(struct Node));
    ptr->next =head;
    ptr->data=data;
    return ptr;
}


// inserton  node at the end of the linked list 

struct Node * insertAtEnd(struct Node *head,int data){
    struct Node *ptr =(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p =head;
    while (p->next!=NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    
    return head;
}


//insertion node after the node 
struct Node * insertAfterNode(struct Node *head,struct Node *prevNode,int data){
    struct Node *ptr =(struct Node*)malloc(sizeof(struct Node));     // new node
    ptr->data=data;
  
    ptr->next = prevNode->next;
    prevNode->next = ptr;
   
    return head;
}



// insertion of node at soecific index in the linked list 

struct Node * specificNode(struct Node *head,int data,int index){
    struct Node *ptr =(struct Node*)malloc(sizeof(struct Node));
    struct Node * p =head;
    int i =0; 
    
    while ( i != index-1)
    {
        p =p->next;
        i++;

    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
    
}


int main(){
    printf("hello world");
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    // Allocate memory for nodes in the linked list un heap
    head =(struct Node *)malloc(sizeof(struct Node));
    second =(struct Node *)malloc(sizeof(struct Node));
    third =(struct Node *)malloc(sizeof(struct Node));
    fourth =(struct Node *)malloc(sizeof(struct Node));

    // linked first node to second 
    head->data =7;
    head->next=second;

    // linked second  node to third 
    second->data =70;
    second->next=third;

    // third node connected to the fourth node 
    third->data =723;
    third->next=fourth;

    // last node
    fourth->data =7230;
    fourth->next=NULL;



    // CASE 01

// linkedlistTreaversal(head);

// head=insertAtFirst(head,23);
// linkedlistTreaversal(head); 

// CASE 02

// linkedlistTreaversal(head);

// head=specificNode(head,23,1);
// linkedlistTreaversal(head); 


// CASE 03
// printf("before\n");
// linkedlistTreaversal(head);

// printf("\n after \n");

// head=insertAtEnd(head,50);
// linkedlistTreaversal(head); 


// CASE 04
printf("before\n");
linkedlistTreaversal(head);

printf("\n after \n");

head=insertAfterNode(head,second,50);
linkedlistTreaversal(head); 
    return 0;
}