#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node * next;
};


// traversal in linked list 

void traversal(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("the element is %d:\n ",ptr->data);
        ptr = ptr->next ;
    }
    
}

//insert at beaginning in the linked list 

struct Node * insertAtFirst(struct Node * head,int data){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next =head;
    return ptr;

    }


// inser at the end of the node in linked list 


struct Node * insertAtEnd(struct Node * head,int data){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node * p=head;
    ptr->data = data;

    while (p->next !=NULL)
    {
        p =p->next;
    }
    p->next=ptr;
    ptr->next =NULL;
    return head;
    


    
    ptr->next =head;
    return ptr;

    }


// insertion after the node in the linked list 

struct Node * AfterNode(struct Node * head,struct Node *prevNode,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next =prevNode->next;
    prevNode->next = ptr;
    return head;

}

//insertion at specifuc index in the linked list 

struct Node * AtSpecific(struct Node*head,int data,int index){
    struct Node * ptr =(struct Node *)malloc(sizeof(struct Node));
    struct Node * p=head;
    int i=0;

    while (i !=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next =ptr;
    return head;
    
}


int main (){
    //  define each node and also allocate memory in the heap

    // struct Node * head;
    // struct Node * second;
    // struct Node * third;
    // struct Node * fourth;

    // // Allocate memory for nodes in the linked list un heap
    // head =(struct Node *)malloc(sizeof(struct Node));
    // second =(struct Node *)malloc(sizeof(struct Node));
    // third =(struct Node *)malloc(sizeof(struct Node));
    // fourth =(struct Node *)malloc(sizeof(struct Node));


      struct Node * head=(struct Node *)malloc(sizeof(struct Node));;
    struct Node * second=(struct Node *)malloc(sizeof(struct Node));;
    struct Node * third=(struct Node *)malloc(sizeof(struct Node));;
    struct Node * fourth=(struct Node *)malloc(sizeof(struct Node));;

    // Allocate memory for nodes in the linked list un heap
    // head =(struct Node *)malloc(sizeof(struct Node));
    // second =(struct Node *)malloc(sizeof(struct Node));
    // third =(struct Node *)malloc(sizeof(struct Node));
    // fourth =(struct Node *)malloc(sizeof(struct Node));



    // connect nodes to eeach other and give them the random integer value 

    head->data=7;
    head->next=second;

    second->data=70;
    second->next=third;

    third->data=700;
    third->next=fourth;

    fourth->data=7000;
    fourth->next=NULL;


    //case 01

    // printf("before\n");
    // traversal(head);
    // head =insertAtFirst(head,400);

    // printf("after\n");
    // traversal(head);



//case 02

    // printf("before\n");
    // traversal(head);
    // head =insertAtEnd(head,400);

    // printf("after\n");
    // traversal(head);


//case 03

    // printf("before\n");
    // traversal(head);
    // head =AfterNode(head,second,4000);

    // printf("after\n");
    // traversal(head);

    //case 04

    printf("before\n");
    traversal(head);
    head =AtSpecific(head,1234,3);

    printf("after\n");
    traversal(head);
    return 0;

}

