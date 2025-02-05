#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,numbers[1000],max=0,min=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<n;i++){
        if(numbers[i]>max){
            max=numbers[i];
        }
    }
    for(i=0;i<n;i++){
        if(numbers[i]<min){
            min=numbers[i];
        }
    }
    printf("%d %d",max,min)
    return 0;
}