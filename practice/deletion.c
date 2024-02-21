#include<stdio.h>


// Code with deletion

void intDeletion(int arr[],int size,int index){

    for (int i = index; i < size-1; i++)
    {
        arr[i]= arr[i+1];
    }
    
}

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }

}


int main(){
    int arr[100]={7,8,12,27,33};
    int size =5,element=45,index=3;
    display(arr,size);
    intDeletion(arr,size,index);
    size-=1;
    display(arr,size);
    printf("hellow worlds");
}