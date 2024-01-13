//telikes_2020_2_c

int main() 
  
  { 
   int N=3; 
   int i, pin[N],c;
   pin[0] = 1;
   
    for (i=1; i<N; ++i)
	 {
	  pin[i] = 1+ i*(i-1)/2;
	  printf("%d\n",pin[i]);
	  	  
	   } 
	   return ;
	   }
