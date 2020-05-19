#include<stdio.h>

void sort(int array[],int n)
{
    int iteration,index;
    for(iteration=1;iteration<n;iteration++){
        for(index=0;index < n-iteration;index++){
            if(array[index]<array[index+1]){
                int temp=array[index];
                array[index]=array[index+1];
                array[index+1]=temp;
            }
        }

    }
    }
    void printarray(int array[],int n){
        for(int i=0;i<n;i++)
        {
          printf("%d",array[i]);
              
          
        }
    }
    int main(){
        int array[]={28,30,12,18,56,32,48};
        int n=7;
        sort(array, n);
        printf("Sorted array:");
        printarray(array,n);
        
        return 0;
    }