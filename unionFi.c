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
int checksum(int temp1[],int arr,int y){
int result =1;
for(int i=0;i<y;i++){
if(temp1[i]==arr){
result=0;
break;
}
}
return result;
}
int printunion(int temp[], int temp1[], int x, int y)
{
int i = 0, j = 0;
while (i < x && j < y)
{

if (temp[i] < temp1[j]) {
printf(" %d ", temp[i++]);
}
else if(temp1[j] < temp[i])
{
printf(" %d ", temp1[j++]);
}
else

{
printf(" %d ", temp1[j++]);
i++;
}

}
while(i<x){
printf("%d",temp[i++]);
}
while(j<y){
printf("%d",temp1[j++]);
}
}
int main()
{
int arr1[100],arr2[100] ,m,n,temp[100],arr[100],temp1[100],ar[100];
int x=0;
int k=0;
int y=0;
int p=0;
scanf("%d",&m);
scanf("%d",&n);
for(int i=0;i<m;i++){
scanf("%d",&arr1[i]);
}
for(int j=0;j<n;j++){
scanf("%d",&arr2[j]);
}
for(int i=0;i<m;i++){
if(check(temp,arr1[i],x)){
for(int j=0;j<n;j++){
if(arr1[i]!=arr2[j]){
arr[k++]=arr2[j];
}
}

temp[x++]=arr1[i];
}
}
for(int i=0;i<k;i++){
if (checksum(temp1,arr[i],y)){
if(arr[i]!=arr[i+1])
{
ar[p++]=arr[i+1];
}
temp1[y++]=arr[i];
}
}
for(int i=0;i<x;i++){
    printf("\n%d",temp[i]);
}
for(int i=0;i<y;i++){
    printf("\ntemp 1:%d",temp1[i]);
}

//printunion(temp,temp1,x,y);



return 0;
}