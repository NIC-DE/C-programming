#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define megistos_arithmos_eisodou 10
const int kommatia_endeikti[13][7] = {{1,1,1,1,1,1,0},{0,1,1,0,0,0,0},{1,1,0,1,1,0,1},{1,1,1,1,0,0,1},{0,1,1,0,0,1,1},{1,0,1,1,0,1,1},{1,0,1,1,1,1,1},{1,1,1,0,0,0,0},{1,1,1,1,1,1,1},{1,1,1,1,0,1,1},{1,1,1,0,1,1,1},{1,0,0,1,1,1,0},{1,0,0,0,1,1,1}};
char endeiktis[13] = {'0','1','2','3','4','5','6','7','8','9','A','C','F'};
int eksodos[3][3];
char f[4][4*megistos_arithmos_eisodou];
const int thesi_komation[7][2] = {{0,1},{1,2},{2,2},{2,1},{2,0},{1,0},{1,1}}; //mapping array

//functions
void inputSanitize(char *Init,char *Final);
int detect(char t);
void adiasma_pinaka_eksodou(void);
void epeksergasia_eisodou(int *eisodos, int thesi);
void makeEncoding(int num);
void printEncoding(void);

int main()
{


    char eisodos[megistos_arithmos_eisodou];
    int temp[7];
    char buf[100];
    char input[megistos_arithmos_eisodou];
    int i=0;
    int j=0;

    //get the user input
    int index=0;
    printf("Insert input:");
    scanf("%[^\n]s" ,buf);
    inputSanitize(buf,eisodos);


    for(i=0; i<strlen(eisodos); i++)
        {


            index = detect(*(eisodos+i));
            for(j=0; j<7; j++)
                {
                    temp[j] = kommatia_endeikti[index][j];
                }
            epeksergasia_eisodou(temp,0);
            makeEncoding(i);


        }

        printEncoding();













    return 0;
}



void adiasma_pinaka_eksodou(void)
{


    int i=0;
    int j=0;
    for(i=0; i<3; i++)
        {

            for(j=0; j<3; j++)
                {

                    eksodos[i][j] = 0;

                }

        }


}

/*
    Print the final encoding

*/

void printEncoding(void)
{
    int i=0;
    int j=0;
    for(i=0; i<3; i++)
        {
            for(j=0; j<3*megistos_arithmos_eisodou; j++)
                {
                    printf("%c",f[i][j]);

                }
             printf("\n");

        }
     printf("-----------------------------");



}

/*
    Determine where the mapping of input should go.

*/

void epeksergasia_eisodou(int *eisodos, int thesi)
{

    int actual_i=0;
    int actual_j=0;
    int i = 0;
    for(i=0; i<7; i++)
        {
            actual_i = thesi_komation[i][0];
            actual_j = thesi_komation[i][1];
            eksodos[actual_i][actual_j] = *(eisodos+i);

        }


}

/*

    Encode a given binary sequence to a representable-printable format via the rule

*/

void makeEncoding(int num)
{

    //define graphics
    char space=' ';
    char vertical='|';
    char hor = '_';
    int i=0;
    int j=0;


 //itterate through the intermediate array
 for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
                {



                        //fill out the final array (f) via the intermediate array eksodos
                        if(eksodos[i][j] == 0)
                            {

                               f[i][j+num*3] = space;
                            }
                        else
                            {
                                if(j == 1)
                                    {

                                        f[i][j+num*3] = hor;

                                    }
                                else
                                    {


                                        f[i][j+num*3] = vertical;
                                    }
                            }


                }


        }

}

/*
Clear input from illegal character and spaces if any.

*/

void inputSanitize(char *Init,char *Final)
{
   char *given = Init;
   char *toReturn = Final;
   int ctr = 0;
   int i = 0;

   for(i=0; i<strlen(given); i++)
    {
        if( *(given + i) == 'A' || *(given + i) == 'F' || *(given + i) == 'C' || isdigit(*(given+i)))
        {
            *(toReturn+ctr) = *(given +i);
            ctr++;

        }


    }
    *(toReturn+ctr) = '\0';




}
/*
    Detect the position of any given character in the mapping sequence

*/

int detect(char t)
{
int j = 0;
    for(j = 0; j<strlen(endeiktis); j++)
        {
            if(*(endeiktis+j) == t)
                {
                    return j;
                }

        }


}



