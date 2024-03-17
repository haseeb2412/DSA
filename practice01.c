// #include<stdio.h>
// #include<stdlib.h>

// struct Node
// {
//     int data;
//     struct Node * next;
// };

// // linked list traversal function

// void linkedListTraversal(struct Node * ptr){
//     while (ptr != NULL)
//     {
//         printf("Element is :%d\n",ptr->data);
//         ptr =ptr->next;
//     }
    
// }

// // delte the first node in the linked list 
 
// struct Node * deleteFirst(struct Node * head){
//     struct Node * ptr =head;
//     head = head->next;
//     free(ptr);
//     return head;
// }

// // delete the last Node in the linked list 

// struct Node * deleteAtEnd(struct Node * head){
//     struct Node * p =head;
//     struct Node * q =head->next;

//     while (q->next != NULL)
//     {
//          p =q;
//          q = q->next;
//     }
//     p->next = NULL;
//     free(q);
//     return head;
    
// }

// //delete the node at specific index in the linked list 

// struct Node * deleteAtNode(struct Node * head,int value){
//     struct Node * p =head;
//     struct Node * q =head->next;
    
//     if(head == value){
//         head=p->next;
//         free(p);
//         return head;
//     }
    
//      while (q != NULL && q->data != value) {
//         p = p->next;
//         q = q->next;
//     }

//     // If the node with the given value is found
//     if (q != NULL) {
//         p->next = q->next;
//         free(q);
//     }
//     return head;
    
// }
// int main(){

//     // initilize node  in heap

//     struct Node * head=(struct Node *)malloc(sizeof(struct Node));
//     struct Node * second=(struct Node *)malloc(sizeof(struct Node));
//     struct Node * third=(struct Node *)malloc(sizeof(struct Node));
//     struct Node * four=(struct Node *)malloc(sizeof(struct Node));
//     struct Node * five=(struct Node *)malloc(sizeof(struct Node));

//     // connect one Node to another 
//     head->data=10;
//     head->next=second;

//     second->data=20;
//     second->next=third;

//     third->data=30;
//     third->next=four;

//     four->data=40;
//     four->next=five;

//     five->data=50;
//     five->next=NULL;


//     // -----------------CASE 01 -------------------

//     printf("-----Before-----\n");
//     linkedListTraversal(head);

//     printf("-----After-----\n");
//     head=deleteFirst(head);

//     linkedListTraversal(head);


//     // -----------------CASE 02 -------------------

//      printf("-----Before-----\n");
//     linkedListTraversal(head);

//     printf("-----After-----\n");
//     head=deleteAtEnd(head);

//     linkedListTraversal(head);

//     // -----------------CASE 03 -------------------


//        printf("-----Before-----\n");
//     linkedListTraversal(head);

//     printf("-----After-----\n");
//     head=deleteAtSpecific(head,2);

//     linkedListTraversal(head);

//     // -----------------CASE 04 -------------------
    
//     printf("-----Before-----\n");
//     linkedListTraversal(head);

//     printf("-----After-----\n");
//     head=deleteAtNode(head,2);

//     linkedListTraversal(head);

//     return 0;
// }








//  -------------------------------------------------INSERTION LINKED LIST --------------------------------------------------------


#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

// linked list traversal 

void linkedListTraversal(struct Node * ptr){
    while (ptr != NULL)
    {
        printf("Element is :%d\n",ptr->data);
        ptr = ptr->next;
    }
    
}

// insert at first in the linked list 

struct Node * insertAtFirst(struct Node * head,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;

}

// insert at the end of the linked list 

struct Node * insertAtEnd(struct Node * head,int data){
    struct Node * ptr =(struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
     ptr->data =data;
    while (p->next != NULL)
    {
        p= p->next;

    }
    p->next = ptr;
    ptr->next =NULL;
   
    return head;
    
}

//insert at specific index in the linked list 

struct Node * specificNode(struct Node * head,int data,int index){
    struct Node * p =head;
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    int i =0;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data =data;
    ptr->next =p->next;
    p->next = ptr;
    return head;
    
}


//insertion at specific index in the linked list 

struct Node * afterNode(struct Node * head,struct Node * prevNode,int data){
    struct Node * ptr =(struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next=prevNode->next;
    prevNode->next = ptr;
    return head;
}
int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * four = (struct Node *)malloc(sizeof(struct Node));
    struct Node * five = (struct Node *)malloc(sizeof(struct Node));
    struct Node * sixth = (struct Node *)malloc(sizeof(struct Node));


    // connecting Nodes in linked list 

    head->data = 10;
    head->next =second;

    second->data = 20;
    second->next =third;

    third->data = 30;
    third->next =four;

    four->data = 40;
    four->next =five;

    five->data = 50;
    five->next =sixth;

    sixth->data = 60;
    sixth->next =NULL;

    //-------------------CASE 01 ----------------------------

    // printf("Before\n");
    // linkedListTraversal(head);

    //  printf("After\n");
    // head=insertAtFirst(head,203);
    // linkedListTraversal(head);


    //-------------------- CASE 02 --------------------------

    //    printf("Before\n");
    // linkedListTraversal(head);

    //  printf("After\n");
    // head=insertAtEnd(head,203);
    // linkedListTraversal(head);


    //-------------------CASE 03 ----------------------------

    //   printf("Before\n");
    // linkedListTraversal(head);

    //  printf("After\n");
    // head=specificNode(head,20003,3);
    // linkedListTraversal(head);


    //--------------CASE 04 ---------------------------------

     printf("Before\n");
    linkedListTraversal(head);

     printf("After\n");
    head=afterNode(head,third,300);
    linkedListTraversal(head);

    return 0;
}




