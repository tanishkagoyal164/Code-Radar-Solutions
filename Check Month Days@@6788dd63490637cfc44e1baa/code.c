#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    printf(x==1?"31":x==2?"28":x==3?"31":x==4?"30":x==5?"31":x==6?"30":x==7?"31":x==8?"31":x==9?"30":x==10?"31":x==11?"30":x==12?"31");
    return 0;
}