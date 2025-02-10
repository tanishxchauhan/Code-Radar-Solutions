int main(){
    int n;
    scanf("%d",&n);
    int prm=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prm=0;
            break;
        }
    }
    if(prm==0){
        printf("Not prime.");
    }
    else{
        printf("Prime");
    }
return 0;
}