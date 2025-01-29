#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%dx%d=%d",n,i,n*i);
    }
    return 0;
}