#include<stdio.h>

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
    void total(int arr[],int N,int B)
    {   

      int total=0;
      int count=0;
      for(int i=0;i<N;i++){
        if(total<B)
        { 
          if(arr[i]<B)
          {
          total=total+arr[i];
          count=count+1;
          }
          
          
        }
        

      } 
      printf("the count:%d",count);   
       
   
}
 
int main()
{
    int N,B,arr[20];
    scanf("%d%d",&N,&B);
    for(int i=0;i<N;i++)
    {
    scanf("%d",&arr[i]);
    }
    sort(arr,N);
    total(arr,N,B);
    
}