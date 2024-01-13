//struct_4

#include <stdio.h>

 struct struct_type
    { 
	int a, b;
	char ch;
	} ;
	   
	    void f1(struct struct_type parm ) 
		 { 
		   printf("%d", parm .a);
		  } 
		  
		main() 
		  { 
		    struct struct_type ar;
			 int a=5; 
			   ar.a = a*1000; 
			     f1(ar); 
 } 
 

