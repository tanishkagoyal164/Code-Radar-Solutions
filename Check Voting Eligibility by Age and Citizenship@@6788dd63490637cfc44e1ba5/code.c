#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf(x>=18 && y==1?"Eligible":"Not Eligible");
    return 0;
}