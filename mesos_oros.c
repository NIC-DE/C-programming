//mesos_oros

#include <stdio.h> 
 
#define  N 5

 int x[N],i;
 
 void read_array()
 { 
 for (i=0;i<=N-1;i++)
 {
  printf("Dose to %d stoixeio: ",i+1);
  scanf("%d",&x[i]);  }
 }
  void print_array()
 { 
 printf("\nPinakas\n");
		  
 for (i=0;i<=N-1;i++)
 printf("%d\t",x[i]);
			     } 

float average_array()
{
    int sum=0;
	int i;
	float av;
    
    
    for (i=0;i<=N-1;i++)
	   sum+=x[i]; 
	   av=(float)sum/N;
	   
	   return av;
} 
int main()
{ 
    float av;
    read_array();
  
    print_array();
    av=average_array();
    printf("\nMesos oros Pinaka = %.2f\n",av);
  
    return 0;
} 
 
