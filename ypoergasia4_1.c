/*ypologismos_trigonoy_pascal_ypoergasia_1*/


#include <stdio.h>
#include <stdlib.h>
#define N 11


/* ���������� �������� ������ */
void createPascalsTriangle(int pin[][N], int maxrow);

/* �������� �������� ������ */
void printPascalsTriangle(int pin[][N], int arxi, int telos);

/* ������ �������� ������ ��� ��������� ���������� */
int searchingCoefficient(int pin[][N], int maxrow, int coef,int pinFound);

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
    
    system("chcp 1253>nul"); /* �������� ��������� ���������� */
    
	int maxrow = 11; 
    int pin[N][N];
    int arxi,telos,pinFound,coef;
	createPascalsTriangle(pin,maxrow); 
	printPascalsTriangle(pin,arxi,telos);
    searchingCoefficient(pin,maxrow,coef,pinFound);

	
    	
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

/* �������� �������� ������ */
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


/* ������ �������� ������ ��� ��������� ���������� */
int searchingCoefficient(int pin[][N], int maxrow, int coef,int pinFound ) 
{



}


/*���������� �������� ��������� ������*/
void createPascalsPyramid(int pin[][N], int maxrow, int pin2[][N], int layer)
{
	int row,col; 
     	
   	 	
   	  
     	
}








	

	













