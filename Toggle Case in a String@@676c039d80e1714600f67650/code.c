#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
        if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }
    }
    printf("%s",str);
}