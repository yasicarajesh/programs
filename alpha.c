#include<stdio.h>
int main(){
    char str[100];
    int n;
    scanf("%d",&n);
    scanf("%s",&str);
    int count=0;
    
    for(int i=0;i<n-1;i++)
    {  
        
        if(str[i+1]==str[i]+1 ||str[i+1]==str[i]||str[i+1]==str[i]-32)
        {
            
            count=count+1;

        }
        else{
            printf("NO");
            break;
        }
    }
    printf("%d",count);
    if(count+1==n){
        printf("yes");
    }
}
    