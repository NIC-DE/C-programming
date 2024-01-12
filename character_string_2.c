

    #include <stdio.h>
    
    
     int main(void)
     {
    	// your code goes here
    	char c = 'a';
    	
    	// string is a character array
    	char str[2];
    	str[0] = c;
    	
    	//string always ends with a null character
    	str[1] = '\0';
    	
    	//displaying the string
     	printf("The string is : %s",str);
    	return 0;
    } 
