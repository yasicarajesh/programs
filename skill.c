#include<stdio.h>
int main(){
    char ch[100];
    int arr[100];
    int i;
    arr[i]=0;
    int count=0;
    scanf("%s",&ch[100]);
    switch(ch[100]){
       case 'a'...'z':
          arr[i++]=1;   
    }
     for(int i=0;i<=25;i++){
         if(arr[i]!=1){
             count=count+1;
         }
         else{
             printf("NO");
             break;
         }

     }
     if(count==26){
          printf("yes");
     }
    //printf("%d",count);
}
    