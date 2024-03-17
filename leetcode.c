#include<stdio.h>
#include<math.h>


// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.






#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node * next;
};


// linked list traversal code 

void linkedlistTreaversal(struct Node *ptr){
    int i =0;
    while (ptr != NULL)
    {
        printf("Element is %d----%d:\n",i,ptr->data);
        ptr = ptr->next;
        i++;
    }
}

struct Node * middleNode(struct Node *head){
    // struct Node * ptr =head;
    // int i =0;
    // while (ptr !=NULL)
    // {   
    //     ptr =ptr->next;
    //     i++;
    // }

    // int print= ceil(i/2);

    // for (int j = print; j < i; j++)
    // {
    //     printf("element is %d",ptr->data);
    //     ptr =ptr->next;
    // }

     struct Node* slow = head;
    struct Node* fast = head;

    // Move fast pointer by two nodes and slow pointer by one node
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Print the middle element
    // printf("Middle element is: %d\n", slow->data);

    // Print elements onwards from the middle
    // printf("Elements onwards from the middle: ");
    struct Node* current = slow;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    // printf("\n");
    
    
}

int main(){

    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * four;
    struct Node * five;
    // struct Node * six;

    // Allocate memory for nodes in the linked list un heap
    head =(struct Node *)malloc(sizeof(struct Node));
    second =(struct Node *)malloc(sizeof(struct Node));
    third =(struct Node *)malloc(sizeof(struct Node));
    four =(struct Node *)malloc(sizeof(struct Node));
    five =(struct Node *)malloc(sizeof(struct Node));
    // six =(struct Node *)malloc(sizeof(struct Node));

    // linked first node to second 
    head->data =10;
    head->next=second;

    // linked second  node to third 
    second->data =20;
    second->next=third;

    // last node
    third->data =30;
    third->next=four;

     four->data =40;
    four->next=five;

     five->data =50;
    five->next=NULL;


    //  six->data =60;
    // six->next=NULL;

printf("Before\n");
linkedlistTreaversal(head);
printf("after\n");

head = middleNode(head);

linkedlistTreaversal(head);
    return 0;
}
// int main(){
//     printf("heelo haseeb world\n");
//     int  head[] = {1,2,3,4,5,6};
   
//     int array_length = sizeof(head) / sizeof(head[0]);
//     float print = ceil(array_length/2);
//     printf("length is %d\n",array_length);
//     printf("length is %f\n",print);
//     for (int i = print; i < array_length; i++)
//     {
//         printf("Element is %d\n",head[i]);
//     }
    
// }