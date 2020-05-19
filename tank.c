#include<stdio.h>
int main(){
    int n,arr[100],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sum=2;
    int j=0;
    printf("sep1:%d",sum);
    for(int i=1;i<n;i++){
      sum=sum+2;
      if(arr[i-1]<arr[i]){
           j=j+4;
          sum=sum+j;
        // printf("sep:%d",sum);
        }   
        else if(arr[i-1]>arr[i]){
            sum=sum+2;
        } 
    }
    printf("%d",sum);

}