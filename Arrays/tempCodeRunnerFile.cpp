void removeKth(int *arr,int &n,int pos){
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
}