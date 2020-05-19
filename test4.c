#include<stdio.h>
#include<stdlib.h>
char *check(char num[],int len,int pos)
{
    int i,j;
    char *op;
    op=malloc(1);
    for(int i=0,j=0;i<pos;i++,j++){
        op[i]=num[j];
        if(j==len-1){
            j=-1;
        }
    }
    return op;
}
int main(){
    char num[100];
    char *op;
    int n,len=0,pos,sum;
    scanf("%s",&num);
    scanf("%d",&n);
    pos=atoi(num);
    for(int i=0;num[i]!='\0';i++){
        len++;
    }
    op=check(num,len,pos);
    for(int i=0;i<pos;i++){
        printf("%c",op[i]);
    }
    printf("\n");
    // for(int i=0;i<pos;i++){
    //     printf("%c",op[i]);
    // }
    for(int m=0;m<n-1;m++){
        sum=0;
      for(int p=0;p<pos;p++){
          sum=sum+(op[p]-'0');
        }
        sprintf(num,"%d",sum);
        len=0;
        for(int i=0;num[i]!='\0';i++){
        len++;
    }
    op=check(num,len,pos);
    for(int i=0;i<pos;i++){
        printf("%c",op[i]);
     }
     printf("\n");
    }
}