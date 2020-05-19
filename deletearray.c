//delete the duplicate element in unsorted array(10 20 30 10 40)=>(10 20 30 40)
#include<stdio.h>

    int delete(int arr[],int num){
    for(int i=0;i<num;i++){
        for(int j=0;j<=num;j++){
        if(arr[i]==arr[j]){
            num--;
            for (int k=j;k<num;k++){
               arr[k]=arr[k+1];
            //pos=j;
            }
            
        }
        }
    }
    return num;
    }
    int main(){
    int num,arr[100],k,temp[100];
    scanf("%d",&num);
    for(int i=0;i<num;i++){
       scanf("%d",&arr[i]);
    }
    //scanf("%d",&k);
    int N=delete(arr,num);
    
    for(int i=0;i<N;i++){
        
          printf("%d",arr[i]);
            
        
    }

}