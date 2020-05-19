#include<stdio.h>
int sum(int num){
    int digit;
    int pr=0;
  while(num)
    {
       digit=num%10;
       pr=pr+digit;
       num=num/10;
    }
    return pr;
}
int product(int num){
    int digit;
    int tr=1;
  while(num)
    {
       digit=num%10;
       tr=tr*digit;
       num=num/10;
    }
    return tr;
}
int main(){
    int num;
   scanf("%d",&num);
   int check=sum(num)+product(num);
   //printf("%d",sum(num)+product(num));
   if(num==check){
       printf("YES");
   }
   else
    {
        printf("NO");
    }
   

}