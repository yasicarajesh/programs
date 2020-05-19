int checknumber(int temp[],int arr,int x){
    int result =1;
    for(int i=0;i<x;i++){
        if(temp[i]==arr){
            result=0;
            break;
        }
    }
    return result;
}