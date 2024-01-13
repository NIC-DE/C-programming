//ylopoihsi_listas_W22

#include<Stdio.h>
#include <stdlib.h>


struct Node
 {
int data;
struct Node *next;
 }; 

void printlist(struct Node *p)
{
    

while (p != NULL) {
	printf("%d-",p->data);
    p=p->next;
}
printf("\n");
}
void sumOfNodes(struct Node* p, int* sum) 
{ 
    // if head = NULL 
    if (!p) 
        return; 
  
    // recursively traverse the remaining nodes 
    sumOfNodes(p->next, sum); 
  
    // accumulate sum 
    *sum = *sum + p->data; 
} 
  
// utility function to find the sum of  nodes 
int sumOfNodesUtil(struct Node* p) 
{ 
    float avg;
    int count,current;
    int sum = 0; 
  
    // find the sum of  nodes 
    sumOfNodes(p, &sum); 
  
    // required sum 
    return sum; 
} 
float avgOfNodes(struct Node* p) 
{    
    // if head = NULL 
    if (!p) 
        return -1; 
  
    int count = 0; // Initialize count 
    int sum = 0; 
    float avg = 0.0; 
  
    struct Node* current = p; // Initialize current 
    while (current != NULL) { 
        count++; 
        sum += current->data; 
        current = current->next; 
    } 
  
    // calculate average 
    avg = (double)sum / count; 
  
    return avg; 
} 
int main()
{
	
int sum;
	
struct Node*p=NULL;
struct Node*q=NULL;
struct Node*r=NULL;	

 p=(struct Node*)malloc(sizeof(struct Node));



q= (struct Node*)malloc(sizeof(struct Node));


r= (struct Node*)malloc(sizeof(struct Node));
 


    p->data = 33; // assign data in first node 
    p->next = q; // Link first node with second 
  
    q->data = 20; // assign data to second node 
    q->next = r; 
  
    r->data = 75; // assign data to third node 
    r->next = NULL; 
  
    printlist(p); 
    printf("\nsum of nodes=%d\n",sumOfNodesUtil(p));
    printf("\nAverage of nodes = %f",avgOfNodes(p));
    return 0; 	
	
}


