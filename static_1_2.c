//static

void func()
 { 
   static int x = 1;  /* arxikopoiitai mono thn proth fora*/ 
     printf("%d\n", x);
	 x = x * 10;
	    }
	   int main ()
	   
	    { 
		 func(); // typonei  1 
		 func(); // typonei 10 
		 func(); // typonei 100 
		 
		 return 0; 
		} 
