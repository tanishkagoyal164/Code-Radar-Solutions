#include<string.h>
#include<stdio.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=strlen(str)-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
}