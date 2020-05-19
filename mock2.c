
#include<stdio.h> 
int check(int temp[],int arr1,int x){
    int result =1;
    for(int i=0;i<x;i++){
        if(temp[i]==arr1){
            result=0;
            break;
        }
    }
    return result;
}
int printUnion(int arr1[], int arr2[], int m, int n) 
{ 
int i = 0, j = 0; 
while (i < m && j < n) 
{ 
	{
        if (arr1[i] < arr2[j]) 
	     printf(" %d ", arr1[i++]); 
    }
	elseif(arr2[j] < arr1[i]) {
	   printf(" %d ", arr2[j++]); 
    }
	else
	{ 
       {
	   printf(" %d ", arr2[j++]); 
	    i++; 
        }
    
	} 
} 
while(i < m) 
printf(" %d ", arr1[i++]); 
while(j < n) 
printf(" %d ", arr2[j++]); 
} 
int main() 
{ 
int arr1[100],arr2[100] ,m,n,temp[100];
int x=0;
scanf("%d",&m);
scanf("%d",&n);
for(int i=0;i<m;i++){
    scanf("%d",&arr1[i]);
}
for(int j=0;j<n;j++){
    scanf("%d",&arr2[j]);
}
printUnion(arr1, arr2, m, n,temp,x); 
getchar(); 
return 0; 
} 
