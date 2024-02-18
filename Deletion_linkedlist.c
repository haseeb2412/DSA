#include<stdio.h>
#include<stdlib.h>


//linked list structure 

struct Node
{
    int data;
    struct Node * next;
};


// linked list traversal

void Traversal(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("Element is %d:\n ",ptr->data);
        ptr = ptr->next;

    }
    
}

// delet the first node of linked list in the heap

struct Node * deleteAtEnd(struct Node * head){
    struct Node * p = head;
    struct Node * q = head->next;
    while (q->next != NULL)
    {
        p=q;
        q =q->next;
    }
    p->next = NULL;
    free(q);
    return head;
    
}


//   delete the node at the specific index in the linked  list 

struct Node * deleteAtIndex(struct Node * head,int index){
    struct Node * p = head;
    
    int i =0;
    while (i != index-1)
    {
        p=p->next;
        i++;
    }
    struct Node * q = p->next;
    p->next = q->next;
    free(q);
    return head;
    
   
    
    return head;
    
}

// delete the element with a given value in the linked list 

struct Node *deleteNode(struct Node *head, int value) {
    struct Node *p = head;
    struct Node *q = head->next;

    // If the head node contains the value to be deleted
    if (p->data == value) {
        head = p->next;
        free(p);
        return head;
    }

    // Traverse the linked list to find the node to delete
    while (q != NULL && q->data != value) {
        p = p->next;
        q = q->next;
    }

    // If the node with the given value is found
    if (q != NULL) {
        p->next = q->next;
        free(q);
    }

    return head;
}

// delete the first node in the linked list 

struct Node * deleteAtFirst(struct Node * head){
    struct Node * p = head;
    head =  head->next;
    free(p);
    return head;
}

int main(){

    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fivth;


    // allocate memory of linked list in the heap

    head =(struct Node *)malloc(sizeof(struct Node));
    second =(struct Node *)malloc(sizeof(struct Node));
    third =(struct Node *)malloc(sizeof(struct Node));
    fourth =(struct Node *)malloc(sizeof(struct Node));
    fivth =(struct Node *)malloc(sizeof(struct Node));

    // connect linkedlist nodes to one another 

    head->data =10;
    head->next =second;

     second->data =20;
    second->next =third;

     third->data =30;
    third->next =fourth;

     fourth->data =40;
    fourth->next =fivth;

     fivth->data =50;
    fivth->next =NULL;


    //case 01

    // printf("before\n");
    // Traversal(head);

    // printf("After\n");
    // head = deleteAtFirst(head);
    // Traversal(head);


    // case 02

    // printf("before\n");
    // Traversal(head);

    // printf("After\n");
    // head = deleteAtEnd(head);
    // Traversal(head);


    // case03

    // printf("before\n");
    // Traversal(head);

    // printf("After\n");
    // head = deleteAtIndex(head,2);
    // Traversal(head);

    // case 04

      printf("before\n");
    Traversal(head);

    printf("After\n");
    head = deleteNode(head,1);
    Traversal(head);

    return 0;


}