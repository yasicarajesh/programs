// 10 20 3 5 50 =>88
// 18 18 18 17 17=>88
#include<stdio.h>
int check(int arr[],int n,int count,int total){
  for(int i=0;i<n;i++){
     count=count+arr[i];
  }
   return count; 
  
}
int printarray(int arr[],int n){
  for(int i=0;i<n;i++){
     printf("\n%d",arr[i]);
  }
}
int main(){
  int arr[100],n;
  scanf("%d",&n);
  int count=0;
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
     count=count+arr[i];
  }
  int total=count;
  printf("total:%d",total);
  count=count/n;
  printf(" div:%d",count);
   for(int i=0;i<n;i++){
     arr[i]=count;
  }
  int N=check(arr,n,0,total);
  printf("\nafter check:%d",N);
  if(total==N){
     printarray(arr,n);
  }
  else
  {
    int s=total-N;
     for(int i=0;i<s;i++){
       arr[i]=arr[i]+1;

  }
  printarray(arr,n);
  }
   
  }

  
