//continue_9


#include <stdio.h>
int main()
{
   int j;	
	
   for (j=0; j<=8; j++)
   {
      if (j==4)
      {
	    /* The continue statement is encountered when
	     * the value of j is equal to 4.
	     */
	    continue;
       }

       /* This print statement would not execute for the
	* loop iteration where j ==4  because in that case
	* this statement would be skipped.
	*/
       printf("%d ", j);
   }
   return 0;
}
