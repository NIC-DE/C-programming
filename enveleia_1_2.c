//enveleia_1_2

#include <stdio.h>

    int x = 2;
    
	   int Func( int x )
	    { 
		 x = 10; 
		  printf( "Value of x is: %d\n" , x );
		    return 0;
		} 
		    
			  main() 
			  {  
			  printf( "Value of x is: %d\n" , x );
			  
			  Func( x ); 
			  printf( "Value of x is: %d\n" , x );
			  }
