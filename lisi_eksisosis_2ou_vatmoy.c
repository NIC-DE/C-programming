

#include <stdio.h>
#include <math.h>

int  main()
 
{ 
system("chcp 1253>nul");
 
float a,b,c,riza1,riza2,diakrinousa;

printf("Εισαγωγή  του συντελεστή a : \n");
scanf("%d",&a);
printf("Εισαγωγή  του συντελεστή b : \n");  
scanf("%d",&b);
printf("Εισαγωγή  του συντελεστή c : \n");scanf("%d",&c);

diakrinousa=b*b-4*a*c;

  if (diakrinousa>0) 
	   { 
	    riza1=(-b+ sqrt(diakrinousa))/(2*a); 
	    riza2=(-b- sqrt(diakrinousa))/(2*a);
	    printf(" Οι ρίζες είναι: %f και %f \n",riza1,riza2);
	    }
	    else if (diakrinousa==0)
	    
		{ riza1=(-b/(2*a));
	    printf(" Διπλή ρίζα : %f \n",riza1); 
	    }
		else
	    	printf(" Δεν υπάρχουν πραγματικές  ρίζες \n");
		 
	    return 0;
 }                    /* Τέλος προγράμματος */ 











