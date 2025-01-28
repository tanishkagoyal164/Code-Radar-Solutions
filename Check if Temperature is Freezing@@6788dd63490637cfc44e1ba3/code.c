#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int t;
    scanf("%d",&t);
    printf(t<=0?"Freezing":"Above Freezing");
    return 0;
}