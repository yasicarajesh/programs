#include<stdio.h>
int main() {
    
    float value1;
    double value2;
    char op;
     scanf("%lf%lf%c",&value1,&value2,&op);
    //scanf("%c",&op);
   
    //scanf("%c",&op);
    switch(op){
        case '+': 
            printf("%.1lf + %.1lf=%.1lf",value1,value2,value1+value2);
            break;
        case '-': 
            printf("%.1lf - %.1lf=%.1lf",value1,value2,value1-value2);
            break;
         case '/': 
            printf("%.1lf / %.1lf=%.1lf",value1,value2,value1/value2);
            break;
        default:
            printf(" ");
         
    }
    return 0;
}