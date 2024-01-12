//eksetaseis_telikes_2019_thema_1_b


#include<stdio.h>
#include<stdlib.h>


void bitwise_NAND(int a[],int b[],int c[],int N);



int main()

{
	
int N=6;
	
int a[6]={1,0,1,0,0,1};

int b[6]={1,0,0,0,0,0};	

int c[6]={1,1,1,0,1,1};


bitwise_NAND(a,b,c,N);
	
	
	
	
	
	
}

void bitwise_NAND(int a[],int b[],int c[],int N)
{
  int i;
  
  for(i=0; i<N; i++)
   if (a[i]*b[i]*c[i])
   
   printf("0");
   
   else
   
   printf("1");	
	
	
	
	
	
	
	
}

