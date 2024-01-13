//telikes_2019_5b

#include<stdio.h>
#include<stdlib.h>


struct list{
	int value;
	struct list*next;
	
};

typedef struct list item;
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
	item*cur,*head;
	int i;
	
	head=NULL;
	
	for(i=0;i<5;i++)
{

	cur=(item*)malloc(sizeof(item));
	
	cur->value=10-2*i;
	
	cur->next=head;
	
	head=cur;
	
	printlist(head);
	
}
	return(0);		
		
}
	

















