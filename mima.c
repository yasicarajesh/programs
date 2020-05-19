#include<stdio.h>
int main(){
    int arr[100],min,size,pos,max,pos2;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    pos=1;
    max=arr[0];
    pos2=1;
    for(int i=1;i<size;i++)
     {
         if(arr[i]<=min)
         {
             min=arr[i];
             pos=i+1;
         }
         if(arr[i]>=max)
         {
             max=arr[i];
             pos2=i+1;
         }
     }
     printf("\n%d" "\n%d",pos,pos2);
     return 0;
}