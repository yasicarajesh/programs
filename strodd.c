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
int main()
{
   char str[999],left[999],right[999];
   int j,temp,mid;
   scanf("%[a-z]s",&str);
   int n=length(str);
   if(n%2==0){
     mid=n/2;
   }
   else{
       mid=(n/2)+1;
   }
  // printf("%d",mid);
   for(int i=0;i<mid;i++){
       left[i]=str[i];
   }

   for(int i=mid,j=0;i<n;i++,j++)
   {
       right[j]=str[i];
   }
  for(int i=0;i<mid-1;i++){
           if(left[i]!=right[i]){
               temp=1;
               break;
           }
        
       }
if(temp){
           printf("NO");
       }
else{
         printf("YES");
    }
   return 0;


   }

