#include<stdio.h>
#include<string.h>
int main(){
    char str[100],oldchar,newchar;
    scanf("%s",str);
    scanf("%s",&oldchar);
    scanf("%s",&newchar);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==oldchar){
            newchar=str[i];
        }
    }
    printf("%s",str);
}