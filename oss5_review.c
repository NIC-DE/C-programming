//oss5

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
 
main() 
{ 
 int t; 
 char p[21]; 
 
 printf("Insert the text:\n"); 
 gets(p); 
 
 printf("\n"); 
 for (t=strlen(p)-1; t>=0; t--)
 printf("%c", p[t]);
 printf("\n"); 
 system("PAUSE"); 
} 
