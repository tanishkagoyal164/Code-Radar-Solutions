#include<stdio.h>
int main(){
    int number,n;
    scanf("%d %d",&number,&n);
    printf("%d",(number>>n)&1);
}