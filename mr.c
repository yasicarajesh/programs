#include<stdio.h>
int repeate(int arr[],int size){
    int i,j,res;
    int count=1;
    int maxcount=1;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count=count+1;
                res=arr[i];

            }
            else if(count>=maxcount){
                    maxcount=count;
                    count=1;
                }

            }
        }
        if(count>maxcount){
            maxcount=count;
            res=arr[i];
        }
        printf("\n%d",res);
        printf("\n%d",maxcount);
        
}
int main(){
    int size,arr[100];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
   printf("%dRepeate:",repeate(arr,size));
   return 0;
    
    }