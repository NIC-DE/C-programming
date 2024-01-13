//problima_apofasis_an_exv thetikoys_se_pinaka


 #include <stdio.h>
 
 
  int main(void)   
  {
  int x[10], i, positive;
  
  
  for(i=0; i<10; i++) 
  {
    printf("typose 10 akeraious:\n");
    scanf("%d", &x[i]); 
  
  }
    positive=1; 
    i=0;
    
    while((i<10)&&(positive)) 
  {
     if(x[i]<=0)   
     positive=0; 
       i++;
  }
    if(positive)
  
	   printf("all are positives");
	   else 
	   printf("at least one not positive");
	   
  }                                                           
  
