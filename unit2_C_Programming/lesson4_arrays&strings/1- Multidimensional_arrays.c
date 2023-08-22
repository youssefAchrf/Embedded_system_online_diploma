#include <stdio.h>

int main() {
    double matrix1[2][2], matrix2[2][2], sumMatrix[2][2];

    printf("Enter the elements of the 1st matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            fflush(stdout); fflush(stdin);
            scanf("%lf", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the 2nd matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            fflush(stdout); fflush(stdin);
            scanf("%.21f", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum matrix
    printf("Sum of matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.2lf\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
