//LCM
#include<stdio.h>
int main()
{
  int n1,n2,temp;
  scanf("%d",&n1);
  scanf("%d",&n2);
  int multiple=1;
  if(n2<n1){
    temp=n1;
    n1=n2;
    n2=temp;
  }
  while(1){
      if(n2*multiple % n1==0){
          printf("%d",n2*multiple);
          break;
      }
      multiple++;
  }

}