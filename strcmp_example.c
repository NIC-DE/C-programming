/*strcmp_example*/

#include<Stdio.h>
#include<string.h>

 int main()
{
	char x[]="elephant";
	char y[]="car";
	char z[]="car";
	
	if(strcmp(x,y)==0)
	printf("to string ston pinaka x %s einaiiso me ayto ston pinaka y %s\n",x,y);
	if(strcmp(x,z)!=0)
	{
		printf("to string ston pinaka x %s den einai iso me ayto ston z %s\n",x,z);
		if(strcmp(x,z)<0)
		printf("to string ston x %s proigeitai aytoy toy z %s\n",x,z);
		else
		printf("to string ston z %s den proihgeitai ayoty toy x %s\n",z,x);
		
	}
	else 
	printf("einai isa");
	
	
	
}

