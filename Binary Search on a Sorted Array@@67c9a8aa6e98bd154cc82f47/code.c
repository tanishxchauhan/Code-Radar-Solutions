int binarySearch(int arr[],int n,int target){

    for(int i = 0;i<n;i++){
        if(target==arr[i]){
            printf("%d",arr[i]);
        }
        else{
            printf("-1");
        }
    }
}