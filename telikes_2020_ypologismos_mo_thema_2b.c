//telikes_2020_ypologismos_mo_thema_2b


#include<stdio.h>
#include<stdlib.h>


float mesos_oros(int pin[],int N);

int main()
{  
  float av;
  int N;	
  int pin[10]={-2,6,9,45,3,-7,-5,6,8,56};  	
  
  mesos_oros(pin,N);
  
 
 
  
}

float mesos_oros(int pin[],int N)
{
	
  int i;
  float av;  
  int sum=0;                                 
  int plithos=0;
  
  for(i=0; i<10; i++)
  
   if(pin[i]>0)
     {
	 
     plithos+=1; 
     sum+=pin[i];
	 
	 av=(float)sum/plithos;
	 
     printf("\nMesos oros Pinaka = %.2f\n",av);
     	 	
  }
return 0;
}
  







