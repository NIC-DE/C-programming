///epanaliptikes_2020

#include <stdio.h> 
 
#define N 10 

 
int main() 
{ 

int i, x, pin[N]; 
 
   
    pin[0] = 2;
    
	 for (i=1; i<N; ++i)
	  { 
	   pin[i] = 5 * pin[i-1] - 3; 
	   printf("%d\n",pin[i]);	   
	  } 	  
	   
 }

