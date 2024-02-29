#include<stdio.h>
#include<stdlib.h>


//  making a structure of my array  in the stack

struct stack
{
    int size;
    int top;
    int * arr;
};

//  check the stack is empty of not 

int isEmpty(struct stack * ptr){
    if (ptr->top == -1)
    {
        return -1;
    }
    else{
        return 0;
    }
    
}

// check the stack is full or not 

int isFull(struct stack * ptr){
    if (ptr->top == ptr->size-1)
    {
        return -1;
    }
    else{
        return 0;
    }
    
}



int main(){

    struct stack *s =malloc(sizeof(struct stack));
    s->top=-1;
    s->size =10;
    s->arr = (int *)malloc(s->size*sizeof(int));

    s->arr[0]=90;
    s->top++;


    // checking the stack is empty or full 

    if (isEmpty(s))
    {
        printf("stack is empty\n");
    }else{
        printf("stack is not empty\n");
    }
    


    printf("hello world");
    return 0;
}