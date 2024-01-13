//pinakes_paradeigma_tilesynedries_w21

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#define n 11
#define m 4 


 int Customers[n][m] = { 
 1,0,12,48,  
 2,6,5,36,
 3,7,15,43,
 4,9,12,91,
 5,15,3,57,
 6,20,0,16,
 7,17,-2,56,
 8,7,-4,30,
 9,1,-7,55,
 10,15,-9,47,
 11,20,-15,90 };
 
  float DISTANCES[n];  
  void init_distances();
  float total_distance(int Customers[][m]);
  int total_load (int Customers[][m]);
  void save_distances (int Customers[][m], float DISTANCES[]);
  void print_near_faraway (float DISTANCES[]);
  void increase_orders (int Customers[][m]);
  void var_std_of_orders (int Customers[][m], float *var, float *std);
  void print_matrix(int Customers[][m]);
  
  int main(void)
    { 
	int tl; float td, variance, stdev;
	init_distances();
	td=total_distance (Customers);
	printf("Total distance= %5.2f\n", td);
    tl=total_load (Customers);
	printf("Total load= %d\n", tl);
	save_distances (Customers, DISTANCES);
	print_near_faraway (DISTANCES);
	increase_orders (Customers);
	var_std_of_orders (Customers, &variance, &stdev);
	print_matrix(Customers);
	system("PAUSE");
	} 
	void init_distances() 
	{ 
	   int i;
	   for (i=0;i<n;i++)
	    DISTANCES[i]=0.0; }
	    
	float total_distance (int Customers[][m])
	 {  
	  float d=0; int i, x1, y1, x2, y2;
	   for (i=0; i<n-1; i++) 
	        { 
			 x1=Customers[i][1]; 
			 y1=Customers[i][2];
			 x2=Customers[i+1][1];
			 y2=Customers[i+1][2];
			 d+=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)); 
		    }
			return(d);  
}
 int total_load (int Customers[][m])
  { 
     int load=0; int i, x1, y1, x2, y2;
	  for (i=0; i<n; i++)
	    load+=Customers[i][3];
		return(load);
  } 
  void save_distances (int Customers[][m], float DISTANCES[])
   {  
        float d; int i, x, y;
		       for (i=0; i<n; i++)
			          { 
	    x=Customers[i][1];  
	            y=Customers[i][2];
				d=sqrt(x*x+y*y); 
				DISTANCES[i]=d;
				        }
  } 
  void print_near_faraway (float DISTANCES[])
   { 
     int i, minloc, maxloc; float min, max;
	 min=DISTANCES[0]; minloc=0;
	 max=DISTANCES[0]; maxloc=0;
	 for (i=1; i<n; i++) 
	      { 
		  if (DISTANCES[i]<min)
		  {  
		   min=DISTANCES[i];
		    minloc=i;
		  }   
		  if (DISTANCES[i]>max) 
		  { 
		   max=DISTANCES[i]; maxloc=i;
		     }  
			 } 
			printf("The nearest customer is %d\n", minloc+1);
			printf("The most distant customer is %d\n", maxloc+1);
		}  
 void increase_orders (int Customers[][m])
  {
  float avg; int i, sum; 
   sum=0; 
   for (i=0; i<n; i++) 
    sum+=Customers[i][3];
	avg=(float)sum/(float)n;
    for (i=0; i<n; i++)
	if (Customers[i][3]<avg)
	Customers[i][3]=2*Customers[i][3]; 
																					    } 
 void var_std_of_orders (int Customers[][m], float *var, float *std)
  { 
        float avg, y, v, s, sum; int i; sum=0;
		   for (i=0; i<n; i++) 
		   sum+=Customers[i][3];
		   avg=sum/(float)n;
		   sum=0; 
		   for (i=0;i<n;i++)  
			 {  
		   y=(Customers[i][3]-avg);
		   sum+=y*y;  
		        }
		    v=(float)sum/(float)n;
		    s=sqrt(v);
			*var=v; *std=s;
			 } 
 
 void print_matrix(int Customers[][m])
  {  
      int i, j;
	       for (i=0; i<n; i++)
		         {   
			for (j=0;j<m;j++)
			    printf("%d\t", Customers[i][j]);
				
				          printf("\n");
						        } 
						        
} 


 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
