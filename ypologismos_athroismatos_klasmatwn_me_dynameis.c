/*ypologismos_athroismatos_klasmatwn_me_dynameis*/

/*s=1-2^2+3^3.....*/


#include<stdio.h>

main()

{
	int i,N,j,dyn;long sum;int prosimo;
	do
	{
		printf("dose arithmo:");scanf("%d",&N);
		
		
	}while(N<=0);
	sum=0.0;prosimo=1;
	for(i=1;i<=N;i++)
	{
		dyn=1;
		for(j=1;j<=i;j++)
		dyn*=i;
		sum+=prosimo*dyn;
		prosimo=(-1)*prosimo;
	}
	printf("SUM=%ld",sum);
}
