//telikes_2017_thema4_a


#include<stdio.h>


int c,x;

int main()
{
	
	do
	{
	   printf("give a posittive less than 10: ");
	   scanf("%d",&x);
	   
	   if(x<1)
	     printf("the number is not posittive\n");
	   else if(x>9)
	     printf("the number is not less than 10\n");	
	      	
		
		
	}while ((x<1)||(x>9));
	
	for(c=x; c<=9;++c)
	
	printf("%d",c);
	
	return 0;
	
	
}
