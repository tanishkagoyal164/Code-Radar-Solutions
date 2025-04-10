#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    gets(str1,sizeof(str1),stdin);
    gets(str2,sizeof(str2),stdin);
    printf("%s%s",str1,str2);

}