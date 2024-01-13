//struct_5

#include <stdio.h>
#include<stdlib.h>

   struct data{     
	 char fname[30];
	 char lname[30];
	 float salary;
	} rec; 
	  
 void print_rec(struct data x);
 
main()  
{ 
     system("chcp 1253>nul");

	 printf("dose to eponymo toy ypallhloy\n");
	 printf("xorimseno me ena keno: "); 
	 scanf("%s %s", rec.fname, rec.lname);
	 printf("\ndoste ton katharo mistho toy/tis ypallhloy: ");
	 scanf("%f", &rec.salary);
	 
	 
void print_rec(struct data x)
   { 
     printf("\n%s  %s  kerdizei  %.2feyro.\n",    x.fname, x.lname, x.salary);
     
   }  
	 print_rec( rec );
	 
 }  
