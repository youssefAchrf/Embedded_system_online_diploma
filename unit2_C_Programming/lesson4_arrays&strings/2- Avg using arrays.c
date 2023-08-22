#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of data: ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &n);

    double data[n];

    // Read data from the user and calculate sum
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        printf("%d. Enter number: ", i + 1);
        fflush(stdout); fflush(stdin);
        scanf("%lf", &data[i]);
        sum += data[i];
    }

    // Calculate and display the average
    if (n > 0) {
        double average = sum / n;
        printf("Average = %.2lf\n", average);
    } else {
        printf("No numbers to calculate average.\n");
    }

    return 0;
}
