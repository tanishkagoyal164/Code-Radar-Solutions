#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++){
        str[i]=toupper(str[i]);
    }
    printf("%s",str);
}