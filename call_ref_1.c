//call_ref_1

#include <stdio.h>

   void absolute(int *a)
    { 
	 if (*a < 0)
	{  
    *a = -(*a); 	  
	  } 
	
	} 
	  main()
	 {
	   int b=-5;
	   printf( "Value of b is: %d\n" , b );
	   absolute(&b);
	   printf( "Value of b is: %d\n" , b );
     }  
