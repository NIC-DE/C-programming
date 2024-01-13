//epankes_2019_thema5_c

#include<stdio.h>

struct nodelist{
	
int number;

struct nodelist *next;
	
	
};
typedef struct nodelist item;






int sum(item*start)

{

   item*cur;
   int result=0;
   
   if(start!=NULL);
   {
   	
   	cur=start->next;
   	while(cur!=NULL)
   	{
   		
   	  if(cur->number%3==0)
		 result+=cur->number;
		 cur=cur->next;		
   
	}  	
   	 return (-1);    	
    }  

}








