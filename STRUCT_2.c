//STRUCT_2

#include <stdio.h>

   struct struct_type
    {  
	int i;
    char ch;
	float d;
	char str[80];
	 } s;
	 
	    main ()
		 { 
		  printf("Enter an integer: ");
		  scanf("%d:", &s.i);		  
		  printf("Enter a character: ");
		  scanf("%c", &s.ch); 
				
		  printf("Enter a floating point number: ");
		  scanf("%f", &s.d);
				 
		  printf("Enter a string: ");
		  scanf("%s", s.str);
				
		  printf("%d %c %9.3f %s", s.i, s.ch, s.d, s.str);
	} 
