#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    printf(cp>sp?"Loss":sp>cp?"Profit":"No Profit No Loss");
    return 0;
}