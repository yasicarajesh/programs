#include<stdio.h>

void merge(int arr[],int l,int mid,int h)   //arr holds the {2,1,3,7,9},l=0,h=4,mid=2
{
int i,j,k;
int n1=mid-l+1; //to find the length,n1=3,
int n2=h-mid;  //n2=2
int L[n1],H[n2];
for(int i=0;i<n1;i++)
{
   L[i]=arr[l+i];  //L[i]=>L[0,1,2]

}
for(int j=0;j<n2;j++)
{
   H[j] = arr[mid+1+j];  //H[j]=>[0,1] //mid+1=>denoting starting of right elements
}

  i=0;
  j=0;
  k=l;
while(i<n1 && j<n2)
{
    if(L[i]<=H[j]){
        arr[k]=L[i];
         i++;
}
    else{
        arr[k]=H[j];
         j++;
}
k++;
}
while(i<n1)
{
   arr[k]=L[i];
   i++;
   k++;
}
while(j<n2){
   arr[k]=H[j];
   j++;
   k++;
}
}
void mergesort(int arr[],int l,int h)
{
   int mid;
   if(l<h)
   {
   mid=(l+h)/2;
  
mergesort(arr,l,mid);
mergesort(arr,mid+1,h);
// divides into single element
merge(arr,l,mid,h);  //=>this makes sort of numbers neighbour
}
}
void printarray(int arr[],int n){
for(int i=0;i<n;i++){
printf("%d",arr[i]);
}
}

int main()
{
int arr[]={2,1,3,7,9};
int n=5;
mergesort(arr,0,n-1);
printarray(arr,n);
return 0;
}