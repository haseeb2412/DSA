#include<stdio.h>

// code for linear search 

int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}



// code for binary search 

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    
}
 


int main(){

    // unsorted array for linear search 

    // int arr[]={12,34,56,78,456,786,456,78,435,34,78,56,45};
    // int size =sizeof(arr)/sizeof(int);
    // int element =34;
    // int searchIndex =linearSearch(arr,size,element);
    // printf("the element %d was found at index %d",element,searchIndex);
    // return 0;


    //sorted array for binary search

    int arr[]={12,34,56,78,456,786,2456,9999,999999};
    int size =sizeof(arr)/sizeof(int);
    int element =2456;
    int searchIndex =linearSearch(arr,size,element);
    printf("the element %d was found at index %d",element,searchIndex);
    return 0;
}