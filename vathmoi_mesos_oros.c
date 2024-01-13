/*vathmoi_mesos_oros*/

#include<stdio.h>
#define minB 1
#define maxB 20

main()
{   
	int m,b,max,min,mo,sum,i;
	do
	{
		printf("posoys mathites exei h taksi;(1 eos 30)");
		scanf("%d",&m);
		
	}
	while(m<1||m>30);//amyntikos programmatismos
	min=maxB;
	max=minB;
	sum=0;
	
	for(i=1;i<=m;i++)
	{
		do
	{	
		printf("bathmos tou %dou mathiti(1 eos 20):",i);
		scanf("%d",&b);
	}
	while(b<minB||b>maxB);//amyntikos programmatismos
	if(b<min)
	min=b;
	if(b>max)
	max=b;
	sum+=b;
	}
	mo=floor(0.5+(float)sum/m);
	printf("mikroteros:%d\n",min);
	printf("megalyteros:%d\n",max);
	printf("mesos oros:%d\n",mo);
	
	
	
}
     

















