//mkd_ex_xoris_anadromi


#include<stdio.h>
 

int gcd(inta, intb) 
{
	
	
 int a,b,temp;
 	
 printf("dose arithmo a:");
 scanf("%d",&a);
 printf("dose arithmo b:");
 scanf("%d",&b); 
  
  while (a%b!=0)
    { 
	  temp=a%b;
	  a=b; 
	  b=temp;
		     }  
	  return b;
			 } 
int main()
{

 int a,b;

 
 gcd(a,b); 
 


	
	
 } 
