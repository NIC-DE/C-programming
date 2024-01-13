/*mikroteros_apo_toys_akeraioys*/

#include<stdio.h>

main()
{
	int a,min,i;
	for(i=1;i<=20;i++)
	{
		printf("aritmos-%d:",i);
		scanf("%d",&a);
		 if(i==1)
		   min=a;
		 else
	    if(a<min)
		   min=a;
			     
	}
	printf("mikroteros:%d\n",min);
}
