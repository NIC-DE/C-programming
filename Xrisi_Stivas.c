/*xrisi_stivas*/

#include<stdio.h>

struct ListNode{int data; struct ListNode*next;};

typedef struct ListNode*stack;





int main(void)

{
	stack s=NULL;
	push(&s,2);
	push(&s,4);
	push(&s,5);
	printf("d",pop(&s));
	printf("\n%d",top(s));
	
}
