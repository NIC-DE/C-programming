//paragontiko_xoris-anadromi


int parag(int n) 
{ 
int apot=1; 
int m; 
for (m=2;m<=n;m++)
 apot=apot*m;
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
 
