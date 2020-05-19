#include <stdio.h>
#include <stdlib.h>
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
    pstd=malloc(sizeof(struct student));
    if(pstd==NULL)
    {
    printf("Insufficient Memory, Exiting... ");
    return 0;
    }
    printf("Enter name: ");
    scanf("%s",&pstd->name);
    printf("Enter roll number: ");
    scanf("%d",&pstd->roll);
    printf("Enter percentage: ");
    scanf("%f",&pstd->perc);
    printf("Entered details are:\n");
    printf("Name: %s, Roll Number: %d, Percentage: %.2f ",pstd->name,pstd->roll,pstd->perc);
    return 0;
}
