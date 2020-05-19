//Sum of the Array Elements using Pointer
#include<stdio.h>
#include<stdlib.h>
int main(){
int *a,n,total=0;
printf("Enter the size of an Array:");
scanf("%d",&n);
a=malloc(sizeof(int));
printf("Enter the element of the list:");
for(int i=0;i<n;i++)
{
  scanf("%d",a+i);
}
for(int i=0;i<n;i++){
total=total + *(a+i);
}
printf("The total value:%d",total);
return 0;
}