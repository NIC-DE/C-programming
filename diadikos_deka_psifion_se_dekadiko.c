//diadikos_deka_psifion_se_dekadiko


#include <stdio.h>
 #include <math.h> 
 int main(void)
  { 
      int i, a[10], count=0, x, number;
      
       for (i=0; i<10; i++) 
	        a[i]=0;
			scanf("%d", &x); 
					    while(x>0)
						 { 
						  a[count] = x % 10;
						  x=x/10; 
						   count++;
						  } 
						  number=0; 
						    for (i=0; i<count; i++)
							           number=number+a[i]*pow(2, i);
									         printf("%d", number);
											  } 
