#include<stdio.h> 
int printUnion(int arr1[], int n,int temp[]) 
{ 
int i = 0, j = 0,x=0;
while (i<n)
{
	if ((arr1[i] < arr1[i+1]) ||(arr1[i+1]>arr1[i]))
    {
	      temp[x++]=arr1[i++]; 
    }
	else
	{ 
	    temp[x++]= arr1[i++]; 
       i++;
	
	} 

} 
while(i < n) {
printf(" %d ", arr1[i++]);  
} 
}
int main() 
{ 
int arr1[] = {1, 1, 1,3,4,5}; 
int temp[100];
//int arr2[] = {1,1,2, 5, 6,7}; 
int n = sizeof(arr1)/sizeof(arr1[0]); 
//int n = sizeof(arr2)/sizeof(arr2[0]); 
int N=printUnion(arr1,n,temp); 
for(int i=0;i<n;i++){
    printf("%d",temp[i]);
}
return 0; 
} 
