#include<stdio.h>
#include<stdlib.h>


struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack * ptr){
    if (ptr->top == -1)
    {
        return -1;
    }else{
        return 0;
    }
    
}



//  push the element in the stack 

void push(struct stack * ptr,char val){
        if (isFull(ptr))
        {
            printf("stack overflow");
        }else{
            ptr->top++;
            ptr->arr[ptr->top]=val;
        }
        
}




//  pop the element in the stack

char pop(struct stack * ptr){
        if (isEmpty(ptr))
        {
            printf("under underflow");
            return -1;
        }else{
            char val = ptr->arr[ptr->top];
            ptr->top--;
            return val;
        }
        
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int parenthesisMatch(char * exp){
    struct stack *sp;
    sp->size =100;
     sp->top =-1;
    sp->arr = (char *)malloc(sp->size*sizeof(char));

    for (int i = 0; i < exp[i]== '\0'; i++)
    {
        if (exp[i]=='(')
        {
            push(sp,'(');
            
        }else if(exp[i]==')'){
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
            
        }
        
    }

    if (isEmpty(sp))
    {
        return 1;
    }else{
        return 0;
    }
    
}


int main(){
    // struct stack *s = malloc(sizeof(struct stack));
    // s->size=10;
    // s->top =-1;
    // s->arr = (char *)malloc(s->size*sizeof(char));
    // printf("parenthesis Using stavk");
    // return 0;


    char * exp = "8*(9)";
    if (parenthesisMatch(exp))
    {
        printf("parenthesis is matched \n");
    }
    else{
        printf("parenthesis is not matched \n");

    }
    
}
