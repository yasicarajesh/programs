//array pointer
#include<stdio.h>
#include<stdlib.h>
int main(){
    int r=4,s=3;
    int *arr[r];
    for(int i=0;i<r;i++){
        arr[i]=(int *)malloc(r*sizeof(int));
    }
   int  count=100;
    for(int i=0;i<r;i++){
        for(int j=0;j<s;j++){
            arr[i][j]=++count;
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<s;j++){
            printf("%d\t",arr[i][j]);
        }
    }
    return 0;


}