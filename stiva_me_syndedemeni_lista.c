/*eisagogi_stoixioy_se_stiva_me_syndedemeni_lista*/

#include<stdio.h>

struct ListNode{int data; struct ListNode*next;};

typedef struct ListNode*stack;

int main()

{
void push(stack*sp,int t){
	struct ListNode*nptr=(struct ListNode*)malloc(sizeof(struct ListNode));
	
	if (nptr==NULL){
		printf("out of memory\n");
		return (1);
	}
	nptr->data=t;nptr->next=*sp;*sp=nptr;
	
	
    int top(stack s);{
	if(s==NULL)	{
		printf("stack is empty!\n");
		exit(1);
		
		
	}
	
	return s->data;	
			
}
}




