/*eisagvgi_arithmoy_se _synexomeni_lista*/

#include<stdio.h>

#define N 7


typedef struct {
	
	int l[N];
	int t;
	
	
	
}slista;



void sl_eisagogi(int l[],int n,int *t,int i,int x)

{
	
int k;

if(*t==n)

  printf("yperxeilisi");
  
else
{
	k=*t-1;
	while(k>=i-1)
	{
      
	  {l[k+1]=l[k];k--;  }            
	  
	  l[i-1]=x;
	  (*t)++;
	}
  }  


#define N 7

void main (void)
{
	
int i;
slista listak;

for(i=0;i<4;i++)
{
	listak.l[i]=1;
	listak.t=i+1;
	
for(i=4; i<N; i++)

listak.l[i]=0;
sl_eisagogi(listak.l,N,&listak.t,3,2);		
	
}
	
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
















