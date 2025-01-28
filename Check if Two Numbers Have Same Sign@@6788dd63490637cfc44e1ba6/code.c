#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf((x>0 && y>0)||(x<0 && y<0)||(x==0 && y==0)?"Same Sign":"Different Sign");
    return 0;
}