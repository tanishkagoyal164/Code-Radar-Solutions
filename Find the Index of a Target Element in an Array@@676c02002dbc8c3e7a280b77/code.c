#include <stdio.h>

int findIndex(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the first occurrence index
        }
    }
    return -1; // Target not found
}

int main() {
    int n, target;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    int index = findIndex(arr, n, target);
    printf("%d\n", index);

    return 0;
}
