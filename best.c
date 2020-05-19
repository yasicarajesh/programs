#include<stdio.h>
int main(){
    int arr[100],n,y,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
            y=arr[j]-arr[i];
            arr[i]=arr[i]+y;
        }
    }
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
}
//2 4 6 4 =>22   //4,6,arr[0]=6
                 //6,arr[1]=6
                 //arr[2]=6
                 //arr[3]=4
//2 3 4 5 6 2 3=>36  // 3,4,5,6 // 3,4,5,6,=>arr[0]=>6
                    // 4,5,6=>arr[1]=6
                    // 5,6,=>arr[2]=6
                    //6,=>arr[3]=6
                    //arr[4]=6
                    //arr[5]=3
                    //arr[6]=3
                    //6+6+6+6+6+3+3=>36
//2 4 6 9 =>36