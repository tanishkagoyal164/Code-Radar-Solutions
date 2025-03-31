//running sum
#include<stdio.h>
int main(){
    int n,arr[100],runningsum[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    runningsum[0]=arr[0];
    for(int i=1;i<n;i++){
        runningsum[i]=runningsum[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",runningsum[i]);
    }
}