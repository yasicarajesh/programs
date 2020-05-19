#include<stdio.h>
int fun( int pos[],int i,int x){
    int result =0;
    for(int m=0;m<x;m++){
      if(pos[m]==i){
        result=1;
        break;
      }
    }
    return result;
}
void multiplesToBeginning(int arr[], int N)
{ 
    int temp[100],x=0,y=0,pos[100];
   for(int i=0;i<N;i++){
       if(arr[i]%10==0){
          pos[x++]=i;
          temp[y++]=arr[i];
       }
   }
   for(int i=0;i<N;i++){
           if (!fun(pos,i,x))
           {                       //0 3 4  10 85 41 50 30
              temp[y++]=arr[i];
           }
       }
  for(int i=0;i<y;i++){
       arr[i]=temp[i];
   }
   for(int i=0;i<N;i++){
    printf("%d\n",arr[i]);
  }
}
int main(){
  int N,arr[N];
  scanf("%d",&N);
  for(int i=0;i<N;i++){
      scanf("%d",&arr[i]);
  }
  
  multiplesToBeginning(arr, N);

}