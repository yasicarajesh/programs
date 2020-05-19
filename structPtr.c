//C program using structure and pointer 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct student
 {
   char *name;
   int year;
   char *program;
   char *subjects[5];
 };
  struct student stu = {"priya",3,"CSE",{"Maths", "english", "networks", "TOC", "AI" }};
  struct student *ptr_stu = &stu;
  printf("Name: %s\n", ptr_stu->name);
  printf("Year: %d\n", ptr_stu->year);
  printf("Program enrolled: %s\n", ptr_stu->program);
  for(int i = 0; i < 5; i++)
 {
      printf("Subject : %s\n", ptr_stu->subjects[i]);
}

    return 0;
}
