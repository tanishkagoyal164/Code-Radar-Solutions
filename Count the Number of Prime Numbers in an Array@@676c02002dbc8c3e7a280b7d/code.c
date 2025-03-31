#include<stdio.h>
int main(){
    int n,arr[100],primenum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(isprime(arr[i])){
            primenum++;
        }
    }
    printf("%d",primenum);
}
int isprime(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}