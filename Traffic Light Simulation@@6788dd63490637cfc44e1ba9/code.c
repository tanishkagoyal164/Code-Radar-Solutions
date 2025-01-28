#include <stdio.h>

int main() {
    char light;
    scanf("%c",&light);
    printf(light=='R'?"Stop":light=='G'?"Go":light=='Y'?"Slow Down":"Invalid input");
    return 0;
}