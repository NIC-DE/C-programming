//epan_2019_thema4_b


#include <stdio.h> 

int c, x; 

int main()

 { 
 
 do
 { 
  printf("Give a two digits positive number less than 100: ");
  scanf("%d", &x); 
  
   if (x<10)
    printf("The number should be more than 9\n");
    else if (x>99) 
   
	printf("The number should be less than 100\n");	 
 }  while ((x<10) || (x>100));
	  
	  
	   for (c=x; c<=99; ++c) 
	   printf("%d ", c); 
	   
	       return 0;
	       
		    } 
 
