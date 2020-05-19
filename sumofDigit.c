#include<stdio.h>
int main(){
    int num,digit;
    int pr=0;
    num=59;
    while(num)
    {
       digit=num%10;
       pr=pr+digit;
       num=num/10;
    }

    printf("%d",pr);
}
// int main()
// {
//   int num,sum;
//   scanf("%d",&num);
//   if(num){
//       sum=num%9;
//       if(sum==0)
//       {
//       sum=9;
//       }
//       printf("%d",sum);
    
//   }
// }