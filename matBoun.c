#include<stdio.h>
int main(){
    int n,m,k;
    scanf("%d%d",&n,&m);
    scanf("%d",&k);
    int mat[n][m];
    int count=0,count1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    //row
    for(int i=0;i<n;i=i+(n-1)){
        for(int j=0;j<m;j++){
            if(mat[i][j]==k){
                count1=count1+1;
            }
    }
    }
    //printf("%d",count);
    for(int i=0;i<m;i=i+(m-1)){
        for(int j=0;j<m;j++){
            if(mat[j][i]==k)
            {
                count=count+1;
            }
        }
        
    }
    if((count1==m*2)&&(count==n*2)){
        printf("YES");
    }
    else{
        printf("NO");
    }
}