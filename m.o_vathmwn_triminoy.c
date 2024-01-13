/*m.o_vathmwn_triminoy*/

#include<stdio.h>

int main()

{
	int b1,b2,b3;
	float mo;
	
	printf("1os bathmos:\t");
	scanf("%d",&b1);
	
	printf("2os bathmos:\t");
	scanf("%d",&b2);
	
	printf("3os bathmos:\t ");
	scanf("%d",&b3);
	
	mo=(float)(b1+b2+b3)/3;
	printf("mesos oros:%4.1f\n",mo);
	
	if(mo>10)
	printf("proagetai\n");
}
