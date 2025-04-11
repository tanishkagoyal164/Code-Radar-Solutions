#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100],revstr[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int len=strlen(str1);
    for(int i=0;i<len;i++){
        revstr[i]=str1[len-i-1];
    }
    if(strcmp(str2,revstr)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}