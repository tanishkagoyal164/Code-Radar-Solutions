#include <stdio.h>
#include <string.h>
int main() {
    char str1[100];
    scanf("%s", str1);
    /*int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%s", str[i]);
    }
    printf("\n");*/
    printf("%s",strrev(str1));
    return 0;
}
