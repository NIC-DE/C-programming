

#include<stdio.h>
#include<stdlib.h>


int binsearch(int x, int k[], int n);

int main(void)
{   
    
    int n=10;
    int k[10]={1,3,6,8,9,15,75,76,80,100};
    int x=16; 
    int result=binsearch(x,k,n);

    (result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            result); 
    return 0; 


}
/* binsearch:  find x in k[0] <= k[1] <= ... <= k[n-1] */  

int binsearch(int x, int k[], int n)
 {
    int low, high, mid;
    low = 0;
    high = n - 1; 
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < k[mid])
            high = mid - 1;
        else if (x > k[mid])
            low = mid + 1;
        else    /* found match */
            return  mid;
    
    }  
    return -1;   /* no match */
}
