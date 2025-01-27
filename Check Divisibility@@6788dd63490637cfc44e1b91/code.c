#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    printf(x%5==0 && x%11==0?"Divisible":"Not Divisible");
    return 0;
}