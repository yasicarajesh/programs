//rotate upto the given index
#include<stdio.h>
int main(){
    int n,arr[100],r,temp[100],x=0,y=0;
    scanf("%d",&n);
    printf("Enter the array value");
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
    }
    printf("Enter the rotation element");
    scanf("%d",&r);
    for(int i=0;i<r;i++){
         temp[x++]=arr[i];
    }
    for(int i=r;i<n;i++){
        arr[y++]=arr[i];
    }
    for(int i=0;i<x;i++){
         arr[y++]=temp[i];
    }
    for(int i=0;i<y;i++){
         printf("%d",arr[i]);
    }
}