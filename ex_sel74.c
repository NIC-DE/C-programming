//sel_74

#include<stdio.h>

     
main()	
{

{
     unsigned int seed;
	 rand();
	 srand(seed);
}    /* rand:  return pseudo-random integer on 0..32767 */ 
  
     unsigned long int next = 1;
  
     int rand(void)  
{ 
	  next = next * 1103515245 + 12345; 
	  return (unsigned int)(next/65536) % 32768;
}
   /* srand:  set seed for rand() */ 
     void srand(unsigned int seed)
{
	  next = seed; 
}
}
	    
	    
	
	
	
	
	
	
	
	
	
	
	
	
	
	

		




    
		

