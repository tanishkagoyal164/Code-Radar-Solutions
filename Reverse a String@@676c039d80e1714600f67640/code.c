#include <stdio.h>
#include <string.h>

// Function to reverse the string
void reverseString(char str[]) {
    int n = strlen(str); // Calculate the length of the string
    for (int i = 0; i < n / 2; i++) { // Loop to swap characters
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[100]; // Declare a character array to store the string
     // Prompt the user for input
    scanf("%s", str); // Read the input string
    reverseString(str); // Call the function to reverse the string
    printf("%s\n", str); // Print the reversed string
    return 0;
}
