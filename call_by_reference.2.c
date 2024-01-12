//call_by_reference


#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void doubleIt(int x, int * p)
 { 
  *p = 2 * x;
  
 }
   int main()
 { 
    
	 int a = 16;
	 printf("%d",a);
	 doubleIt(9,&a); 
	 	  
	 return a;
	 
	 	
	 	
	 	
	 
} 

