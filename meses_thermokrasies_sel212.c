/*ypologismos_meswn_etisiwn_thermokrasiwn*/

#include<stdio.h>

#define YEARS   3
#define MONTHS 12

float temp[YEARS][MONTHS]={
        {10,12,25,45,12,13,47,62,12,36,14,56},
        {23,52,12,13,12,23,26,24,28,19,46,12},
        {36,25,14,12,15,14,17,18,19,16,15,16},
        };
        
 float avg_temp[3];
 

void main()
{
	int year,month;
	float total,subtotal;
	total=0;
	
	for(year=0;year<YEARS;year++){
	    subtotal=0;
	    for(month=0;month<MONTHS;month++)
          subtotal+=temp[year][month];
		  avg_temp[year]=subtotal/MONTHS;
		  
		  printf("H mesi thermokrasia toy %dou etoys einai:%2f\n",year+1,subtotal/MONTHS);
		  
		  total+=avg_temp[year];	
        }
          printf("h mesi thermokrasia twn %d etwn einai:%4f\n",YEARS,total/YEARS);
          
          for(month=0;month<MONTHS;month++){
          	  subtotal=0;
          	  
          	  for(year=0;year<YEARS;year++)
						  
                subtotal+=temp[year][month];
              
                printf("h mesi thermokrasia toy %dou mhna einai:%1f\n",month+1,subtotal/YEARS); 
           }
           
}
          
          
          
          
          
          
          
          
          
          
          
          
          
          
          
