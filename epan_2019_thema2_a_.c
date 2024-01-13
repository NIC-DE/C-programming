//epan_2019_thema2_b_


#include<stdio.h>
#include<stdlib.h>


void compute (int pin[], int N);


int main()
{
  int N=10;	
  int pin[10]={1,5,9,7,9,7,5,6,8,6};	
	
  compute(pin,N);	
	
	
	
	
	
	
}
void compute (int pin[], int N)
 {
 	
  int i, j; 
  float pr; 
  
 for (i=0; i<N; ++i)
  { 
  pr = 1.0;
  for (j=i; j<N; ++j)
  
  pr*=pin[j]; 
  
  printf("To ginomeno apo tin thesi %d mexri to telos einai: %f\n", i+1, pr); 
}
}
