#include<stdio.h>
int lcm(int mul,int n1,int n2)
{    
    int temp;
     if(n2*mul%n1==0){
          temp=n2*mul;
      }
  else{
      return lcm(mul+1,n1,n2);
  
  }
     
}
int lcm2(int mul,int n3,int temp1)
{    
    int temp;
     if(n3*mul%temp1==0){
          return n3*mul;
      }
  else{
      return lcm2(mul+1,n3,temp1);
  
  }
     
}
int main()
{
  int n1,n2,n3,temp;
  scanf("%d",&n1);
  scanf("%d",&n2);
  scanf("%d",&n3);
  int mul=1;
  // if(n2<n1){
  //   temp=n1;
  //   n1=n2;
  //   n2=temp;
  // }
  int temp1=lcm(1,n1,n2);
  lcm2(1,n3,temp1);
  printf("%d",lcm(1,n3,temp1));
  
}
  