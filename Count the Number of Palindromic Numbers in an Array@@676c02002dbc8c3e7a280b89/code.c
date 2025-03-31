#include<stdio.h>
int palindrome(int x){
    int r,rev=0;
    int x2=x;
    while(x>0){
        r=x%10;
        rev=rev*10+r;
        x=x/10;

    }
    if(rev==x2){
        return 1;
    }
    return 0;
}
int main(){
    int n,arr[100],count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(palindrome(arr[i])){
            count++;
        }
    }
    printf("%d",count);
}