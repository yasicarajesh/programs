#include<stdio.h>
int main(){
    char str[100],p[100],a[100],b[100];
    int n,len=0,len1=0,len2=0,len3=0,count,count1;
    scanf("%d",&n);
    scanf("%s",&str);
    scanf("%s",&p);
    scanf("%s",&a);
    scanf("%s",&b);
    while(str[len]!='\0')
    {
       len=len+1;
    }
     while(p[len1]!='\0')
    {
       len1=len1+1;
    }
    while(str[len2]!='\0')
    {
       len2=len2+1;
    }
     while(p[len3]!='\0')
    {
       len3=len3+1;
    }
    // for(int i=0;i<n;i++){
    //    scanf("%s",&str[i]);
    // }
    // for(int i=0;i<len;i++){
    //    scanf("%s",&p[i]);
    // }
    for(int i=0;i<len;i++){
        for(int j=0;j<len1;j++)
        if(str[i]==p[j]){
             count=1;
        }
    }
    if(count==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
     for(int i=0;i<len2;i++){
        for(int j=0;j<len3;j++)
        if(a[i]==b[j]){
             count1=1;
        }
    }
    if(count1==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}