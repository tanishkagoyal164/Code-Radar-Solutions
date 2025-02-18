#include<stdio.h>
int main(){
    int number,n;
    scanf("%d %d",&number,&n);
    printf(number & ~(1<<n));
}