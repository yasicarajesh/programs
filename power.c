#include<stdio.h>
int power(int x,int y)
   {
       if(y>0)
       {
           return x * power(x,y-1);
       }
       return 1;

   }
int main()
{ 
   
   int x=2;
   int y=0;
   printf("%d",power(x,y));
}