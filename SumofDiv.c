//  SUM OF NUMBER WHICH IS DIVISIBLE BY 2&3
#include<stdio.h>
int main(){
    int num,N;
    printf("Enter the value of N:");
    scanf("%d",&N);
    num=1;
    long long int sum=0;
    while(num<=N){
        if((num%2==0)|| (num%3==0)){
            sum=sum+num;
        
        }
        num++;
        
    }
    printf("%lld",sum);
    return 0;
}