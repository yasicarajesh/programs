#include<stdio.h>
int main(){
    int mat[4][4];
    int count,count1,h,x;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    // for(int i=0;i<4;i++){
    //     int sum=0;
    //     for(int j=0;j<4;j++){
    //        sum=sum+mat[i][j];
    //     }
    //     if(sum>count){
    //       count=sum;
    //       h=i+1;
       // printf("%dsum of row:%d\n", h,count);
       // }
    //}
    //printf("%d max of row:%d\n", h,count);
    
    // for(int i=0;i<4;i++){
    //     int sum1=0;
    //     for(int j=0;j<4;j++){
    //        sum1=sum1+mat[j][i];
    //     }
        //printf("max of %d col:%d\n",(i+1),sum1);  //1 2 3 4
                                                    //2 2 3 4
                                                    //3 2 3 4
    //                                                 //4 2 3 4
    //     if(sum1>count1){
    //        count1=sum1;
    //         x=i+1;
    //     }
       
    // }
    //printf("%d max of col:%d\n",x,count1);
    // int temp;
    // if(count>=count1){
    //     temp=count;
    // }
    // else{
    //     temp=count1;
    // }

    //printf("max of col:%d\n",count1);
     int left=0,right=0;
     int i=0;
     int j=0;
     
     for(int i=0,j=0;i<4;i++,j++){
         left=left+mat[i][j];
     }
     
     for(int i=0,j=3;i<4&&j>=0;i++,j--){
         right=right+mat[i][j];

     }
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         if(i==j){
    //             left=left+mat[i][j]; //1+2+3+4=10
    //         }
    //         if((i+j)==(4-1)){
    //             right=right+mat[i][j]; //4+3+2+4=13
    //         }
    //     }
    // }
    //printf("%dLEFT :",left);
    //printf("%dRight:",right);
    int check;
    if(left>=right){
        check=left;
    }
    else{
        check=right;
    }
    //  int greater;
    //  if(check>=temp){
    //      greater=check;
    //  }
    //  else{
    //      greater=temp;//27
    //  }
     //printf("Greatest value:%d",greater);
    //  if(greater==count){
    //      printf("The row %d greater:%d",h,greater);
    //  }
    //  else if(greater==count1){
    //      printf("The col %d is greate:%d",x,greater);
    //  }
     if(check==left){
         printf("The left diagonal is greater:%d",check);

     }
     else{
         printf("The right diagonal is greater:%d",check);
     }
   
}