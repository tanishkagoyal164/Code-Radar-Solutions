#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int marks;
    scanf("%d",&marks);
    printf(marks>=90?"A":marks>=80?"B":marks>=70?"C":marks>=60?"D":"F");
    return 0;
}