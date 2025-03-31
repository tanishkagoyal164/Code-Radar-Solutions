#include<stdio.h>
int main(){
    int n,arr[100],even_count,odd_count;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_count++;
        }
        else if(arr[i]%2!=0){
            odd_count++;
        }
    }
    printf("%d %d",even_count,odd_count);
}