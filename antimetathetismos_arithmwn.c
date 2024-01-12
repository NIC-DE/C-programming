

/*antimetathetismos_arithmwn*/

#include<stdio.h>

main()
{
	int a,b,temp;
	
	printf("1os arithmos:");
	scanf("%d",&a);
	
	printf("2os arithmos:");	
	scanf("%d",&b);
	printf("\n");
	
	
	
	temp=a;
	a=b;
	b=temp;
	
	printf("1os aritmos:%d\n",a);	
	printf("2os aritmos:%d\n",b);	
	
}
