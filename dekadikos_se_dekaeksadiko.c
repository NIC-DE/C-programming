//dekadikos_se_dekaeksadiko


#include <stdio.h>
 int main(void)
  {
   int i, count=0, x;
    char yp[10],hex[16];
    
	  for (i=0; i<10; ++i)
	   hex[i] = '0' + i;
	   
		 for (i=10; i<16; ++i) 
		 hex[i] = 'A' + i - 10;
		 
		 for(i=0; i<10; i++)
			 {         
			 yp[i]='0';
			   	} 
				 scanf("%d", &x);
				  while (x>0) 
						{          yp[count]=hex[x%16];
								   x=x/16; 
							       count++;
								   } 
							       for (i=count-1; i>=0; i--) 
								   printf("%c", yp[i]);
} 
