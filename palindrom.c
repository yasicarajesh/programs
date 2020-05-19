//input=>121
//reverse=>121
//input =reverse=>palindrome
#include<stdio.h>
int main(){
    int n,rev,num,check;
    printf("Enter the number:");
    scanf("%d",&n);
    check=n;
    while(n!=0){
        num=n%10;
        rev=rev*10+num;
        n=n/10;

    }
    if(check==rev){
    printf("%d is a palindrome",check);
    }
    else{
        printf("%d is not a palindrome",check);
    }
}