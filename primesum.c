#include<stdio.h>
int main(){
    int num, arr[100];
    scanf("%d",&num);
    int i=2;
    int temp;
    int x=0;
    int count=0;
    
    for(int i=2;i<=num;i++){
        for(int j=2;j<=i;j++){
           if(i==j){
               
            arr[x++]=i;
     }
            else if(i%j==0){
                break;
            }
            
        }
    }
    for(int i=0;i<x;i++){
        if(arr[i]+arr[i]==num){
            count=count+1;
        }
    for(int m=i+1;m<x;m++){
        if((arr[i]+arr[m]==num)){
            count=count+1;
            //printf("\n%d,%d",arr[i],arr[m]);
            }
    }
    }
    printf("%d",count);
    
    
}