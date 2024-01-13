#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define DEPTS 2
#define EXERS 2
void printRecords(float *rec);
void insertGrades(float *rec);
int isLegalGrade(float g);
void findStudentMedian(float *rec, float *m);
void findCourseMedian(float *rec, float *m);
void findExcluded(float *rec);


int main()
{
    float Records[DEPTS][STUDENTS][EXERS];
    float mValues[DEPTS][STUDENTS];
    float mVals[DEPTS];

    insertGrades(Records);
    printRecords(Records);
    findStudentMedian(Records, mValues);

    findCourseMedian(mValues, mVals);
    findExcluded(mValues);

    return 0;
}
/*
Checks if the givn grade is between 0-10, returns 1 if given grade is fine, 0 else!


*/
int isLegalGrade(float g)
{
    if((g >= 0) && (g <= 10))
        return 1;
    return 0;


}
void printRecords(float *rec)
{



    // make a copy, never lose head
    float *curr = rec;
    int i = 0;
    int j = 0;
    int l =0;


    for(l=0; l <DEPTS; l++)
    {
        for(j=0; j<STUDENTS; j++)
        {

            for(i=0; i<EXERS; i++)
                {

                    printf("Dept %d Student %d Exercise %d Mark %f\n",l+1,j+1,i+1,*(curr+i));


                }
            // pointer moving by EXERS*sizeof(curr)
            curr = curr + EXERS;


        }


    }

}

void insertGrades(float *rec)
{

    // make a copy, never lose head
    float *curr = rec;
    int i=0;
    int j =0;
    int l =0;


    for(l=0; l <DEPTS; l++)
    {
        for(j=0; j<STUDENTS; j++)
        {

            for(i=0; i<EXERS; i++)
                {
                    float grade;
                    printf("Insert Grade:(Dept %d Student %d Exercise %d)",l+1,j+1,i+1);
                    scanf("%f",&grade);
                    while(!isLegalGrade(grade))
                        {
                            printf("Illegal Grade, Try Again\n");
                            printf("Insert Grade: (Dept %d Student %d Exercise %d)",l+1,j+1,i+1);
                            scanf("%f",&grade);
                        }

                    *(curr+i) = grade;


                }
            // pointer moving by EXERS*sizeof(curr)
            curr = curr + EXERS;


        }


    }



}

void findStudentMedian(float *rec, float *m)
{
     // make a copy, never lose head
    float *curr = rec;
    float *median = m;
    float sMed = 0;
    int j=0;
    int i=0;
    int l=0;

    for(l=0; l <DEPTS; l++)
    {
        for(j=0; j<STUDENTS; j++)
        {
            sMed = 0;
            for(i=0; i<EXERS; i++)
                {
                    sMed = sMed + *(curr+i);


                }
            // pointer moving by EXERS*sizeof(curr)
            curr = curr + EXERS;

            *median = sMed/EXERS;

            printf("Mean Grade for Student %d Dept %d: %f\n",j+1,l+1,*median);

            median = median+1;

        }






    }



}

void findCourseMedian(float *rec, float *m)
{
    float dMed = 0;
    int i = 0;
    int j =0;




    for(j=0; j<DEPTS; j++)
        {
            dMed =0;
            for(i=0; i<STUDENTS; i++)
            {
                dMed = dMed + *(rec+i+j*STUDENTS);

            }
            *(m + j) = dMed/STUDENTS;
            printf("Mean Grade for Class: %d = %f\n", j+1,*(m+j));

        }






}

void findExcluded(float *rec)
{
    float excl_dept[2] = {0};
    int i=0;
    int j=0;
    for(i=0; i< DEPTS; i++)
        {
            for(j=0; j<STUDENTS; j++)
                {
                    if(*(rec+j+i*STUDENTS) < 5)
                        {
                                excl_dept[i] = excl_dept[i] + 1;
                        }

                }

        }

   printf("Excluded/Dept  %f %f\n", excl_dept[0]/STUDENTS,excl_dept[1]/STUDENTS);
   printf("Total Excluded: %.1f\n", excl_dept[0]+excl_dept[1]);


}
