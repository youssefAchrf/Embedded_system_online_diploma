#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns of the matrix: ");
    fflush(stdout); fflush(stdin);
    scanf("%d%d", &rows, &cols);

    int matrix[rows][cols];
    int transpose[cols][rows];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            fflush(stdout); fflush(stdin);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Finding the transpose of the matrix
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
