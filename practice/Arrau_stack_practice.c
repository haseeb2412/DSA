#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return -1;
    }else{
        return  0;
    }
}

int isFull(struct stack * ptr){
    if(ptr->top == ptr->size-1){
        return -1;
    }else{
        return  0;
    }
}




int main(){
    printf("hello world\n");

    struct stack *s=malloc(sizeof(struct stack));  
    if (s ==NULL)
    {
        printf("memory allocation failed \n");
    }
    
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));





    s->arr[0]=90;     // manually push the element but its the bad practice 
    s->top++;



    if (isEmpty(s))
    {
        printf("stack is empty\n");
    }else{
        printf("stack is not empty\n");

    }
    





    return 0;
}