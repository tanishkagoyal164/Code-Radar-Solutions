#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf(a==b && a==c?"Equilateral":a==b && a!=c?"Isosceles":"Scalene");
    return 0;
}