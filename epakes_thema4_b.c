//epakes_thema4_b

#include<stdio.h>

int main()
    {
	
	int r,c,sum,temp;
	
	for(c=100;c<=999;c++)
	{
	
	temp=c;
	sum=0;
	
	while(temp!=0)
	{
		
	r=temp%10;
	
	sum=sum+r*r*r;
	
	temp=temp/10;
	

		
	}
	
	if(c==sum)
	
	printf("%d\n",c);	
	
    }
		
		return 0;	
		
	}

	

