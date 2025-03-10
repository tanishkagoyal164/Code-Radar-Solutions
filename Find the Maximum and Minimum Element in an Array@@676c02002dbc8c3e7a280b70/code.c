#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    if (n <= 0) {
        return -1; // Invalid input size
    }

    if (n == 1) {
        return arr[0];
    }

    if (arr[0] > arr[1]) {
        return arr[0];
    }

    if (arr[n - 1] > arr[n - 2]) {
        return arr[n - 1];
    }

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];
        }
    }

    return -1; // No peak found
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }

    int peak = findFirstPeak(arr, n);
    printf("%d\n", peak);

    return 0;
}
