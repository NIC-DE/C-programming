//diktes_8

#include <stdio.h> 
main()
 {  int a=1, b, *c, *d;  c=&a; b=*c; 
 printf("a=%d,b=%d,*c=%d\n", a, b, *c); 
   b = *c + 1; 
  printf("a=%d,b=%d,*c=%d\n", a, b, *c);
      *c += 1;
	 printf("a=%d,b=%d,*c=%d\n", a, b, *c);
	     ++*c;
		 printf("a=%d,b=%d,*c=%d\n", a, b, *c);
		     (*c)++;
		    printf("a=%d,b=%d,*c=%d\n", a, b, *c);
			    *c+=2; 
			  printf("a=%d,b=%d,*c=%d\n", a, b, *c); 
			} 
