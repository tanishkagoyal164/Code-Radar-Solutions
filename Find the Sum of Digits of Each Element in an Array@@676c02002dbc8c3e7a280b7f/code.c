#include<stdio.h>
int sum_digits(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",sum_digits(arr[i]));
    }
}