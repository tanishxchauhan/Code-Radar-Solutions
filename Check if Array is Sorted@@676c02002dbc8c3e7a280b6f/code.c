int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1]){
        printf("Not Sorted");
    }
    else if(arr[1]>arr[0]){
        printf("Sorted");
    }
    return 0;
}