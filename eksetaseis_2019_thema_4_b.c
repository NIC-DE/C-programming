//eksetaseis_2019_thema_4_b



#include<stdlib.h>
#include<stdio.h> 
 
 
 
 struct list { 
    int value; 
    struct list * next;
	 }; 
	 
	typedef struct list item; 
	
void printlist(item *head)
{
    item*temporary = head;

while (temporary != NULL) {
	printf("%d-", temporary->value);
    temporary=temporary->next;
}
printf("\n");	
}
	
	int main() 
	
	{ 
	  
	 item * cur, * head;  
	  int i;  
	  head = NULL; 
	  
	     for(i=0;i<5;i++) 
		 { 
		 
		  cur = (item *)malloc(sizeof(item));  
		  cur->value = 10-2*i; 
		  cur->next =head; 			
		  head = cur;   	
		
		  
		   printlist(head);

		   
		     
		   
		     
		     
           }  
		   		   
}

		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   
