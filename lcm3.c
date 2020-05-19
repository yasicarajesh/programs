#include<stdio.h>
int main(){
    int n1,n2,n3,temp,mul;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    mul=1;
    while(1){
        if(n1*mul%n2==0){
            temp=n1*mul;
            break;
        }
        else{
            mul++;
        }
    }
    mul=1;
    while(1){
         if(temp*mul%n3==0){
            printf("%d",temp*mul);
            break;
        }
        else{
            mul++;
        }
    }


}