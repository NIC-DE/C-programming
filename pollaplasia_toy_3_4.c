/*pollaplasia_toy_3_4*/

#include<stdio.h>

main()
{
	
	int i,m;
	m = 0;
	for(i=20;i<=40;i++)
	{
		
		
		if((i% 3==0)||(i% 4==0)){//panta diples parenthesis!!!!!!
		  m ++;
		  printf("i=%d\n",i);	
			
		}
	}
	printf("plithos=%d\n",m);
}
