/*eksagogi_syoixioy_se_stiva_me_syndedemeni_lista*/


#include<stdio.h>

struct ListNode{int data; struct ListNode*next;};

typedef struct ListNode*stack;




int main()
{
	
	int pop(stack*sp){
		
		struct ListNode*ptr;
		int result;
		if(*sp==NULL){
	
		printf("nothing to remove from an empty stack\n");
		
		exit(1);
			}
}   
    ptr=*sp;
    result=(*sp)->data;
    *sp=(*sp)->next;
    free(ptr);
    reurn result;
	
	
	
}




