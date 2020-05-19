#include<stdio.h>
int main(){
    int n;
    int space=n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int spacectr=i;spacectr<n;spacectr++){
        
            printf(" ");
        }
        for(int j=1;j<=i;j++){
        
            printf("#");
        }
        
        printf("\n");
    }
}