#include<stdio.h>
int main(){
    int n,arr[100],hash[100]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int firstrepeating=-1;
    for(int i=n-1;i>=0;i--){
        hash[arr[i]]++;
    if(hash[arr[i]]>1){
        firstrepeating=arr[i];
        }
    }
    printf("%d",firstrepeating);
}