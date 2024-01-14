

/*toobig.c-integer Overflow*/



#include<stdio.h>



main()

{
	
short i = 32767;
short r1 = i+1;
short r2 = i+2;

printf("%d\t%d\t%d\n",i,r1,r2);	
}
