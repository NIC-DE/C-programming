//antistrofi_stoixeion_pinaka

#include <stdio.h>


 int main(void)
 { 
 
   int i, temp;
   int x[15]; 
   
	    for(i=0; i<15; i++)
		  {   
		    scanf("%d", &x[i]);
	      }
		   for(i=0; i<15/2; i++)
		  { 
			 temp=x[i];
			 x[i]=x[14-i];
			 x[14-i]=temp;
			 printf("\n"); 
		               }
		               for(i=0; i<15; i++)
		               { 
					   
	                   printf("%d ", x[i]);
 }
 } 
