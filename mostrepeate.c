#include<stdio.h>

    void sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size-1;i++){
        printf("%d\n",arr[i]);
        
    }
}
int main(){
    int arr[100],i,j,size,n,res;
    int count=1;
    int maxcount=1;
    scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,size);
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count=count+1;
            }
            else if(count>=maxcount)
            {
                maxcount=count;
                res=arr[i];
                count=1;
                
            }
            }
        }
        // if(count>maxcount)
        // {
        //     maxcount=count;
        //     res=arr[i];

        // }

        
        printf("\n%d",res);
        printf("\n%d",maxcount);
    }

