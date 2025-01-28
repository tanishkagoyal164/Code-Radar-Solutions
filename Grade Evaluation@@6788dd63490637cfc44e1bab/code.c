#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char grade;
    scanf("%c",&grade);
    printf(grade=='A'?"Excellent":grade=='B'?"Good":grade=='C'?"Average":grade=='D'?"Below Average":grade=='F'?"Fail":"Invalid grade");
    return 0;
}