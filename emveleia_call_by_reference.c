//emveleia_call_by_reference

#include <stdio.h> 
 
void Func( int *, int);

  main()
   { 
    int x = 111,  y = 111;
    
	  printf( "Value of x is: %d\n" , x );
	    printf( "Value of y is: %d\n" , y );
	    
		  Func(&x,y); 
		     printf( "Value of x is: %d\n" , x );
			   printf( "Value of y is: %d\n" , y );
			     }
				  void Func( int *a, int b)
				  { 
				   *a = 999;
				    b=999;
				  } 
 
