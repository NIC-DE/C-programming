/*metakinisi_stoixion_stibas*/

#include<stdio.h>

#define N 6
#define K 4

void ss_eisagogi(int s[],int n, int *t,int x);
int ss_diagrafi(int s[],int *t);
void metakinisi_k_psifion(int s[],int n,int *t,int k);

void main (void)
  {

int x,i,n;
int t=N;
int s[N]={0,0,1,0,0,1};


metakinisi_k_psifion(s,N,&t,K);
ss_eisagogi( s,n,&t,x);
ss_diagrafi(s,&t);


for(i=0; i<N; i++)

printf("\n%d",s[i]);
  }
void metakinisi_k_psifion(int s[],int n,int *t,int k) 
  {
	int i,j,x;
	int t1=0; int t2=0;
	int  s1[N],s2[N];
	
	
for(i=0; i<(n-k);i++)
  {
  x=ss_diagrafi(s,t);
  ss_eisagogi(s1,N,&t1,x);
  }
 for(j=0; j<k; j++)
  {

	
	x=ss_diagrafi(s,t);
	ss_eisagogi(s2,N,&t2,x);  
  }
  
  for(j=0; j<(n-k); j++)
  
  {
  	
  	x=ss_diagrafi(s1,&t1);
  	ss_eisagogi(s,N,t,x);
  }
for(i=0; i<k; i++)
  {
		
		x=ss_diagrafi(s2,&t2);
		ss_eisagogi(s,N,t,x);
  }
  		
  }  	
  	

	

	
	
	

	















