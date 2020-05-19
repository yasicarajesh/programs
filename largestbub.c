#include<stdio.h>
#include <stdlib.h>
void sort(int arr[],int N){
    int temp;
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-1;j++){
            if(arr[j]>=arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void largest(int arr[],int N,int K){
    for(int i=0;i<N;i++){
    if(i==N-K){
        printf("%d",arr[i]);
    }
}
}
int main()
{
   int arr[100];
   int N;
   int K;
   scanf("%d",&N);
   scanf("%d",&K);
   for(int i=0;i<N;i++){
       scanf("%d",&arr[i]);
   }
   sort(arr,N);
   largest(arr,N,K);
}   