//epan_2017_thema_4_a//




#include <stdio.h> 
 
#define N 20 

 
int main() 
{ 

int i, x, pin[N]; 
 
do
 {
  printf("Insert a positive number: ");
  scanf("%d", &x); 
   } while (x <= 0);
   
    pin[0] = x;
    
	 for (i=1; i<N; ++i)
	  { 
	   pin[i] = 3 * pin[i-1] - 5; 
	   printf("%d\n",pin[i]);	   
	  } 	  
	   
 }




