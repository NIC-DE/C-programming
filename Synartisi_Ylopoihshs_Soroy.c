//synartisi_kai_prgramma_ylopoihshs_soroy

#include<stdio.h>

void heapify(int p[],int n,int i)
{
	int minimum=i;//arxikopoise os elaxisto ti riza
	int l=2*i+1;//aristero pedi 2*i+1
	int r=2*i+2;//deksio pedi 2*i+2
	if (l<n && p[l]<p[minimum])//aristero pedi mikrotero apo riza
	  minimum=l;
	if(r<n && p[r]<p[minimum])//an deksi pedi mikrotero apo riza
	minimum=r;
	if(minimum!=i)//an to mikrotero stoixeio den einai sthn riza
	{
		swap(&p[i],&p[minimum]);
		heapify(p,n,minimum);
		
	}
	  
int main()
	
{	
	int p[]={20,1,17,8,10,3,4,15,7};
	int n=sizeof(p)/sizeof(p[0]);
	int i;
	for(i=n/2-1;i>=0;i--)
	heapify(p,n,i);
	return 0;
}	
	
}
