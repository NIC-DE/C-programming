/*else_if_example*/

#include<stdio.h>

int main()
{
	float vathmos;
	
	printf("dose vatmo:\t");
	  scanf("%f",&vathmos);
	
	if(vathmos>=8.5)
	   printf("arista\n");
	else if(vathmos>6.5)
	   printf("kala\n");
	else if(vathmos>=5.0)
	   printf("kala\n");
	else
	   printf("mi provivasimos\n");
	         
	
}

