#include<stdio.h>
#include<string.h>
int main(){
    char str[100],c;
    int count=0;
    fgets(str,sizeof(str),stdin);
    scanf("%c",c);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==c){
            count++;
        }
    }
    printf("%d",count);
}