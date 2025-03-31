#include<stdio.h>
int main(){
    int n,arr[100],target;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("%d",i);
        }
    }
}