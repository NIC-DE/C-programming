/*lisi_eksisosis_2ou_vatmoy*/

#include<stdio.h>
#include<math.h>

int main()
{

float a,b,c,riza1,riza2,diakrinoysa;
printf("eisagogi syntelesth a\t");
scanf("%d",&a);
printf("eisagogi syntelesth b\t");
scanf("%d",&b);
printf("eisagogi syntelesth c\t");
scanf("%d",&c);

diakrinoysa=b*b-4*a*c;
if(diakrinoysa>0)
{ riza1=(-b+sqrt(diakrinoysa))/(2*a);
  riza2=(-b-sqrt(diakrinoysa))/(2*a);
  printf("oi rizes einai %f\n kai %f\n",riza1,riza2);		
	
  
} 
 
else if(diakrinoysa==0)
{  riza1=(-b/(2*a));
  printf("exei dipli riza %f=\t",riza1);  	
 
}
else  
  printf("den yparxoyn pragmatikes rizes\n");
return 0;  	
	
	
	
}
	
	
	
	
	


