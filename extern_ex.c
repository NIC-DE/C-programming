//extern_ex


#include <stdio.h>

extern int x = 32;

int b = 8;

int main() {
	
   auto int a = 28;
   extern int b;
   
   printf("The value of auto variable : %d\n", a);
   printf("The value of extern variables x and b : %d,%d\n",x,b);
   x = 15;
   printf("The value of modified extern variable x : %d\n",x);
   return 0;
}
