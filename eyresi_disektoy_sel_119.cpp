#include<stdio.h>
#include<stdlib.h>

int year;

main()

{
system ("chcp 1253>nul");



printf("Δωσε ετος\n");
scanf("%d",&year);
if((year%400)==0)
printf("Το ετος ειναι δισεκτο\n");
else if((year%100)==0)
printf("Το ετος δεν ειναι δισεκτο\n");
else if((year%4)==0)
printf("Το ετος ειναι δισεκτο\n");
else 
printf("Το ετος δεν ειναι δισεκτο\n");
system("PAUSE");
return 0;
}
