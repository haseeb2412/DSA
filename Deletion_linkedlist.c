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

    printf("before\n");
    Traversal(head);

    printf("After\n");
    head = deleteAtFirst(head);
    Traversal(head);



    return 0;


}