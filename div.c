#include<stdio.h>
int main(){
    int n1,n2,temp,count;
    count=0;
    scanf("%d",&n1);
    scanf("%d",&n2);
    temp=n1;
    while(temp!=0){
        temp=temp-n2;
        count=count+1;
    }
    printf("%d",count);
}