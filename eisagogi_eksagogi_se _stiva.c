/*eisagogi_diagrafi_stoixeioy_synexomenh_stiva*/


#include<stdio.h>
#define N 11


void ss_eisagogi(int s[],int n,int *t,int x);
int ss_diagrafi(int s[],int *t);



void main(void)   
   
   {
   	
   	int x;
    int t;
    int s[N]={0,1,2,3,4,5};
   	int n=6;    
   	    
   	    ss_eisagogi(s,n,&t,x);
        ss_diagrafi(s,&t); 
   	
   	
   }

void ss_eisagogi(int s[],int n,int *t,int x)
{
	
printf("\neisagete stoixeio:");
scanf("%d",&*t);
	
	
if(*t==n-1)
  
  
  printf("yperxeilisi\n");
  
  else
  {
  	s[*t]=x;
  	
  	(*t)++;
  	
  	printf("%d",s[*t]);
  	
  }
}
  
int ss_diagrafi(int s[],int *t)
 {
 	
 	
 printf("\neisagete stoixeio pros diagrafi:");
    scanf("%d",&*t);	
 	
 	
  
  if(*t==0)
  {
  	
  	     printf("adeia stiva\n");
  	    
  	    
		return 0;

  	
  }
  else
  {
  	(*t)--;
	
	  
	  
     return s[*t];  	
  	
  	
  } 
   
}

   
   
   
   
   
   
   
   

   
   
