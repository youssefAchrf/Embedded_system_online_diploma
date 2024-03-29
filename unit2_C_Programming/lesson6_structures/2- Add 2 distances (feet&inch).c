#include <stdio.h>

struct Distance {
    int feet;
    float inch;
} d1, d2, sum;

int main() {
    printf("Enter information for 1st distance:\n");
    printf("Enter feet: ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &d1.inch);

    printf("\nEnter information for 2nd distance:\n");
    printf("Enter feet: ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    fflush(stdout); fflush(stdin);
    scanf("%f", &d2.inch);

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // Adjust if inch is greater than or equal to 12
    if (sum.inch >= 12.0) {
        sum.inch -= 12.0;
        sum.feet++;
    }

    printf("\nSum of distances = %d'- %.1f\"\n", sum.feet, sum.inch);

    return 0;
}
