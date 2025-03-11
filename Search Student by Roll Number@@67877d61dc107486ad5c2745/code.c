#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to search for a student by roll number
void searchStudent(struct Student students[], int n, int rollNumber) {
    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == rollNumber) {
            
            printf("Roll Number: %d, ", students[i].rollNumber);
            printf("Name: %s, ", students[i].name);
            printf("Marks: %.2f ", students[i].marks);
            return;
        }
    }
    printf("Student not found\n");
}

int main() {
    int n, rollNumber;
    
    scanf("%d", &n);

    // Array to store student data
    struct Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        
        
        scanf("%d", &students[i].rollNumber);
        
        scanf("%s", students[i].name);
        
        scanf("%f", &students[i].marks);
    }

    // Search for a student by roll number
    
    scanf("%d", &rollNumber);
    searchStudent(students, n, rollNumber);

    return 0;
}
