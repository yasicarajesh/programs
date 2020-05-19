#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int space=n-1;
    for(int i=1;i<=n;i++){
        for(int spacedis=1;spacedis<=space;spacedis++){
            printf(" ");
        }
        for(int j=1;j<=(i*2-1);j++){
            printf("%d",j);
        }
        printf("\n");
        space--;
    }
}