//struct_7_me dikti


#include <stdio.h> 

#define MAX 4 
 
 struct part {  
  int number;
  char name[10];
	  }
 data[MAX] ={
	  1, "Maria",
	  2, "Elena",
	  3, "Andriana",
	  4, "Christina"
	  }; 
	     struct part *p_part;
		 int count;
		
	main ()
	 { 
	  p_part = data;
 
        for (count = 0; count < MAX; count++) 
		    { 
			        printf("%d %s\n", p_part->number,  p_part->name);
					         p_part++;
							      }
 } 	 

