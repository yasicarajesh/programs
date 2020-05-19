// ex:input from user :finding
//output:i,n
//requirement:length of string=>user
#include<stdio.h>
int length(char str[])
{ 
    int length=0;
    while(str[length]!='\0')
    {
        length++;
    }
    return length;

}
void duplicate(char str[],int n)
{
   for(int i=0;i<=n-2;i++){
       int flag=0;
       if(str[i]!=1){
         for(int j=i+1;j<=n-1;j++){
           if(str[i]==str[j])
           {
              flag=flag+1;
              str[j]=1;
           }
       }
       if(n/2==flag){
      
       printf("YES");

       }
       else{
          printf("NO");
       }
    }
   }
}
int main()
{
   char str[100];
   scanf("%s",&str);
   int n=length(str);
   duplicate(str,n);

}