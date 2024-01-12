// static example!!!

#include<stdio.h>
#include<stdlib.h>



void inrcement(void);

main()

{
	increment();
	increment();
	increment();
	
}
void increment(void)
    
{
    static int j=2;//an de to valo static den pairnei thn auksisi
    static int k=2;
    
    printf("j:%d\tk:%d\n",j++,k++);	
    	
}
