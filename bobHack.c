#include<stdio.h>
int main(){
    int a[100],b[100],n=3,count=0,count1=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0,j=0;i<n&&j<n;i++,j++){
        if(a[i]>b[j])
        {
          count =count+1;
        }
        else if(a[i]<b[j])
        {
           count1=count1+1;
        }
    }
    printf("%d\t%d",count,count1);
}