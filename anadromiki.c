 /* File: prog-4.c */
 
#include <stdio.h>
  
int sum(int n)
{
      
   
if (n== 1) 
   
return 1;
else 
return n + sum(n-1);
}

int main ()
 { 
  int x, y;
    printf("Dose enan akeraio >= 1:");
	scanf("%d", &x);
	y=sum(x);
	
	printf("\nAthroisma apo 1 mexri %d= %d\n", x,y);
	
	return 0;
} 

		   
