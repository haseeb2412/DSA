#include<stdio.h>
#include<stdlib.h>



// --------------------------------------------------------- stack  using array --------------------------------------------------------------------------

//  making a structure of my array  in the stack

// struct stack
// {
//     int size;
//     int top;
//     int * arr;
// };

// //  check the stack is empty of not 

// int isEmpty(struct stack * ptr){
//     if (ptr->top == -1)
//     {
//         return -1;
//     }
//     else{
//         return 0;
//     }
    
// }

// // check the stack is full or not 

// int isFull(struct stack * ptr){
//     if (ptr->top == ptr->size-1)
//     {
//         return -1;
//     }
//     else{
//         return 0;
//     }
    
// }


// // push the elemtn in the array in stack 

// void push(struct stack * ptr,int val){
//     if(isFull(ptr)){
//         printf("stack is full\n");
//     }else{
//         ptr->top++;
//         ptr->arr[ptr->top] = val;
//     }
// }

// // pop the element inthe array in stack 

// void pop(struct stack * ptr){
//     if(isEmpty(ptr)){
//         printf("stack is empty in function\n");
//     }else{
//         int val = ptr->arr[ptr->top];
//         ptr->top--;
//     }
// }



// int main(){

//     struct stack *s =malloc(sizeof(struct stack));
//     s->top=-1;
//     s->size =10;
//     s->arr = (int *)malloc(s->size*sizeof(int));

//     // s->arr[0]=90;
//     // s->top++;

//     push(s,34);
//     // pop(s);
//     pop(s);


//     // checking the stack is empty or full 

//     if (isEmpty(s))
//     {
//         printf("stack is empty\n");
//     }else{
//         printf("stack is not empty\n");
//     }
    


//     printf("hello world");
//     return 0;
// }








// --------------------------------------------------------- stack  using linked list --------------------------------------------------------------------------


struct Node
{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node * ptr){
    while (ptr!= NULL)
    {
        printf("Element is: %d\n",ptr->data);
        ptr = ptr->next;
    }
    
}
 
 // check my linked list is empty or not 

 int isEmpty(struct Node * ptr){
    if (ptr==NULL)
    {
        return 1;
    }else{
        return 0;
    }
    
 }

 // check my linked list is full or  not 

 int isFull(struct Node * ptr){
    struct Node * p = (struct Node *)malloc(sizeof(struct Node));
    if (p==NULL)
    {
        return 1;
    }else{
        return 0;
    }
    
 }

int main(){
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * four = (struct Node *)malloc(sizeof(struct Node));

    head->data =10;
    head->next =second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next =four;
    four->data =40;
    four->next =NULL;

    


    linkedListTraversal(head);

if (isFull(head))
    {
        printf("array is full\n");
    }else{
        printf("array is not full\n");

    }
    
    return 0;
}