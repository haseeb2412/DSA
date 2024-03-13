#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

// here i write the code of traversal of linked list 

void linkedListtraversal(struct Node * ptr){
    while (ptr !=NULL)
    {
        printf("element is : %d\n",ptr->data);
        ptr = ptr->next;
    }
    
    
}


// delete the first Node in the linked list 
 struct Node * deleteFirst(struct Node * head){
    struct Node * ptr =head;
    head = head->next;
    free(ptr);
    return head;

 }

// delete the last Node in the linked list 

struct Node * deleteEnd(struct Node * head){
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

// delete at specifice index 

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

int main(){

    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * four = (struct Node *)malloc(sizeof(struct Node));


    head->data = 10;
    head->next = second;

    second->data = 120;
    second->next = third;

    third->data = 130;
    third->next = four;

    four->data = 140;
    four->next = NULL;


    // ---------------  CASE 01 -----------------

    //  printf("-------- before  ---------\n");
    // linkedListtraversal(head);
   

    // head = deleteFirst(head);
    // printf("------ after -----------\n");

    // linkedListtraversal(head);



    //----------------------- CASE 02 --------------


    //  printf("-------- before  ---------\n");
    // linkedListtraversal(head);
   

    // head = deleteEnd(head);
    // printf("------ after -----------\n");

    // linkedListtraversal(head);


    //------------------- CASE 03 --------------

   

          printf("-------- before  ---------\n");
    linkedListtraversal(head);
   

    head = deleteAtIndex(head,2);
    printf("------ after -----------\n");

    linkedListtraversal(head);



    return 0;
}