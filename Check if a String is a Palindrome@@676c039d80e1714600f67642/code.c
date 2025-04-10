#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    char strrev[100];
    for(int i=len-1;i>=0;i--){
        strrev[len-i-1]=str[i];
    }
    strrev[len]='\0';
    if(strcmp(strrev,str)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}