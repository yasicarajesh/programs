#include<stdio.h>
int main(){
    char str[100];
    int front ,rear,temp;
    printf("Enter the string:");
    scanf("%s",&str);
    int len=0;
    while(str[len]!='\0'){
        len=len+1;
    }
       for(int i=0;i<len;i++){
           if(str[i]!=str[len-i-1]){
               temp=1;
               break;
           }
       }
       if(temp){
           printf("%s Is not a palindromne\n",str);
       }
    else{
         printf("%s Is a palindromne\n",str);
    }
}