#include<stdio.h>
int main(){
    int n1,n2,temp;
    temp=0;
    n1=11;
    n2=2;
    while(n2!=0){
        temp=temp+n1;
        n2--;
    }
    printf("%d",temp);
}