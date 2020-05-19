#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    struct student

     {

     char name[30];

     int roll;

     float perc;

     };

     struct student *pstd;

     /*Allocate memory dynamically*/

     pstd=(struct student*)malloc(1*sizeof(struct student));

     if(pstd==NULL)

     {

    
     printf("Insufficient Memory, Exiting... ");
     

     return 0;

     }

     /*read and print details*/

     //printf("Enter name: ");

      gets(name);

     //printf("Enter roll number: ");

     scanf("%d",&pstd->roll);

    // printf("Enter percentage: ");

     scanf("%f",&pstd->perc);

    
     printf("Entered details are:\n");
     

     printf("Name: %s, Roll Number: %d, Percentage: %.2f ",pstd->name,pstd->roll,pstd->perc);
     

    return 0;
}
