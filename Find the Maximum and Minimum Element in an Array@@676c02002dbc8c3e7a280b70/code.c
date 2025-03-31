#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int min=arr[1];
    int max=arr[1];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d %d",min,max);
}