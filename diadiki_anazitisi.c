/*diadiki_anazitisi*/

//epistrofi thesis x ston taksinomimeno pinaka a megethoys n


#include<stdio.h> 


	int binarySearch(int a[],int n,int x){    
		
		int left=0;int right=n-1;//oria pinaka
		while(left<=right){
			
		int middle=(left+right)/2;//elenxos mesaioy stoixeioy
		
		
		/*anazitisi sto deksio  h aristero miso antistoixa*/	
		
		if(x==a[middle]) return middle;//vrethike
		if(x>a[middle]) left=middle +1;
		else right==middle-1;
			
		}
		
		return -1;//den vrethike
	}
	
int main(void) 
{ 
	int a[] = { 2, 3, 4, 10, 40 }; 
	int n = sizeof(a) / sizeof(a[0]); 
	int x = 41; 
	int result =binarySearch(a,n,x) ; 
	(result == -1) ? printf("Element is not present in array") 
				: printf("Element is present at index %d", 
							result); 
	return 0; 
} 

	
	
	
	
	
	
	
	
	
	
	
	



