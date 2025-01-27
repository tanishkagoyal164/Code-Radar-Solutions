#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    print(a>=1 && a<=100?"In Range":"Out of Range");
    return 0;
}