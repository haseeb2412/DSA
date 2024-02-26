#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int * arr;
};

// check the stakc is full or not 


int isFull(struct stack * ptr){
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

// check the stakc is empty or not 

int isEmpty(struct stack * ptr){
     if (ptr->top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}



//  push the element in the stack 

void push(struct stack * ptr,int val){
        if (isFull(ptr))
        {
            printf("stack overflow");
        }else{
            ptr->top++;
            ptr->arr[ptr->top]=val;
        }
        
}




//  pop the element in the stack



int pop(struct stack * ptr){
        if (isEmpty(ptr))
        {
            printf("under underflow");
            return -1;
        }else{
            int val = ptr->arr[ptr->top];
            ptr->top--;
            return val;
        }
        
}


int peak(struct stack * sp,int i){
    int arrayInd = sp->top-i+1;
    if(arrayInd < 0){
        printf("not a valid positionfor the stack");
        return -1;
    }else{
        return sp->arr[arrayInd]; 
    }
}


int stackTop(struct stack * sp){
    return sp->arr[sp->top];
}
int stackBottom(struct stack * sp){
    return sp->arr[0];
}



int main(){

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));     // s pointer
    sp->size =10;
    sp->top =-1;
    sp->arr =(int * )malloc(sp->size * sizeof(int));

    printf("stack has been created successfully\n ");

// printf(" before %d\n",isFull(sp));
// printf(" before %d\n",isEmpty(sp));

push(sp,10);
push(sp,20);
push(sp,30);
push(sp,40);
push(sp,50);
push(sp,60);
push(sp,70);
push(sp,80);
push(sp,90);
push(sp,1000);  // react the arrray limit 
// push(sp,45);  // stack overflow 

// printf(" after %d\n",isFull(sp));
// printf(" after %d\n",isEmpty(sp));


// printf("pop the element fron the stack %d",pop(sp));


// reading all element through the peak function

for (int j = 0; j < sp->top; j++)
{
    printf("the value at position %d is %d\n",j,peak(sp,j));
}


printf("the topmost element of this stack is %d\n",stackTop(sp));
printf("the bottom element of this stack is %d\n",stackBottom(sp));



} 