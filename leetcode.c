#include<stdio.h>
#include<math.h>


// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.


int main(){
    printf("heelo haseeb world\n");
    int  head[] = {1,2,3,4,5,6};
   
    int array_length = sizeof(head) / sizeof(head[0]);
    float print = ceil(array_length/2);
    printf("length is %d\n",array_length);
    printf("length is %f\n",print);
    for (int i = print; i < array_length; i++)
    {
        printf("Element is %d\n",head[i]);
    }
    
    
   
    


}