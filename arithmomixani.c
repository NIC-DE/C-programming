//arithmomixani

/* File: prog1.c */

#include <stdio.h>
 
 


	
 float sum(float k, float m);
 float sub(float k, float m);
   
 float mul(float k, float m);
 float dia(float k, float m);
 
 int main() 
 { 
 float num1, num2;
 char op;
 
 printf("MENOU EPILOGWN\n");
 printf("Dwse + gia thn prothsesi\n");
 printf("Dwse * gia thn pollaplasiasmo\n"); 
 printf("Dwse / gia diairesi\n");
 printf("Dwse - gia afairesi\n");
 printf("Dwse <arithmo1> praksi <arithmo2>: ");
 scanf("%f %c %f", &num1, &op, &num2 );
		   
 switch (op)
 
	{
	case '+': case 'A': printf ( " = %f", sum(num1, num2));
		break;
	case '-': case 'B':  printf ( " = %f", sub(num1, num2) ); 
	    break; 
    case '*': case 'C': printf ( " = %f", mul(num1, num2) );
	    break;
	case '/': case 'D': printf ( " = %f", dia(num1, num2) );
	break;    
	default: printf ( "Lathos eisodos\n\n" );
	}
	 return 0;
	} 
	
	float sum(float k, float m)
	{
	return (k+m);
	} 
	float sub(float k, float m)
	{
	return (k-m);
	}	  
	float mul(float k, float m)
	{
	return (k*m);
	}
	float dia(float k, float m)
	{
	return (k/m);
	}
	





	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	  
