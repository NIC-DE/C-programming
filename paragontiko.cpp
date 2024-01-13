//paragontiko

#include <stdio.h> 
 
int parag(int n) 
{ 


int apot ; 
if (!n) 
return 1;
apot = parag(n-1)*n;
 return apot;
  } 
 
main() 
{ 
int k ; 
do {
 printf("dose arithmo : ");
  scanf("%d", &k);
   } 
   while (k< 0);
    printf("%d", parag(k));
   } 
