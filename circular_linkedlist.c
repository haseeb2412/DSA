#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node * next;
};


// linked list traversal code  ( circular linked list )  

void linkedlistTreaversal(struct Node *head){
    struct Node * ptr = head;
    
    do{
        printf("Element is :%d\n",ptr->data);
        ptr = ptr->next;

    }while (ptr != head);
    

    
    
}


//circular linked list insert at first index 

// struct Node * atFirst(struct Node * head ,int data){
//     struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr ->data = data;
    
//      struct Node * p =head->next;
//      while (p->next != head)
//      {
//         p = p->next;
//      }
//      p->next =ptr;
//      p->next=head;
//      head=ptr;
//      return head;
// }

struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 
}
int main(){

    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * four;

    // Allocate memory for nodes in the linked list un heap
    head =(struct Node *)malloc(sizeof(struct Node));
    second =(struct Node *)malloc(sizeof(struct Node));
    third =(struct Node *)malloc(sizeof(struct Node));
    four =(struct Node *)malloc(sizeof(struct Node));

    // linked first node to second 
    head->data =7;
    head->next=second;

    // linked second  node to third 
    second->data =70;
    second->next=third;

    // last node
    third->data =723;
    third->next=four;

     four->data =7230;
    four->next=head;

linkedlistTreaversal(head);
head = insertAtFirst(head,200);
printf("after\n");
linkedlistTreaversal(head);
    return 0;
}