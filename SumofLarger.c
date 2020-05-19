#include<stdio.h>
int main(){
    int n;
    long long int arr[1000],m=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    for(int i=0;i<n;i++){
       m=m+arr[i];
    }
    printf("%lld",m);
} 