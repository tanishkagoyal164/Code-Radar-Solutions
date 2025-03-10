#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k) {
    // Reverse the entire array
    reverse(arr, 0, n - 1);
    // Reverse the first K elements
    reverse(arr, 0, k - 1);
    // Reverse the remaining N-K elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;
    
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    scanf("%d", &k);

    rotateArray(arr, n, k);

    
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
