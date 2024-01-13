//telikes_2018_thema4_ii

#include<stdlib.h>
#include<stdio.h>

struct list{
	
	int value;
	
	struct list*next;	
	
};

typedef struct list ListNode;
typedef struct list cur; 

void printlist(cur *head)
{
    cur*temp = head;

while (temp != NULL) {
	printf("%d-", temp->value);
    temp=temp->next;
}
printf("\n");	
}

int main()
{
	
	ListNode*cur,*head;
	int i;
	
	head=NULL;
	
	for(i=0;i<10;i++)
	{
		cur=(ListNode*)malloc(sizeof(ListNode));
		
		cur->value=9-i;
		
		cur->next=head;
		
		head=cur;	
		
	  
		printlist(head);
			
		
	}
	
}

