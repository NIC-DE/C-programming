//epakes_thema4_b

#include<stdio.h>

int main()
    {
	
	int r,c,sum,temp;
	
	for(c=100;c<=999;c++)//elenxo aritmoys apo 100 eos 999
	{
	//kratao ton c se mia prosvrinh metavliti temp
	temp=c;
	sum=0;
	
	while(temp!=0)
	{
		
	r=temp%10;//ypoloipo tis diairesis toy temp me to 10
	
	sum=sum+r*r*r;//ypolpgismos tritiw dynamis tou r kai thn athroizo
	
	temp=temp/10;  //divxno to teleitaio chfio toy temp
	

		
	}
	
	if(c==sum)//an to sum sthn trith dynami einai ish me ton arithmo
	
	printf("%d\n",c);	
	
    }
		
		return 0;	
		
	}

	

