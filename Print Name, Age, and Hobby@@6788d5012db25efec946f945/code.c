#include <stdio.h>
int main(){
    char name[100],hobby[100];
    int age;
    scanf("%99s %d %99s",&name,&age,&hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
}