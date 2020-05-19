#include<stdio.h>
int gcd(int i,int n1,int n2)
{ 
    int temp;
    if(i<=n1&&i<=n2){
    if(n1%i==0 && n2%i==0){
            return i;
        }
        else{
            return gcd(i+1,n1,n2);
        }
    }
}
int main()
{
    int n1,n2,temp;
    scanf("%d",&n1);
    scanf("%d",&n2);
    temp=gcd(2,n1,n2);
    printf("%d",temp);
    return 0;
}