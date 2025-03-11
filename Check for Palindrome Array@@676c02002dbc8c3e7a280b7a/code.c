#include <stdio.h>

int main() {
    int t, N;
    
    // Read number of test cases
    scanf("%d", &t);
    
    while(t--) {
        // Read the size of the array
        scanf("%d", &N);
        
        int array[N];
        
        // Read the elements of the array
        for (int i = 0; i < N; i++) {
            scanf("%d", &array[i]);
        }
        
        int isPalindrome = 1;
        
        // Check if the array is a palindrome
        for (int i = 0; i < N / 2; i++) {
            if (array[i] != array[N - 1 - i]) {
                isPalindrome = 0;
                break;
            }
        }
        
        // Output the result
        if (isPalindrome) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
