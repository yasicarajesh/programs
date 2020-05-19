#include<stdio.h>
int checkpos(int pos[],int i,int k ){
    int result=1;
    for(int m=0;m<k;m++){
        if(pos[m]==i){
            result=0;
            break;
        }
    }
    return result;
}
int main(){
    int arr[100],b[100],temp[200],temp1[200];
    int n,m,x=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
         temp[x++]=arr[i];
    }
    for(int i=0;i<m;i++){
        temp[x++]=b[i];
    }
    // for(int i=0;i<x;i++){
    //     printf("%d",temp[i]);
    // }
    int y=0;
    for(int i=0;i<x;i++){
        if(checkpos(temp1,temp[i],y)){
           printf("%d\t",temp[i]); 
        }
        temp1[y++]=temp[i];
        //temp1=>10,20,30,40,50,90
        }
    
}
// 10 20 30 40 50 10 20 30 50 90