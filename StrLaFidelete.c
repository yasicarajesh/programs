#include<stdio.h>
int main(){
    int i=0,x=0;
    char str[100],temp[100];
    printf("Enter the string:");
    scanf("%s",&str);
    while(str[i+2]!='\0'){
        temp[x++]=str[i+1];
        i++;
    }
    temp[x]='\0';
    printf("After removing: %s\n",temp);
    return 0;
    
}