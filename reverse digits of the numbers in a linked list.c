/*reverse digits of the numbers o a llink list*/


#include <stdio.h> 
  
/* Iterative function to reverse digits of num*/
int reversDigits(int num) 

{ 
    int rev_num = 0; 
    while(num > 0) 
    { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
} 
  
/*Driver program to test reversDigits*/
int main() 
     
{ 
    int i;
    
    for(i=0;i<3;i++)
    {
    int num1,num2,num3;	
    printf("dosse tris arithmoys\n");
    scanf("%d%d%d",&num1,&num2,&num3);
     
    printf("Reverse of no. is %d%d%d", reversDigits(num1),reverseDigits(num2),reverseDigits(num3)); 
  
    getchar(); 
    return 0; 	
    	
    	
    	
    	
    	
	}
    
} 

