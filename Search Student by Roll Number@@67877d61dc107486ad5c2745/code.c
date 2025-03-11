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
            printf("Student found:\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
    printf("Student not found.\n");
}

int main() {
    int n, rollNumber;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Array to store student data
    struct Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        printf("Enter details");