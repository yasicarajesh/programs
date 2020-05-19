#include<stdio.h>
int fib(int i,int t1,int t2,int n){
     int temp;
    if(i<=n){
        printf("%d",t1);
        //return t1;
        temp=t1+t2;
        t1=t2;
        t2=temp;
        return fib(i+1,t1,t2,n);
    }
}
int main(){
    int n;
     scanf("%d",&n);
    int vari=fib(0,0,1,n);
     printf("%d",vari);
}

