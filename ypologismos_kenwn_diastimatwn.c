/* paradigma gia to pos mporeis na diaxiristeis charaktires.. */

#include <stdio.h>

int main()
{
char c;
printf("pata koumpi kai enter..\n\t");
scanf("%c",&c);
if(c==10)
{
printf("O ascii code gia to \"enter\" einai %d.",c);
}
else if(c==32)
{
printf("O ascii code gia to \"space\" einai %d.",c);
}
else
{
printf(" patises kati allo.. ");
}
return 0;
}
