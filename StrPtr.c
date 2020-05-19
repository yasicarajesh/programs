#include<stdio.h>
#include<stdlib.h>
int main(){
    int size=4;
    char *str;
    str=malloc(sizeof(char));
    for(int i=0;i<size;i++){
        scanf("%c",&*(str+i));
    }
    for(int i=0;i<size;i++){
        printf("%c",*(str+i));
    }
}