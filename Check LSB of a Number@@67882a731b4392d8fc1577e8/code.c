#include <stdio.h>
int main(){
    int a,lsb;
    scanf("%d",&a);
    lsb=a&1;
    if(lsb==1){
        printf("set\n");
    }
    else{
        printf("not set\n");
    }
}