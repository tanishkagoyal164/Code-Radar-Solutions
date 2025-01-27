#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int year;
    scanf("%d",&year);
    printf(year%400==0?"Leap Year":year%100==0?"Not a Leap Year":year%4==0?"Leap Year":"Not a Leap Year");
    return 0;
}