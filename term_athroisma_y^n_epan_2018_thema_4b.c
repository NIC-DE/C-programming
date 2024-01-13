//epan_2018_thema_4B

#include<stdio.h> 


 int main()
 { 
 
  int i,n; 
  float y; 
  double sum,term; 
   
   printf("Enter the value of n: ");
   scanf("%d",&n);
   
	  printf("Enter the value of y: "); 
	  scanf("%f",&y);
	  
	    sum=0.0;  term=1.0;
		  for(i=0;i<=n;i++) 
		   { 
		     sum+= term; 
			   term*=y; 
			    } 
				 printf("Sum of the series is: %lf\n",sum); 
				  return 0;
				   } 
