#include<stdio.h>
int main(){
    int arr[100],n,temp,pos[100],x=0,i,j;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     int count;
     for(int i=0;i<n;i++){
         pos[x++]=arr[i];
     }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++){
           if(pos[i]>pos[j]){
                temp=pos[i];
                pos[i]=pos[j];
                pos[j]=temp;
            
           }
          }
          
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(pos[i]==arr[j]){
                printf("%d",j+1);
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     printf("%d",arr[i]);
    // }
}
//5
//10 20 40 5 60
// 4 1 2 3 5