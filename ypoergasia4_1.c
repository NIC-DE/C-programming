/*ypologismos_trigonoy_pascal_ypoergasia_1*/


#include <stdio.h>
#include <stdlib.h>
#define N 11


/* Δημιουργία τριγώνου Πασκάλ */
void createPascalsTriangle(int pin[][N], int maxrow);

/* Εκτύπωση τριγώνου Πασκάλ */
void printPascalsTriangle(int pin[][N], int arxi, int telos);

/* Ψάξιμο τριγώνου Πασκάλ για εντοπισμό συντελεστή */
int searchingCoefficient(int pin[][N], int maxrow, int coef,int pinFound);

/*Δημιουργία επιπέδου πυραμίδας Πασκάλ*/
void createPascalsPyramid(int pin[][N], int maxrow, int pin2[][N], int layer);


/* Κυρίως πρόγραμμα */
int main()
{
    int size, 	/* η μεγαλύτερη σε αριθμό σειρά του τριγώνου του Πασκάλ */
	x, 			/* αναζήτηση συντελεστή */
	rowX, 		/* 1 ή 0, ανάλογα με το αν βρέθηκε ο συντελεστής */
	start, end, /* όρια για τις σειρές του τριγώνου του Πασκάλ */
	i,j, 
	epip;       /* προσδιορίζει το επίπεδο πυραμίδας του Πασκάλ */
    int ptPin[N][N], /* Τρίγωνο του Πασκάλ */
	     xPin[N],    /* Αποθήκευση γραμμών συγκεκριμένων συντελεστών */ 
		 ptPyr[N][N]; /* Συγκεκριμένο επίπεδο πυραμίδας Πασκάλ */
    
    system("chcp 1253>nul"); /* Εισαγωγή Ελληνικών χαρακτήρων */
    
	int maxrow = 11; 
    int pin[N][N];
    int arxi,telos,pinFound,coef;
	createPascalsTriangle(pin,maxrow); 
	printPascalsTriangle(pin,arxi,telos);
    searchingCoefficient(pin,maxrow,coef,pinFound);

	
    	
	/* εδώ θα βάλετε τις εντολές για να εισάγετε τον συντελεστή που αναζητείται  */
	
    /* κλήση της συνάρτησης searchingCoefficient()  */
    
    /* εμφάνιση αποτελεσμάτων αναζήτησης του συντελεστή   */
    
	/* εδώ θα βάλετε τις εντολές για να εισάγετε τα όρια των σειρών του τριγώνου του Πασκάλ
	    που θα εμφανίσετε */
	
   /* κλήση της συνάρτησης printPascalsTriangle() ώστε να εμφανιστούν οι συγκεκριμένες σειρές */
   /* του τριγώνου του Πασκάλ που ζητήθηκαν */
    
  
  	/* εδώ θα βάλετε τις εντολές για να εισάγετε το επίπεδο της πυραμίδας του Πασκάλ */
	/*     που θα δημιουργήσετε και θα εμφανίσετε    */	

	/* κλήση της συνάρτησης createPascalsPyramid()   */    
	
	
		   
    system("pause");
    return 0;
    }


/* Δημιουργία τριγώνου Πασκάλ */
   void createPascalsTriangle(int pin[][N], int maxrow)
{
    int row,col; 
      
    do{ 
	       printf("\ndose megisto arithmo seiras trigonoy\t:");
     	   scanf("%d",&row); 
   	}while(row<0 || row>10);//elenkxos an isxyei h synthiki oti h 


// Iterate through every line and print integer(s) in it 

    for (row = 0; row < maxrow; row++) 
{ 
	// Every line has number of integers 
	// equal to line number
	int i; 
	for ( col = 0; col <= row; col++) 
	{ 
	// First and last values in every row are 1 
	if (row == col || col == 0) 
		pin[row][col] = 1; 
	// Other values are sum of values just 
	// above and left of above 
	else
		pin[row][col] = pin[row-1][col-1] + pin[row-1][col]; 
	printf("%d ", pin[row][col]);
	
	} 
	printf("\n");
}
  
}

/* Εκτύπωση τριγώνου Πασκάλ */
void printPascalsTriangle(int pin[][N], int arxi, int telos)
{  
        int row,col;
    
	   do{ 
	       printf("\neisigage grammi arxis eyroys:");
     	   scanf("%d",&arxi); 
	    }while(arxi<=0 || arxi >=10);//elenkxos an isxyei h synthiki oti h 
	
	   
	   do{ 
	       printf("\neisigage grammi teloys  eyroys\t:");
     	   scanf("%d",&telos); 
	    }while(telos<=3 || telos >=10);//elenkxos an isxyei h synthiki oti h 
	    
 for (row = arxi; row <=telos; row++) 
{ 
	// Every line has number of integers 
	// equal to line number
	
	for ( col = 0; col <= row; col++) 
	{ 
	// First and last values in every row are 1 
	if (row == col || col == 0) 
		pin[row][col] = 1; 
	// Other values are sum of values just 
	// above and left of above 
	else
		pin[row][col] = pin[row-1][col-1] + pin[row-1][col]; 
	printf("%d ", pin[row][col]);
	
	} 
	printf("\n");
    }      

    

}


/* Ψάξιμο τριγώνου Πασκάλ για εντοπισμό συντελεστή */
int searchingCoefficient(int pin[][N], int maxrow, int coef,int pinFound ) 
{



}


/*Δημιουργία επιπέδου πυραμίδας Πασκάλ*/
void createPascalsPyramid(int pin[][N], int maxrow, int pin2[][N], int layer)
{
	int row,col; 
     	
   	 	
   	  
     	
}








	

	













