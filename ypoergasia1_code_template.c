#include <stdio.h>
#include <stdlib.h>
#define N 11


/* Δημιουργία τριγώνου Πασκάλ */
void createPascalsTriangle(int pin[][N], int maxrow);

/* Εκτύπωση τριγώνου Πασκάλ */
void printPascalsTriangle(int pin[][N], int arxi, int telos);

/* Ψάξιμο τριγώνου Πασκάλ για εντοπισμό συντελεστή */
int searchingCoefficient(int pin[][N], int maxrow, int coef, int pinFound[]);

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
    
    system("chcp 1253>nul");
	{ 
// An auxiliary array to store 
// generated pscal triangle values 
int maxrow;
int pin[maxrow][maxrow];
// Iterate through every line and print integer(s) in it 
int row;
for (size = 0; size < maxrow; size++) 
{ 
	// Every line has number of integers 
	// equal to line number
	int i; 
	for ( i = 0; i <= size; i++) 
	{ 
	// First and last values in every row are 1 
	if (size == i || i == 0) 
		pin[size][i] = 1; 
	// Other values are sum of values just 
	// above and left of above 
	else
		pin[size][i] = pin[row-1][i-1] + pin[size-1][i]; 
	 
	} 

	
	int maxrow = 11; 
	
	 	createPascalsTriangle(pin,maxrow); 	
	 	
	 	
	

} 
} 


	
	 /* Εισαγωγή Ελληνικών χαρακτήρων */
	/* εδώ θα βάλετε τις εντολές για να εισάγετε το μέγιστο αριθμό σειράς του τριγώνου του Πασκάλ */

	/* κλήση της συνάρτησης createPascalsTriangle() */

	/* κλήση της συνάρτησης printPascalsTriangle() ώστε να εμφανιστούν όλες οι σειρές του τριγώνου  */
    	
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
      
	  /* εδώ θα βάλετε τις εντολές για την δημιουργία της συνάρτησης */
  
}

/* Εκτύπωση τριγώνου Πασκάλ */
void printPascalsTriangle(int pin[][N], int arxi, int telos)
{  
	int row,col; 
    

}


/* Ψάξιμο τριγώνου Πασκάλ για εντοπισμό συντελεστή */
int searchingCoefficient(int pin[][N], int maxrow, int coef, int pinFound[] ) 
{
 int row, col; 
    
	/*  εδώ θα βάλετε τις εντολές για την δημιουργία της συνάρτησης */
    
}

/*Δημιουργία επιπέδου πυραμίδας Πασκάλ*/
void createPascalsPyramid(int pin[][N], int maxrow, int pin2[][N], int layer)
{
	int row,col; 
     	
   	  /* εδώ θα βάλετε τις εντολές για την δημιουργία της συνάρτησης   */	
     	
}



