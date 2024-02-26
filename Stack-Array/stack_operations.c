#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int * arr;
};


int isFull(struct stack * ptr){
    if (ptr->top = ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int isEmpty(struct stack * ptr){
     if (ptr->top = -1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

int main(){

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));     // s pointer
    sp->size =10;
    sp->top =-1;
    sp->arr =(int * )malloc(sp->size * sizeof(int));

    printf("stack has been created successfully\n ");

printf("%d\n",isFull(sp));
printf("%d\n",isEmpty(sp));



}