#include<stdio.h>
int main(){
    int mat[4][4];
    int arr[100];
    int k,check,row,col,best,pos1,pos2;
    int n;
    printf("Enter the value n:");
    scanf("%d",&n);
    printf("Enter the value of array:");
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
    }
    int temp;
     printf("Enter the value mat:");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int m=0;m<n;m++){
        int check2=0;
        int count=0;
        int count1=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[m]==mat[i][j] && check2!=1){
                pos1=i;
                pos2=j;
                check=mat[i][j];
                //mat[i][j]=0;
                check2=1;
                row=i+1;
                col=j+1;
                }
        }
    }
    
   for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(mat[i][j]==check && (i!=pos1 && j!=pos2)){            
                count=count+1;
                if((i+1==row)||(j+1==col)){
                   count1=count1+1;
                }
                else  {
                    for(int i=pos1,j=pos2;i<4&&j>=0;i++,j--) //right
                   {
                     if(mat[i][j]==check){
                        count1=count1+1;
                    }
                 }
                 for(int i=pos1,j=pos2;i<4&&j<4;i++,j++){   //left
                       if(mat[i][j]==check){
                            count1=count1+1;
                      }
                }
                }
            }
            
        }
        }
                                           // 1 2 3 4
                                            // 4 3 2 4
                                            // 5 4 6 1
                                            // 3 4 6 4
        if(count==count1)
         {
               printf("yes");
        }
        else
        {
              printf("no");
        }
    
        
  
     printf(" count %d",count);
     printf(" count1 %d",count1);
     }
}


