/*pinakas_akerewn*/

#include<stdio.h>

#define k  3//grammes pinaka
#define j  3//stiles

 int a[k][j]= {
              {1,2,3},
              {4,5,6},
			  {7,8,9},
	          };
	          
	          
	          
  int *a_ptr;//dikths pinaka a
 
  
main(void)
{ 
  a_ptr=&a[3][3];//diktis poy deixnei ston pinaka A[k][j]
  *a_ptr=a[2][0];//diktis poy deixnei sto stoixeio a[2][0]
  printf("*a_ptr=%d\t",*a_ptr);//kalw synartisi na ektypvsei *a_ptr
  
  system("PAUSE");
}
  
 

	 	
 	
           
