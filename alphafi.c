#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>


int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    int c[26]={0},n=0;
    for(int i=0;i<strlen(a);i++)
    {
        char s=tolower(a[i]);
        c[s-'a']++;
    }
    for(int i=0;i<strlen(b);i++)
    {
        char h=tolower(b[i]);
        c[h-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(c[i]>0)
        {
            n++;
        }
    }
    if(n==26)
    printf("yes");
    
    else
    printf("no");


}