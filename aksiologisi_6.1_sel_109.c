/*selida 202 tomos d*/


#include<stdio.h>

#include<string.h>

#include<stdlib.h>

#include <math.h> 

int max(int a,int b,int c);

/*

The C library function char *strchr(const char *str, int c) searches for the first
 occurrence of the character c (an unsigned char) in the string pointed to by the argument str.*/
 
int num =5;



int main()
{   
    system ("chcp 1253>nul");
    
    double x=2;int n=4;  
    double result=pow(x,n);
    
    
	printf("%.2lf",result);     
	printf("\n\nmax=%d",max(12/2,num +3,2*num ));
    return 0;
	
}
int max(int a,int b,int c)
{  	
  	
int max;

if(a>b)
  if(a>c)
    return a;      
  else
    return c;
else if(b>c)   
    return b;
  else
    return c;  	
 } 
  
   
   
   
   
   
   
   
   
   
   
   
   

