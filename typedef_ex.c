//typedef_ex

#include <stdio.h>
#include <math.h> 
 
#define MAX 4 
 
 typedef struct  {
   double x,y; }
    POINT; 
 
 
 
double f1(POINT p1, POINT p2)
 { 
  double d; 
    d = sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
	  return(d); 
	  } 
	  
	 main ()
	  {  
	      float x[MAX][MAX]; 
		  int i, j; 
		    POINT a, b; 
 
            for (i = 0; i < MAX; i++)
			          for (j = 0; j < MAX; j++) 
					    x[i][j]=0.0; 
                        a.x=10;
						a.y=10; 
                         for (i = 0; i < MAX; i++)
						      { 
							     b.x=2*i;
								 b.y=5*i;
								    x[i][i]=f1(a,b);
								
								    
									     } 
										 }  
							            
							            
							            
							            
							            
							            
							            
							            
							            
							            
							            
							            
							            
							            
							            
							            
							            
							            
							            
							            

