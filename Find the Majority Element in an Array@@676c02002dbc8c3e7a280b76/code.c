#include <stdio.h>

// Function to find the majority element
int findMajorityElement(int arr[], int n) {
    int candidate = -1, count = 0;

    // Finding a candidate for majority element
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verifying the candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    return (count > n / 2) ? candidate : -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int majorityElement = findMajorityElement(arr, n);
    printf("%d\n", majorityElement);

    return 0;
}
