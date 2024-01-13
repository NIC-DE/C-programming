/*tetragoniki riza*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>/*βιβλιοθηκη μαθηματικων συναρτησεων*/

main()
{
system ("chcp 1253>nul");

double num ;

printf("Δωσε ενα θετικο αριθμο:\t");
scanf("% lf",&num );
if(num <0)
  printf("Λαθος εισοδος:Αριθμος αρνητικος\n");
else
  printf("Η τετραγωνικη ριζα του % lf ειναι % lf\n",num ,sqrt(num )); 
  
exit(0);

}

