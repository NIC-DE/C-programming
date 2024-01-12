//call_by_reference

#include <stdio.h>


 void duplicate(int a, int b);
  main() {  int a = 1, b = 4;
    duplicate(a,b);
	    printf("The value of a in main is %d, ", a);
		   printf("the value of b in main is %d\n", b);
		    }
			
			 void duplicate(int a, int b)
			 {  a *= 2; b *= 2;
			   printf("The value of a in duplicate is %d, ", a);
			      printf("the value of b in duplicate is %d\n", b);
				   }


