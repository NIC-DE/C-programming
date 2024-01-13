

#include<stdio.h>

int bitcount(unsigned x);
int main()
{
  int b;
  unsigned int x=0177700;	
  bitcount(x);
 	
	
	
}
 /* bitcount:  count 1 bits in x */  
  int bitcount(unsigned x) 
    { 
	   int b;
       for (b = 0; x != 0; x >>= 1)
	    if (x &  0177700) 
		  b++;
		  return b;
    } 
