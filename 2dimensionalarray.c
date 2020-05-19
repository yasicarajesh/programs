#include<stdio.h>
int main(){
    int city=2;
    int week =3;
    int temperature[city][week];
    for(int i=0;i<city;i++){
        for(int j=0;j<week;j++){
            printf("temperature of city %d at week %d: ",i+1,j+1);
            scanf("%d",&temperature[i][j]);
        }
    }
    printf("Displaying values:");
    for(int i=0;i<city;i++){
        for(int j=0;j<week;j++){
            printf("\n temperature of city %d at week %d=%d",i+1,j+1,temperature[i][j]);
        }
    }
   return 0;
}