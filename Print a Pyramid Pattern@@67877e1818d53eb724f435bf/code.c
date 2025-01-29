#include <stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<(2i-1);j++){
            printf("*");
        }
        printf("\n");
    }
}