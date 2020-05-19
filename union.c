#include <stdio.h>
#include <string.h>
union emp
{
char name[3];
int age;
float bs;

};
int main()
{

union emp e;
e.bs=100.50;
e.age = 25;
strcpy(e.name,"sac");

printf("%s",e.name);
printf("\n%d",e.age);
printf("\n%f",e.bs);
return 0;
}