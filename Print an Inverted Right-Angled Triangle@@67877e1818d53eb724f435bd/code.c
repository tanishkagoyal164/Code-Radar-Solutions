#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=n;i>0;i--){
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}