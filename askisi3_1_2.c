//askisi3_1_2


#include <stdio.h>
 int recur_fun(int a) 
  { 
  int apotelesma;
      if (a<3)  
	
	 { 
	  printf("*** a=%d\n", a);
		apotelesma = recur_fun(a+1)+10;
		 }
		 else apotelesma = 0;
		 printf("a=%d apotelesma=%d\n", a, apotelesma); 
		  return  apotelesma;
		  }
		   int main()
			{  
			int b;
			 b = recur_fun(1);
			 printf("b=%d ", b); 
			 } 
