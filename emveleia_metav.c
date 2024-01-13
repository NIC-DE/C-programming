//emveleia_metav

#include <stdio.h>

int x = 12; 

void Func(); 
 
main()
 { 
  printf("The value of x in main is %d\n", x);
  int x = 38;
     
	   printf("Now x is %d\n", x);
	   
	     Func();
		  } 
		  void Func()
		  {  
		  printf("The value of x outside of main is %d\n", x);
		  } 
 

