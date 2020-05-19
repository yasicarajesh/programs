#include<stdio.h>
int main(){
    char str[100];
    int front ,rear,temp;
    scanf("%s",&str);
    int len=0;
    while(str[len]!='\0'){
        len=len+1;
    }
        for(front=0,rear=len-1;front<rear;front++,rear--)
        {
            temp=str[front];
            str[front]=str[rear];
           str[rear]=temp;
        }
    printf("%s\n",str);
}