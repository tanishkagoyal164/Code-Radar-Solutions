#include<stdio.h>
int findFirstPeak(int arr[],int n){
    if(n==1) return arr[o];
    for(int i=0;i<n;i++){
        if(i==0 && arr[i]>arr[i+1]){
            return arr[i];
        }
        else if(i==n && arr[i]>arr[i-1]){
            return arr[i];
        }
        else if(i>0 && i<n-1 && arr[i]>arr[i-1]&& arr[i]>arr[i+1]){
                return arr[i];
            }
        }
        return -1;
    }
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int peak=findFirstPeak(arr,n);
    printf("%d",peak);
}