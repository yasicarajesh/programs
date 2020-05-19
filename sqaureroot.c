#include<stdio.h>
int main(){
    int num,temp,check,safe;
    scanf("%d",&num);
    check=2;
    while(1){
        temp=num/check;
        if(temp<=check){
            safe=temp;
            //printf("%d",temp);
            break;
        }
        else{
            check++;
        }
    }
    for(int checkfac=2;checkfac<=safe;checkfac++){
        if(num%checkfac==0){
             printf("not a prime");
             break;
        }
        if(checkfac>=safe)
        {
            printf("its a prime");
            break;
        }
        else
        {
             printf("is a prime");
             break;
        }

        }
    }

       