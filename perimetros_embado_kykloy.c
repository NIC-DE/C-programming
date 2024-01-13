/*perimetros_embado_kykloy*/

#include<stdio.h>
#define pi 3.1416

main()
{
	float r;
	printf("dose tin aktina:\t");
	scanf("%f",&r);	
	printf("perimetros kykloy:%5.2f\n",2*pi*r);//perimetros P=2*pi*r
	printf("embadon kykloy:%5.2f\n",pi*r*r);//embadon E=pi*r*r
}
