#include <stdio.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int N;
    scanf("%d", &N);
    
    struct Student students[N];
    float total_marks = 0;
    
    // Input data for N students
    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
        total_marks += students[i].marks;
    }
    
    // Calculate average marks
    float average_marks = total_marks / N;
    
    // Output average marks rounded to two decimal places
    printf("Average Marks: %.2f\n", average_marks);
    
    return 0;
}
