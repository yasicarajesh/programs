#include<stdio.h>
int main(){
    int mat[100][100],n,count=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==mat[i][j+1])
            { 
                count++;
                i=i;
                j=j+1;
            }
            else if(mat[i][j]==mat[i+1][j])
            {
                count++;
                i=i+1;
                j=j;
                //printf("COUNT2:%d",count);
            }
            else if(mat[i][j]==mat[i+1][j+1])
            {
               count++;
               i=i+1;
               j=j+1;
               //printf("COUNT3:%d",count);
            }
            else if(mat[i][j]==mat[i-1][j]){
                count++;
                i=i-1;
                j=j;
                //printf("COUNT3:%d",count);
            }
            else if(mat[i][j]==mat[i][j-1]){
                count++;
                i=i;
                j=j-1;
                //printf("COUNT4:%d",count);
            }
            // else if(mat[i][j]==mat[i-1][j-1]){
            //     count++;
            //     i=i-1;
            //     j=j-1;
            //     printf("COUNT5:%d",count);
            //     //break;
            // }
        }
    }
    printf("%d",count);

}