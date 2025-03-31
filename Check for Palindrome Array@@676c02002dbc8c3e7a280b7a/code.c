/*#include <stdio.h>

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
*/
#include<stdio.h>
int main(){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int isPalindrome=1;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome){
        printf("YES");
    }
    else{
        printf("NO");
    }
}