#include<stdio.h>
#include<stdlib.h>
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printarray(int arr[],int N){
    for(int i=0;i<N;i++){
        printf("%d\n",arr[i]);
        
    }
}
void largest(int arr[],int k,int n){
    for(int i=0;i<n-1;i++){
        if(i==n-k){
            printf("%dlargest:",arr[i]);
        }
    }
}
int duplicate(int arr[],int n){
    if(n==0||n==1)
    return n;
    int temp[n];
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            temp[j++]=arr[i];
            
        }
      
    }
    temp[j++]=arr[n-1];
    

for(int i=0;i<j;i++){
    arr[i]=temp[i];
}
return j;
}
int main(){
    int arr[100];
    int n,k;
    int N;
    scanf("%d",&n);
    scanf("%d",&k);
     for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
     }
    sort(arr,n);
   
    N=duplicate(arr,n);
    printf("The sorted array:");
    printarray(arr,N);
    //largest(arr,k,n);
    printf("%d",arr[N-k]);

}