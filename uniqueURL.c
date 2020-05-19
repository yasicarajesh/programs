#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char temp;
    int n,l;
    int x=0;
    scanf("%d",&n);
    scanf("%s",&str);
    l=strlen(str);
    for(int i=0;i<l-1;i++){
    for(int j=i+1;j<l;j++){
        if(str[i]>str[j])
        {
             temp=str[i];
             str[i]=str[j];
             str[j]=temp;

        }
    }
    }
  printf("%s\n",str);
}
// i=0;
