/*eisagogi_diadrafi_stoixeioy_se_synexomeni_oyra*/

#include<stdio.h>
#include<stdlib.h>
#define N 10

void sq_eisagogi(int q[],int n,int *f,int*r,int x);
int sq_diagrafi(int q[],int*f,int *r);


void  main(void)


{
int q[N]={0,1,2,3,4,5,6,7,8,9};
	
int f;
int r;
int x;
int n=10;

sq_eisagogi(q, n,&f,&r,x);
sq_diagrafi( q,&f,&r);

}
void sq_eisagogi(int q[],int n,int *f,int *r,int x)
{
	printf("plhktrologhse thesi  gia arithmo  stin oyra:\t");
	scanf("%d",&*r);
	
		
    if(*r>=n)

    printf("gemati oyra\n");

else
{
	printf("\npliktrologiste arithmo x gia oyra:");
	scanf("%d",&x);
	
	(*r)++;//oyra megalvnei kata 1
	q[*r]=x;//mpainei sto telos o arithmos otan exv oyra
	
    
	
	if(*f==0)

	*f=1;
}
}
	int sq_diagrafi(int q[],int *f,int *r)
{
		
		printf("\npliktrologiste arithmo f gia oyra :");
		scanf("%d",&*f);
		int*p;
		if(*f==0)
		printf("adeia oyra\n");
		else
{
			p=f;
			*f++;
			if(*f>*r)
			*f=0;
}			*r=0;
			return q[*p];//bgainei apo tin arxi
}














