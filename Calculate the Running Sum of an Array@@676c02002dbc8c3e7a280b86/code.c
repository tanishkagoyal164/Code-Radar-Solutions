//running sum
#include<stdio.h>
int main(){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            arr[i]+=arr[j];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}