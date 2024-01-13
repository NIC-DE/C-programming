//telikes_2017_thema3_b

#include<stdio.h>
#include<stdlib.h>


struct lnode{
	
int num;

struct lnode*next;	
	
};

void printlist(cur *head)
{
    cur*temp = head;

while (temp != NULL) {
	printf("%d-", temp->num);
    temp=temp->next;
}
printf("\n");	
} 

int main()
{
	
  //na to sympliroso
  
  
  
   printlist(head);
	
}


int plithos_perittwn(struct lnode*ptr)
{
	
	struct lnonde*cur=ptr;
	int count =0;
	
	while(cur)
	{
		if(cur->num%2!=0)
		++count;
		cur=cur->next;
		
		
		
	}
		return count;	
	
	
}

































