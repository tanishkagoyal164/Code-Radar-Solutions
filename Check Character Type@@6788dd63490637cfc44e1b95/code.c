#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    // Read the input character
    scanf("%c", &ch);
    
    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("Digit\n");
    }
    // Check if the character is an alphabet
    else if (isalpha(ch)) {
        // Check if the alphabet is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    // If it's neither digit nor alphabet, it's a special character
    else {
        printf("Special Character\n");
    }
    
    return 0;
}
