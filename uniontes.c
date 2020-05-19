
#include<stdio.h> 
int printUnion(int arr1[], int arr2[], int m, int n,int temp[]) 
{ 
int i = 0, j = 0,x=0; 
while (i < m && j < n) 
{ 
	if (arr1[i] < arr2[j]) 
	printf(" %d ", arr1[i++]); 
	else if (arr2[j] < arr1[i]) 
	printf(" %d ", arr2[j++]); 
	else if( arr1[i] == arr2[j] && arr1[i] !=temp[x] && arr2[j] != temp[x])
	{ 
	temp[x++]=arr2[j];
	printf(" %d ", arr2[j++]); 
	i++; 
	
	} 
} 

while(i < m) 
printf(" %d ", arr1[i++]); 
while(j < n) 
printf(" %d ", arr2[j++]); 
} 
int main() 
{ 
int arr1[100],arr2[100],n,m;
scanf("%d",&n);
scanf("%d",&m);
for(int i=0;i<n;i++){
	scanf("%d",&arr1[i]);
}
for(int i=0;i<n;i++){
	scanf("%d",&arr2[i]);
}
int temp[100];
printUnion(arr1, arr2, m, n,temp); 
getchar(); 
return 0; 
} 
