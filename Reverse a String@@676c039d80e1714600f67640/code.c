#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int len, i;
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0'; 

    printf("%s\n", reversed);
    return 0;
}
