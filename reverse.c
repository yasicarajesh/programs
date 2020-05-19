#include<stdio.h>
int main()
{
    int num,num1;
    int rev=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0){
        num1=num%10;
        rev=rev*10+num1;
        num=num/10;
    }
    printf("Reverse of number:%d",rev);
    return 0;
}