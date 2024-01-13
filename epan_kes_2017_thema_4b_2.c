//epan_kes_2017_thema_4b_2


#include<stdio.h>
#include<stdlib.h>




int  search(int *P,int N,int num);

	
int main()
{
		int N=10;
		int num;
		
		int P[10]={1,6,8,9,7,45,25,36,1,458};
		
		
		printf("\n");
	    search(&P,N,458);
	    


}

int search(int *P,int N,int num)
{

  int i,pos=-1; 
  
  for(i=0; i<N; ++i)
  			
  if (P[i] == num) 
  pos=i;
  
  
  return  pos;
  	
}
