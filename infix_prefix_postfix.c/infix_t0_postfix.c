#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct stack
{
    int size;
    int top;
    char *arr;
};

int stackTop(struct stack *sp){
    return sp->arr[sp->top];
}
 
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
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
 
void push(struct stack* ptr, char val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %c to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}


//  code to convert infix to postfix operation 


// initialize the precendence 

int precedence(char ch){
    if (ch == '*' || ch =='/')
        return 3;
    else if (ch == '+' || ch =='-')
        return 2;
    else
        return 0;
}

//  check the operator 

int isOperator(char ch){
    if(ch == '*' || ch =='/' || ch =='-'  || ch =='+')
        return 1;
    else    
        return 0;
}

//  function to convert the infix operation to postfix opearation

char * infixToPostfix(char *infix){
        struct stack * sp =(struct stack*)malloc(sizeof(struct stack));
        sp->size =10;  //random nuumber
        sp->top =-1;   // stack is empty 
        sp->arr = (char *) malloc(sp->size * sizeof(char));
        char * postfix = (char *) malloc((strlen(infix)+1) * sizeof(char));
        int i =0;  // track infix traversal
        int j =0;   // track postfix addition

        while (infix[i] != '\0')
        {
            if (!isOperator(infix[i]))
            {
                postfix[j] = infix[i];
                j++;
                i++;
            }
            else{
                if (precedence(infix[i])> precedence(stackTop(sp)))
                {
                    push(sp,infix[i]);
                    i++;
                }
                else{
                    postfix[j]=pop(sp);
                    j++;
                }
                
            }
            
        }

        while (!isEmpty(sp))
        {
            postfix[j]=pop(sp);
            j++;
        }
        postfix[j]='\0';
        return postfix;
        
        

}
 





int main()
{
    char * infix = "x-y/z-k*d";
    printf("postfix is %s\n", infixToPostfix(infix));
    return 0;
}