//to find quotient and remainder
#include<stdio.h>
int main()
{
    int q,r,num1,num2;
    printf("\n Enter the value of num1:");
    scanf("%d",&num1);
    printf("\n Enter the value of num1:");
    scanf("%d",&num1);

    q=num1%num2;
    r=num1/num2;
    printf("quotient=%d",q);
    printf("\n remainder=%d",r);

}
//swap a number
int main{
    int a,b,temp;
    a=13;
    b=14;
    temp=a;
    a=b;
    b=temp;
    printf("%d",a);
    printf("\n%d",b);


}
//check Even or odd
int main{
    int num1;
    printf("\n Enter the value of num1:");
    scanf("%d",&num1);
    if(num1%2==0)
    {
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }


}
//To check the entered alphabet is vowel or consonent
int main(){
    char alpha;
    
    printf("\n Enter the value of alphabet:");
    scanf("%C",&alpha);
    if(alpha ='a'||'e'||'i'||'o'||'u'||'A'||'I'||'E'||'O'||'U') 
    {
        printf("the alphabet is vowel");
    }
    else
    {
        printf("the alphabet is consonent");
    }
    
    }
    //To find the largest of three numbers using Nested IF ELSE
    int main() 
{

        int num1,num2,num3;
        printf("\n Enter the value of num1:");
        scanf("%d",&num1);
        printf("\n Enter the value of num1:");
        scanf("%d",&num2);
        printf("\n Enter the value of num1:");
        scanf("%d",&num3);
        if(num1>num2){
            if(num1>num3)
                printf("the largest is number is= %d",num1);
            else
                printf("the largest is number is= %d",num3);
            }
        else
        {
            if(num2>num3)
                printf("the largest is number is= %d",num2);
            
            else
                printf("the largest is number is= %d",num3);
            
        }
}