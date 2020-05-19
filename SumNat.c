#include<stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}
int main(){
    int n,check;
    scanf("%d",&n);
    check=sum(n);
    printf("Sum of the number %d is %d",n,check);

}