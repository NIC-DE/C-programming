//eksetaseis_telikes_2019_thema_4_a

#include<stdio.h>

int main()

{
	
	int i;
	
    long int term=3,sum=0;
    
	for(i=1; i<8; i++)
	{
		
		
		
		sum+=term;
		term=(term*10)+1;
	}
		

	printf("%ld",sum);
	return 0;
	
	
	
	
	
}
