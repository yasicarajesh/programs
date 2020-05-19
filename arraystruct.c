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
    // use the following structure definition for array of structure.

    // Remove the comment line and execute the c program.

    struct employee

    {

    int emp_id;

    char name[50];

    char designation[50];

    int salary;

    };
    // struct employee *ptp;
    // ptp=malloc(sizeof(struct employee));
    struct employee ptp[3];
    
    for(int i=0;i<3;i++){
        scanf("%d",&ptp[i].emp_id);
        scanf("%s",ptp[i].name);
        scanf("%s",ptp[i].designation);
        scanf("%d",&ptp[i].salary);


    }
    
    for(int i=0;i<3;i++){
        printf("Employee %d\n",i+1);
        printf("%d",ptp[i].emp_id);
        printf(" %s",ptp[i].name);
        printf(" %s",ptp[i].designation);
        printf(" %d",ptp[i].salary);

        printf("\n");
    }
    
    
    
    

    return 0;
}
    
    