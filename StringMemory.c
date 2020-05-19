#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=4;
    char *str[n];
    for(int i=0;i<n;i++){
        str[i]=malloc(n*sizeof(char));
    }
    for(int i=0;i<n;i++){
        scanf("%s",&str[i]);
    }
    for(int i=0;i<n;i++){
        printf("%s",str[i]);
    }

}