#include<stdio.h>
#include<string.h>
int main(){
    char str[100],c;
    fgets(str,sizeof(str),stdin);
    scanf("%c",c);
    for(int i=0;i<strlen(str);i++){
        if(i=='a' ||i=='e' ||i=='i' ||i=='o' ||i=='u' ||i=='A' ||i=='E' ||i=='I' ||i=='O' ||i=='U'){
            str[i]='*';
        }
    }
    printf("%s",str);
}