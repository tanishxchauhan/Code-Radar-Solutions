int binarysearch(int arr[],int n,int target){

    for(int i = 0;i<n;i++){
        if(target==arr[i]){
            printf("%d",i);
        }
        else{
            printf("-1");
        }
    }
}