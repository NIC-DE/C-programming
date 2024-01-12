//deiktes

#include<stdio.h>




main()
{
   int a=150; int b=1354;
   
   printf("%3d  %3d\n",a,b);   
   
   max(&a,&b);
   
   

}

int max(int*a,int*b)
{
   printf("\n");	
   printf("\nmax=%d\n",*a>*b?*a:*b);

}


