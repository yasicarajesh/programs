int main(){
    long long int n,arr[100000],count=0,max,temp;
    scanf("%lld",&n);
    for(long long int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    for(long long int i=0;i<n-1;i++){
        for(long long int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    max=arr[0];
    count=count+1;
    for(long long int i=1;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
           count=count+1;
        }
    }
    printf("%lld",count);
}

//
int birthdayCakeCandles(int ar_count, int* ar) {
    // Complete this function
    int max = ar[0];
    int count = 0;
    for(int i=0; i<ar_count; i++)
        if(ar[i] > max)
            max = ar[i];
    for(int i = 0; i < ar_count; i++)
        if (ar[i] == max)
            count++;
    return count;
}