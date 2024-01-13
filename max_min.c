//max_min


#include <stdio.h>

int main(void) 
  { 
   
  int x[10], i, max, min;
  for(i=0; i<10; i++)
  {  
    scanf("%d", &x[i]);  
  }
  
     max=x[0];
	 min=x[0];
	    for(i=1; i<10; i++)
  { 
		  if(x[i]>max)
			max=x[i];
			if (x[i]<min)
			min=x[i];
  }              
     for(i=0; i<10; i++)
  {
	 
     if(x[i]==max)
           printf("max in position %d\n", i);
       if (x[i]==min) 
         printf("min in position %d\n", i) ;  
    
  
  }
  
  }
  

  

  
  
  
  
  
                                         
	   
	                             
