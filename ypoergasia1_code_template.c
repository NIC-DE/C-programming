#include <stdio.h>
#include <stdlib.h>
#define N 11


/* ���������� �������� ������ */
void createPascalsTriangle(int pin[][N], int maxrow);

/* �������� �������� ������ */
void printPascalsTriangle(int pin[][N], int arxi, int telos);

/* ������ �������� ������ ��� ��������� ���������� */
int searchingCoefficient(int pin[][N], int maxrow, int coef, int pinFound[]);

/*���������� �������� ��������� ������*/
void createPascalsPyramid(int pin[][N], int maxrow, int pin2[][N], int layer);


/* ������ ��������� */
int main()
{
    int size, 	/* � ���������� �� ������ ����� ��� �������� ��� ������ */
	x, 			/* ��������� ���������� */
	rowX, 		/* 1 � 0, ������� �� �� �� ������� � ����������� */
	start, end, /* ���� ��� ��� ������ ��� �������� ��� ������ */
	i,j, 
	epip;       /* ������������ �� ������� ��������� ��� ������ */
    int ptPin[N][N], /* ������� ��� ������ */
	     xPin[N],    /* ���������� ������� ������������� ����������� */ 
		 ptPyr[N][N]; /* ������������ ������� ��������� ������ */
    
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


	
	 /* �������� ��������� ���������� */
	/* ��� �� ������ ��� ������� ��� �� �������� �� ������� ������ ������ ��� �������� ��� ������ */

	/* ����� ��� ���������� createPascalsTriangle() */

	/* ����� ��� ���������� printPascalsTriangle() ���� �� ����������� ���� �� ������ ��� ��������  */
    	
	/* ��� �� ������ ��� ������� ��� �� �������� ��� ���������� ��� �����������  */
	
    /* ����� ��� ���������� searchingCoefficient()  */
    
    /* �������� ������������� ���������� ��� ����������   */
    
	/* ��� �� ������ ��� ������� ��� �� �������� �� ���� ��� ������ ��� �������� ��� ������
	    ��� �� ���������� */
	
   /* ����� ��� ���������� printPascalsTriangle() ���� �� ����������� �� ������������� ������ */
   /* ��� �������� ��� ������ ��� ��������� */
    
  
  	/* ��� �� ������ ��� ������� ��� �� �������� �� ������� ��� ��������� ��� ������ */
	/*     ��� �� ������������� ��� �� ����������    */	

	/* ����� ��� ���������� createPascalsPyramid()   */    
	  	   
    system("pause");
    return 0;
    }


/* ���������� �������� ������ */
void createPascalsTriangle(int pin[][N], int maxrow)
{
   int row,col; 
      
	  /* ��� �� ������ ��� ������� ��� ��� ���������� ��� ���������� */
  
}

/* �������� �������� ������ */
void printPascalsTriangle(int pin[][N], int arxi, int telos)
{  
	int row,col; 
    

}


/* ������ �������� ������ ��� ��������� ���������� */
int searchingCoefficient(int pin[][N], int maxrow, int coef, int pinFound[] ) 
{
 int row, col; 
    
	/*  ��� �� ������ ��� ������� ��� ��� ���������� ��� ���������� */
    
}

/*���������� �������� ��������� ������*/
void createPascalsPyramid(int pin[][N], int maxrow, int pin2[][N], int layer)
{
	int row,col; 
     	
   	  /* ��� �� ������ ��� ������� ��� ��� ���������� ��� ����������   */	
     	
}



