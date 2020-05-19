#include<stdio.h>
int fib(int n1){
    if(n1==0 ||n1==1){
        return n1;
    }
    else{
        return(fib(n1-1)+fib(n1-2));
    }
}
int series(int n,int i){
   if(i<=n){
       printf("%d",fib(i));
       series(n,i+1);
   }
}
int main()
{
  int n,i;
  scanf("%d",&n);
  i=0;
  series(n,0);

}