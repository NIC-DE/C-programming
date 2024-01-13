

#include<stdio.h>
#define N 10


main()

{

  	
int i,x[N];

 /* Δηλώσεις. Το Ν είναι συμβολική τιμή */ 
 
 for (i=0;i<N;i++)/* Διάβασμα πίνακα από το χρήστη*/
  { 
   printf("Dose to %d stoixeio: ",i+1);
   scanf("%d",&x[i]);
  }  
    printf("\n==========================\n");
// Εκτύπωση πίνακα: for (i=0;i<N;i++)
  /* Εκτύπωση πίνακα*/ 
   for (i=0;i<N;i++)
  {
  	 printf("%d\t",x[i]);
	 
  	
  }
// Εύρεση μέγιστου στοιχείου πίνακα:
  int max=x[0]; /*Αρχικοποίηση μεταβλητής max*/ 
  
  for (i=1;i<N;i++)  {
    if (x[i]>max)
	   max=x[i];
	   
	    } 
	return max;
	

	
}

