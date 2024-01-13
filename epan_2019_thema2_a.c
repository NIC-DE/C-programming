//epan_2019_thema2_a


#include <stdio.h>
#define N 15

  int main() 
  
  { 
   int i, pin[N],c;
   pin[0] = 3;
   
    for (i=1; i<N; ++i)
	 {
	  pin[i] = 4 * pin[i-1] - 2;
	  printf("%d\n",pin[i]);
	  	  
	   } 
	   return 0;
	   }
