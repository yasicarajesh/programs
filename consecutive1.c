#include<stdio.h>
int main(){
    
    char str[100];
    scanf("%s",&str);
    int len=0;
    int x='1',y='0';
    int count=0,max=0;
    while(str[len]!='\0'){
        len=len+1;
    }
    for(int i=0;i<len;i++){
        
         if(str[i]==x){
             count=count+1;
             if(count>max){
                 max=count;
             }
         }
         else{
             count=0;
         }
    }
    if(max==1){
        printf("-1");
    }
    else{
    printf("%d",max);
    }
}
             
            


