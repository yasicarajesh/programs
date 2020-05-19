//MIN and Max position in array
#include<stdio.h>
int main()
{    
    int arr[100],min,size,i,pos,max,pos2;
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
       scanf("%d",&arr[i]);
    }
    min=arr[0];
    pos=0+1;
    for(i=1;i<size;i++)
    {
        if(arr[i]<=min)
        {
            min=arr[i];
            pos=i+1;
            
        }
    }
    max=arr[0];
    pos2=0+1;
    for(i=1;i<size;i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
            pos2=i+1;
            
        }
    }
    printf("%d %d",pos,pos2);
    return 0;

}
