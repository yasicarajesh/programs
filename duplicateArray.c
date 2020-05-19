#include<stdio.h>
int duplicate(int arr[],int n){
    int temp[n];
    int k;
    int count=0;
    int j=0;
    for(int i=0;i<n;i++)
    {  
        if(arr[i]==k){
            count=count+1;
            if(count>1){
            i=i+1;
        }
        }
        
        
        if((arr[i]!= k) || (arr[i]==k))
        {
            temp[j++]=arr[i];
            
        }
    
    }

    for(int i=0;i<j;i++){
        arr[i]=temp[i];
    }
    return j;

}
    
int main(){
    int arr[100];
    int n,k;
    int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++){
       if(arr[i]==k){
          count=count+1;  
       }
    }
    if(count>=1){
     int N= duplicate(arr,n);
    
       for(int i=0;i<N;i++){
          printf("%d",arr[i]);
        
         }
    }
    else{
      for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    }
}