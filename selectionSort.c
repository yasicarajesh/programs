#include<stdio.h>
  void printarray(int arr[],int n) {
    for(int i=0;i<n;i++){
            printf("%d\n",arr[i]);
        }
    }
  void sort(int arr[],int n)
  {
      int min,index,temp,j;
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
              min=j;
            }
        }              
    if(min != i){
       temp=arr[i];
       arr[i]=arr[min];
       arr[min]=temp;
    }
    }
  }
   int main(){
        int arr[]={5,2,10,15,6,9,4,6};
        int n=8;
        sort(arr,n);
        printf("the sorted elements are:");
        printarray(arr,n);
        return 0;
    }

    
    
    