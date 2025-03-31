#include<stdio.h>
int main(){
    int n,arr[100],primenum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(isprime(i)){
            primenum++;
        }
    }
    printf("%d",primenum);
}
int isprime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}