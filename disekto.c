//disekto


#include<stdio.h>
#include<stdlib.h>

main()
{
	int year;
	
	printf("doe mia xronologia:");
	scanf("%d",&year);
	
	if((year % 4==0  && year % 100!=0)|| year % 400==0)
	  printf("to %d etos einai disekto\n",year);
	
	else
	
	  printf("to %d etos den einai disekto",year);
	
	
	
}

