//Dynamic memory allocation using single pointer
#include<stdio.h>
#include<stdlib.h>
int main(){
   int a=3,b=4,count=0;
   int *arr=(int *)malloc(a*b*sizeof(int));
   for(int i=0;i<a;i++){
       for(int j=0;j<b;j++){
           *(arr + i*b +j)=++count;
       }
   }
    for(int i=0;i<a;i++){
       for(int j=0;j<b;j++){
           printf("%d\t",*(arr + i*b +j));
       }
   }
   return 0;
}