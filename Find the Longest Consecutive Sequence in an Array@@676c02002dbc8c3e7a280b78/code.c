#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers used in qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int longestConsecutiveSequence(int arr[], int n) {
    if (n == 0) return 0;

    qsort(arr, n, sizeof(int), compare);

    int longestStreak = 1;
    int currentStreak = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            if (arr[i] == arr[i - 1] + 1) {
                currentStreak++;
            } else {
                longestStreak = (longestStreak > currentStreak) ? longestStreak : currentStreak;
                currentStreak = 1;
            }
        }
    }

    return (longestStreak > currentStreak) ? longestStreak : currentStreak;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = longestConsecutiveSequence(arr, n);
    printf("%d\n", result);

    return 0;
}
