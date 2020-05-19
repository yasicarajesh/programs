#include<stdio.h>
int main(){
    int n,m,h,count=0;
    scanf("%d%d",&n,&m);
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
           
           if(mat[i][j]==1){
             sum=sum+1;
           }

        }
        if(count<sum){
            count=sum;
        }
    }
    printf("Max count of 1 :%d",count);

}