//telikes_2019_5b

#include<stdio.h>
#include<stdlib.h>


struct list{
	int value;
	struct list*next;
	
};

typedef struct list item;

int main()
{
	item*cur,*head;
	int i;
	
	head=NULL;
	
	for(i=0;i<5;i++)
	
	cur=(item*)malloc(sizeof(item));
	
	cur->value=10-2*i;
	
	cur->next=head;
	
	head=cur;
	{
		return(0);		
		
	}
	
	
}
