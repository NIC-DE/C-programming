//epan_2018_thema_b


#include<stdlib.h>
#include<stdio.h>
 #define N 10
  
  
   struct list_node 
    {  
	 int number;  
	 struct list_node *next; 	   
	   }; 
	   
	    typedef struct list_node item;
	    
		 int main()
		 { 		 
		 
		  item * cur, * head;  
		   int i,sum=0; 
		    head = NULL;
			for(i=0;i<N;i++)
			{ 
			cur = (item *)malloc(sizeof(item));
		     do 
			 {    
				printf(" %d.number: ",i+1); 
				scanf("%d",&cur->number);
				 } 
				 while (cur->number<=0);
				 cur->next  = head; 
				 head = cur; 
				 } 
				 while(cur) 
			    { 
				if(cur->number%2==0)
				sum+=cur->number;
				cur = cur->next ; 
				 } 
			     printf("Sum=%d",sum); 
				return(0); 
				
} 












