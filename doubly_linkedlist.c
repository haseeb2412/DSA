#include<stdio.h>
#include<stdlib.h>

// structure of doubly linked list memory allocate in the  heap
struct Node{
    int data;
    struct Node * prev;
    struct Node * next;
};

void traversal(struct Node *head){
    struct Node * ptr = head;
    while (ptr != NULL)
    {   
        printf("Element is :%d\n",ptr->data);
        ptr =ptr->next;
    }
    
}

void goCome(struct Node * head,struct Node *four){
    struct Node * ptr = head;
    struct Node * ptro = four;
    
    while (ptr !=NULL)
    {
        printf("go :%d\n",ptr->data);
        ptr =ptr->next;
    }
    
        while (ptro !=NULL)
        {
            printf("come :%d\n",ptro->data);
            ptro = ptro->prev;
        }

    
    
    
    
}

int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * four = (struct Node *)malloc(sizeof(struct Node));

    head->prev=NULL;
    head->data=10;
    head->next=second;

    second->prev=head;
    second->data=20;
    second->next=third;

    third->prev=second;
    third->data=30;
    third->next=four;

    four->prev=third;
    four->data=40;
    four->next=NULL;

    // traversal(head);
    goCome(head,four);




    return 0;
}