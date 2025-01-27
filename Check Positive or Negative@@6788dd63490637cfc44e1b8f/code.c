#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    printf(x>0?"Positive":x<0?"Negative":"Zero");
    return 0;
}