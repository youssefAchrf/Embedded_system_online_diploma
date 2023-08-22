#include <stdio.h>

struct SStudent {
    char name[50];
    int roll_num;
    float marks;
} student;

int main() {
    printf("Enter information of students\n");

    printf("Enter name: ");
    fflush(stdout);
    scanf("%s", student.name);

    printf("Enter roll number: ");
    fflush(stdout);
    scanf("%d", &student.roll_num);

    printf("Enter marks: ");
    fflush(stdout);
    scanf("%f", &student.marks);

    printf("\nDisplaying Information\n");
    printf("Name: %s\n", student.name);
    printf("Roll: %d\n", student.roll_num);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
