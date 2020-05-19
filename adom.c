//input=>12
//reverse of input=>21
//square (12)=>144
//square(21)=>441
#include<stdio.h>
int main(){
    int num,rev,num1,check1,check2,temp,check;
    rev=0;
    temp=0;
    printf("Enter the number:");
    scanf("%d",&num);
    check1=num*num;//144
    while(num!=0){
        num1=num%10;
        rev=rev*10+num1;
        num=num/10;
    }
    //printf("%d\n",rev); 
    while(check1!=0){
        check=check1%10;
        temp=temp*10+check;
        check1=check1/10;
    }
    check2=rev*rev;//21*21=>441
    if(temp==check2){
        printf("ADOM number");
    }
    else
    {
        printf("Not ADOM number");
    }

}
