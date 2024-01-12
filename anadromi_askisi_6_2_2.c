//anadromi_askisi_6_2_2

#include<stdio.h>
#include<stdlib.h>

void display_num(int n) 
{ 

 if (n==1) 
 
 printf("%d\n", n); 
     else 
	   { 
	    printf("%d", n);
		display_num(n-1); 
			   } 
			   } 
			   
int main()
{
	
int n;


display_num(3);	
	
	
 }			   
