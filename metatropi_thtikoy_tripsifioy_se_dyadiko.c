//metatropi_thtikoy_tripsifioy_se_dyadiko

#include <stdio.h>


 int main(void)
  {  
    int i, a[10], count=0, x;
       for (i=0; i<10; i++)
	   {  
	    a[i]=0; 
		} 
		do { 
		     scanf("%d", &x);
			      } while ((x<=0)||(x>999));
				       while (x>0)
					    {
						  a[count]=x%2;
						  x=x/2; 
						  count++;
						   }
						    for (i=count-1; i>=0; i--)
							  printf("%d",a[i]);
							   }  
 

