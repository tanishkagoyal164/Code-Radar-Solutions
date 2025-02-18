#include<stdio.h>
int main(){
    int number,n;
    scanf("%d %d",&number,&n);
    return number & ~(1<<n);
}