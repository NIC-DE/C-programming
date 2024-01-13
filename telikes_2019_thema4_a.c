//telikes_2019_thema4_a

#include<stdio.h>

main()

{
	
	int i;
	long int term=3;int sum=0;
	
	for(i=1;i<8;i++)
	{
		sum+=term;
		term=(term*10)+1;//kathe oros ayksanetai kata term
			
		
	}
	
	printf("%ld",sum);//ld giati exv akeraio megaloy mikoys
	return 0;	
	
}
