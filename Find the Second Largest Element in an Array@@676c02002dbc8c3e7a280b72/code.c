#include<stdio.h>
int main(){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<2){
        printf("-1");
    }
    else{
        int max=arr[0];
        int max2=-998765432;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        int secmax=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>=max2 && arr[i]!=max){
                secmax=arr[i];
            }
        }
        printf("%d",secmax);
    }
    }