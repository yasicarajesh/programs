#include<stdio.h>
void repeater (int arr[],int size){
    int i,j;
    int count=1;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++){
            if (arr[i]==arr[j])
            {
                return count=count+1;

            }
        }
    }
}
int main(){
   int arr[100];
   int size=5;
   for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
   repeater(arr,size);
   getchar();
   return 0;
}

//4 3 2 1 2
//1 2 2 3 4
//1->2!=
//2->2=count 2
//2->3
//2-.4
//