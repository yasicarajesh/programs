#include<stdio.h>
int max(int arr[100],int j,int n,int temp[100],int x)
{   
   if(j<n){
   int sum=0;
   for(int i=0;i<n;i++){
    if(i!=j){
      sum=sum+arr[i];
       }
   }
   temp[x]=sum;
   j=j+1;
   max(arr,j,n,temp,x+1);
   }
   
}
int main(){
    int n=5,arr[100],temp[100],j=0,x=0,min,maxi;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max(arr,0,n,temp,0);
    min=temp[0];
    maxi=temp[0];
    for(int i=1;i<n;i++){
        if(temp[i]<min){
            min=temp[i];
        }
        else if(temp[i]>maxi){
            maxi=temp[i];
        }
    }
    printf("%d %d",min,maxi);
    return 0;
}
