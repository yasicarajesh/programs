#include<stdio.h>
int main(){
    int mat1[2][2],mat2[2][2],result[2][2];
    printf("Enter the elements of 1st matrix:\n");
     for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter a%d%d:",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
printf("Enter the elements of 2nd matrix:\n");
 for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter b%d%d:",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
 for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            result[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("sum of both matrix:\n");
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",result[i][j]);
            if(j==1){
                printf("\n");
            }
        }
    }
    return 0;
}