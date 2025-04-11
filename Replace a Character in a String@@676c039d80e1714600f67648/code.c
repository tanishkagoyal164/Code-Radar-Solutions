#include<stdio.h>
#include<string.h>
int main(){
    char str[100],oldchar,newchar;
    scanf("%s",str);
    scanf("%c",&oldchar);
    scanf("%c",&newchar);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==oldchar){
            str[i]=newchar;
        }
    }
    printf("%s",str);
}