#include <stdio.h>

int main() {
    float marks[5], sum = 0, percentage;
    char grade;
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    percentage = (sum / 500) * 100;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 60) {
        grade = 'C';
    } else {
        grade = 'D';
    }

    printf("Total Marks: %.2f\n", sum);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
