#include<string.h>
#include<stdio.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=strlen(str)-1;i>=0;i--){
        printf("%c",str[i]);
    }
}