#include<stdio.h>
#include<stdlib.h>


float triangle_area(float base,float height);
float base,height;



main()
{
system ("chcp 1253>nul");

printf("δωσε τη βαση και το υψος:\n");
scanf("%f %f",&base,&height);
double result;
result=(base*height/2); /*Εμβαδο τριγωνου=β*υ/2*/
return(result);	/*Αποτελεσμα κλησης συναρτησης*/

printf("%f",result);	
}
