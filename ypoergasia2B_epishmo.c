/*syndedemenh_lista*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
	
};
 typedef struct node node_next;
 
 
 void printlist(node_t *head){
    node_t*temporary = head;

while (temporary != NULL) {
	printf("%d-", temporary->value);
    temporary=temporary->next;
}
