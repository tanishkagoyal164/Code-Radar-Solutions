#include<stdio.h>
int main(){
    int n,arr[100],max=-12345;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max && arr[i]%2==0){
            max=arr[i];
        }
    }
    if(max!=-12345){
        printf("%d",max);
    }
    else{
        printf("-1");
    }
}