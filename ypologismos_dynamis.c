//ypologismos_dynamis


#include<stdio.h>
#include<stdlib.h>

float power_fun(float x, int n)
 { 
 
 
 if (n==0) 
  return(1.0);
 else if (n>0) 
  return(x*power_fun(x,n-1)); 
 else  
 return(1.0/power_fun(x,-n));
 
 
 } 
	 
	 int main()
	 {
	 	
	 	float x;
	 	int n,b;
	 	
	 	
	 	b=power_fun(2,3);
	 	printf("%d",b);
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 }
