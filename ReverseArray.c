//remove first and last //reverse
#include<stdio.h>
int reverse(int arr[],int n,int temp[]){
    int x=0;
  for(int i=n-1;i>=0;i--){
        temp[x++]=arr[i];
    }
    return x;
}
int check(int temp[],int n){
    printf("\nAfter removing First and Last number: ");
  for(int i=1;i<n-1;i++){
        printf("%d\t",temp[i]);
    }
}
int main(){
    int n,arr[100],temp[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int N=reverse(arr,n,temp);
    printf("After reversing Array: ");
    for(int i=0;i<N;i++){
        printf("%d\t",temp[i]);
    }
    check(temp,n);  
}