#include<stdio.h>
#include<stdlib.h>


// push () if stack is full we cant add another element in the top of the stack 
// pop ()  if there is not elemnt in the stack we cant pop it out

// (   ->  )  this operation first do de-refrence and also add dot 

struct stack
{
    int size;
    int top; 
    int * arr;
    
};


// check the stack is empty function


int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
       
        return 1; 
    }else{
        return 0;
    }
}

// check the stack is full function


int isFull(struct stack * ptr){
    if(ptr->size == ptr->size-1){
        return 1; 
    }else{
        return 0;
    }
}

int main(){


    // struct stack s;
    // s.size = 80;
    // int top =-1;
    // s.arr=(int *)malloc(s.size * sizeof(int));

//  method 02 

 
     struct stack *s = malloc(sizeof(struct stack));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    // if (s->arr == NULL) {
    //     printf("Memory allocation failed for s->arr.\n");
    //     free(s);
    //     return 1;
    // }
    // check the stack is empty


    // pushing elements in the stack

    s->arr[0]=90;     // manually push the element but its the bad practice 
    s->top++;

   if (isEmpty(s)) {
    printf("Stack is empty.\n");
} else {
    printf("Stack is not empty.\n");
}


    
    printf("hellow haseeb world");
    return 0;
}