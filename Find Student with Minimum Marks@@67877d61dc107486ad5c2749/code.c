#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to find the student with the lowest marks
void findLowestScorer(struct Student students[], int n) {
    int lowIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks < students[lowIndex].marks) {
            lowIndex = i;
        }
    }
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n", students[lowIndex].rollNumber, students[lowIndex].name, students[lowIndex].marks);
}

int main() {
    int n;
    scanf("%d", &n);

    // Array to store student data
    struct Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        
        
        scanf("%d", &students[i].rollNumber);
        
        scanf("%s", students[i].name);
        
        scanf("%f", &students[i].marks);
    }

    // Find and display the student with the lowest marks
    findLowestScorer(students, n);

    return 0;
}
