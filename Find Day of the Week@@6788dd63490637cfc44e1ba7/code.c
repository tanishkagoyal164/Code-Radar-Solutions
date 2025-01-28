#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    printf(x==1?"Monday":x==2?"Tuesday":x==3?"Wednesday":x==4?"Thursday":x==5?"Friday":x==6?"Saturday":x==7?"Sunday":"Invalid");
    return 0;
}