//swap_example

#include <stdio.h>


 void swap (int a, int b)
   { 
    int temp; 
    
	printf("\n***Kanw allagh %d me %d***", a,b);
	temp= a;
	a= b;
	b = temp;
	printf("\nSto block ths synarthshs x=%d, y=%d", a,b);
   }
   
    int main ()
   { 
    int x, y;  char c;
	printf("Dose to x:");
	scanf("%d", &x);
	printf("Dose to y:");
	scanf("%d", &y);
	printf("Prin tin klisi ths synartisis x=%d, y=%d", x,y);
	c=getchar();
	swap (x, y);
	c=getchar();
	printf("\n\nMeta tin klisi ths synartisis x=%d, y=%d\n", x,y);  return 0;
   }  
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
