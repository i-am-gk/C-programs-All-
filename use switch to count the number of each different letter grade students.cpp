#include <stdio.h>

int main() {
    int grade, num_students;
    int num_A = 0, num_B = 0, num_C = 0, num_D = 0, num_F = 0;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    for (int i = 1; i <= num_students; i++) {
        printf("Enter the grade for student %d (0-100): ", i);
        scanf("%d", &grade);

        // Use a switch statement to categorize the grades into different letter grades
        switch (grade / 10) {
            case 10:
            case 9:
                num_A++;
                break;
            case 8:
                num_B++;
                break;
            case 7:
                num_C++;
                break;
            case 6:
                num_D++;
                break;
            default:
                num_F++;
        }
    }

    // Display the number of students in each letter grade category
    printf("Number of A's: %d\n", num_A);
    printf("Number of B's: %d\n", num_B);
    printf("Number of C's: %d\n", num_C);
    printf("Number of D's: %d\n", num_D);
    printf("Number of F's: %d\n", num_F);

    return 0;
}

