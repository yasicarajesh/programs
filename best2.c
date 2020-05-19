#include<stdio.h>
int matrix(int arr[],int x, int j){
    int result=1;
    for(int i=0;i<x;i++){
        if(arr[i]==j){
            result=0;
        }
    }
    return result;
}
int main(){
    int mat[100][100],n,count=1,arr[100],x=0,check,count1=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix(arr,x,mat[i][j])){
              arr[x++]=mat[i][j];
            }
        
        }
    }
    for(int m=0;m<x;m++){
          int i=0,j=0;
           if(arr[m]==mat[i][j]){
                    if(mat[i][j] == arr[m] )//row 0 0
                    {
                        count1++;
                        
                    }
                     j++;
                    //printf("J value: %d",j);
                    if(mat[i][j]== arr[m])// 0 1//rowad
                    {
                        count1++;
                        
                    }
                    i++;
                    if(mat[i][j]== arr[m])// 1 1//rowad
                    {
                        count1++;
                        
                    }
                    j--;
                    if(mat[i][j]== arr[m])// 1 1//rowad
                    {
                        count1++;
                        
                    }
                
           }
           printf("%d",count);
        }
    

}