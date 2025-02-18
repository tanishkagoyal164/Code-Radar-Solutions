#include<stdio.h>
int main(){
    int number,n;
    scanf("%d %d",&number,&n);
    printf("%d",number & ~(1<<n));
}