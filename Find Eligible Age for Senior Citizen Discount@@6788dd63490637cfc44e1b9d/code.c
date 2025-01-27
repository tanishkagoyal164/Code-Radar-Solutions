#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int age;
    scanf("%d",&age);
    printf(age>=60?"Eligible":"Not Eligible");
    return 0;
}