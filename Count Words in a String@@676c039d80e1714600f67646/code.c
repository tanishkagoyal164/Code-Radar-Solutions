#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count=0;
    fgets("%s",str);
    int len=strlen(str);
    for(int i=0<i<=len;i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("%d",count+1);

}