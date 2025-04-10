#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str,sizeof(str),stdin);
    printf("%d",strlen(str));
}