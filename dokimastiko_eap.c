/*syndedemenh_lista*/

#include <stdio.h> //header files
#include <stdlib.h> 
  
struct Node {     
    int data; 
    struct Node* next; 
}; 
  
// This function prints contents of linked list starting from 
// the given node 
void printList(struct Node* i) 
{ 
    while (i>0&&i<100) { 
        printf(" %d ", i->data); 
        i = i->next; 
    } 
} 
  
int main() 
{ 
    struct Node* head = NULL; 
    struct Node* second = NULL; 
    struct Node* third = NULL; 
  
    // allocate 3 nodes in the heap 
    head = (struct Node*)malloc(sizeof(struct Node)); 
    second = (struct Node*)malloc(sizeof(struct Node)); 
    third = (struct Node*)malloc(sizeof(struct Node)); 
  
    head->data = 56; // assign data in first node 
    head->next = second; // Link first node with second 
  
    second->data = 68; // assign data to second node 
    second->next = third; 
  
    third->data = 49; // assign data to third node 
    third->next = NULL; 
  
    printList(head); 
  
    return 0; 
}

