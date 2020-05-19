#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Use the following structure definition.

    struct employee

    {

    char *e_name;

    int age;

    char *designation;

    int salary;

    };
    struct employee *ptp;
    ptp=malloc(sizeof(struct employee));
    // ptp->e_name=malloc(sizeof(char));
    // ptp->designation=malloc(sizeof(char));
    printf("Accessing members using pointer variable:\n");
    ptp->e_name="Lww";
    ptp->age=25;
    ptp->designation="Mff";
    ptp->salary=10000;
    printf("Name: %s\n",(ptp->e_name));
    printf("Age: %d\n",(ptp->age));
    printf("Designation: %s\n",(ptp->designation));
    printf("Salary: %d\n",(ptp->salary));    
    

    return 0;
}
