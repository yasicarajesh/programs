#include<stdio.h>
int main(){
    int t1=0,t2=1,temp,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("%d",t1);
    temp=t1+t2;
    t1=t2;
    t2=temp;
    }
}