//telikes_2020_thema_1_d

#include<stdio.h>




int main()

{
   int x,y,z,F;
   
   do
   {
   	printf("dose timi eisodoy  0-1 gia tin eisodo x:");
   	scanf("%d",&x); 	    	
   	
   }while(x<0 || x>1);
   
   do
   {
   	printf("dose timi eisodoy  0-1 gia tin eisodo y:");
   	scanf("%d",&x);  	
   	
   }while(y<0 || y>1);
   
   do
   {
   	printf("dose timi eisodoy  0-1 gia tin eisodo z:");
   	scanf("%d",&z);  	
   	
   }while(z<0 || z>1);
   
   
   
   if(F=(x*y)||(!x&&!y)||(!y&&z))
	
   return F;  
	
	
	
}





