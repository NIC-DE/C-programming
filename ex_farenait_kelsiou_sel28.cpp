//temperatures

#include<stdio.h>
/*emfanish pinaka farenait - celsius
gia thermokrasiesfarenait  =0,20,30,40*/

main()
{
  float fahr,celsius;
  int lower,upper,step;
  
  lower=0;   /*katv orio toy pinaka thermokrasion*/
  
  
  upper=300;  /*anv orio*/
  step=20;    /*megethos bimatos*/
  
  	
  fahr=lower;
  while(fahr<=upper){
  celsius=(5.0/9.0)*(fahr-32.0);
  printf("%3.0f,%6.1f\n",fahr,celsius);
  fahr=fahr+step;	
  	
  }	
	
}
