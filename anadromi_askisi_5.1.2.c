//anadromi_askisi_5.1.2

#include<stdio.h>



int unknown_fun(int a, int b)
 {
   if (b==1) 
      return a;
    else return a+unknown_fun (a, b-1); 
 }  
 
 int main()
 {
 	
    int b,a;
 
 
 
	
 	unknown_fun(2,3); 	
    printf("Value = %d",unknown_fun(2,3)); 	
 	
 	
 	
 }
 
