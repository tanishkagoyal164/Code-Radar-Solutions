#include <stdio.h>
#include<limits.h>

int main() {
    int n,numbers[1000],i,max=maximum,min=minimum;
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
    printf("%d %d",max,min);
    return 0;
}