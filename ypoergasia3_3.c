#include <stdio.h>
#include <stdlib.h>
#include <math.h> //fabs() is in there
#define THRESHOLD 0.0001
int inputCheck(int num);


int main()
{
    int n; //input from user will be stored here

    do  {
            printf("\nInsert a number (0-1000) , negative to terminate:");
            scanf("%d", &n); //get the input
            while( !inputCheck(n))
                {
                     printf("\nNumber should be less than 1000, insert a number:");
                     scanf("%d", &n); //get the input
                }

            // estimating via function
            estimateSquare(n);

        }while(n > 0);
    return 0;
}

/*
    Checks if given number is less than 1000 and greater than 0, if yes returns 1, else 0.
*/
int inputCheck(int num)
{
    if (num < 1000)
        return 1;
    return 0;


}


int estimateSquare(int n)
{
    float x,x_old,y;
    double err;

   //just checking input
   if( n < 0)
    {
        return 0;
    }


   int ctr = 0;

    do
        {

             y = (float)n;
             if(ctr != 0)
                {
                    x_old = x;
                }
             else
                {
                     x_old = y;
                }


             x = (x_old + y/x_old)/2;
             err = fabs(x-x_old);
             if(err > THRESHOLD)
                printf("Estimation: %f Absolute Error:%f\n", x, err);
             ctr++;



        }while(err > THRESHOLD);


        printf("Final estimation is: %f\n", x);

}
