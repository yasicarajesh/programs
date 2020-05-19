//3D
#include<stdio.h>
int main(){
   int check[2][3][2];
   printf("Enter 12 value:\n");
   for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
           for(int k=0;k<2;k++){
               scanf("%d",&check[i][j][k]);
           }
       }
   }
   printf("Displaying values:\n");
   for(int i=0;i<2;i++){
       for(int j=0;j<3;j++){
           for(int k=0;k<2;k++){
               printf("test[%d][%d][%d]=%d\n",i,j,k,check[i][j][k]);
           }
       }
   }
}