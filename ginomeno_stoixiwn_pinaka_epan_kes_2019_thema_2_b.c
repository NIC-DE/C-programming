//epan_kes_2019_thema_2_b


#include<stdio.h>
#include<stdlib.h>



void compute(int pin[],int N);

int main()
{
	
  	
  int N=5; 	
  int pin[5]={1,2,3,4,5};	
  compute(pin,N);
	
	
	
}
void compute(int pin[],int N)
{
	int i,j;
	float pr;
	
	for(i=0; i<N; i++)
	{
		pr=1.0;
		
		for(j=i; j<N; ++j)
		pr*=pin[j];
		
		printf("To ginomeno ton stoixiwn apo th thesi %d mexri to telos toy pinaka einai:%f\n",i+1,pr);
	}
	
}
