int kthSmallest(int arr[],int n,int k){
    if(k>n-1){
        return -1;
    }
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        int temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    
    }

    return arr[k-1];
}