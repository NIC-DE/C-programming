#include <stdio.h>
#include <stdlib.h>



int main()
{
	
int pid;
pid= fork();
if (pid<0)
exit(1);

if (pid== 0)
{
printf("I am the child \n");
while (1) 
putchar('c' );
}
else
{
printf("I am the parent \n");
while (1) 
putchar('p' );
}
}
