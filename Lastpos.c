//input=>10 20 30 40 10
//10 =>10 20 30 40
#include<stdio.h>
int main(){
    int num,arr[100],k;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
       scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    int pos=num;
    for(int i=0;i<num;i++){
        if(arr[i]==k){
            pos=i;
        }
    }
    for(int i=0;i<num;i++){
        if(pos!=i){
          printf("%d",arr[i]);
            
        }
    }

}