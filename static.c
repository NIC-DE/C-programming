//static_ex

#include<stdio.h>

main()
 { 
 
  int count;
  
   for (count = 0; count < 5; count++)
    {
	 printf("At iteration %d: ", count);
	 
	       func();
		     }
	}
		     void func(void)
			 {
			 	
			  static int x = 0;
			  int y = 0; 
			  
			  printf("x = %d, y = %d\n", x++, y++); 
	}  
		     

