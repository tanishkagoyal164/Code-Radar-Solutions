#include <stdio.h>
#include <string.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int countAboveThreshold(struct Student students[], int n, float threshold) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].marks > threshold) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    float threshold;
    
    scanf("%d", &n);

    
    struct Student students[n];

    
    for (int i = 0; i < n; i++) {
       
        
        scanf("%d", &students[i].rollNumber);
        
        scanf("%s", students[i].name);
        
        scanf("%f", &students[i].marks);
    }

    scanf("%f", &threshold);

    // Count and display the number of students scoring above the threshold
    int count = countAboveThreshold(students, n, threshold);
    printf("Count of students scoring above %.2f: %d\n", threshold, count);

    return 0;
}
