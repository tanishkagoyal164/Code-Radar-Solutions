// Your code here...
#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to find the student with the highest marks
void findTopScorer(struct Student students[], int n) {
    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n", students[topIndex].rollNumber, students[topIndex].name, students[topIndex].marks);
}

int main() {
    int n;
   
    scanf("%d", &n);

    // Array to store student data
    struct Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        
        ;
        scanf("%d", &students[i].rollNumber);
        
        scanf("%s", students[i].name);
       
        scanf("%f", &students[i].marks);
    }

    // Find and display the student with the highest marks
    findTopScorer(students, n);

    return 0;
}
