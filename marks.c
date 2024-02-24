#include <stdio.h>

int main() {
    // Assuming three subjects and storing marks in variables
    int subject1 = 85;
    int subject2 = 90;
    int subject3 = 78;

    // Calculating total marks
    int totalMarks = subject1 + subject2 + subject3;

    // Calculating average marks
    float averageMarks = (float)totalMarks / 3;

    // Printing the marks
    printf("Subject 1: %d\n", subject1);
    printf("Subject 2: %d\n", subject2);
    printf("Subject 3: %d\n", subject3);
    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}
