#include <stdio.h>

struct SComplex {
    float s_real;
    float s_imaginary;
} num1, num2;

struct SComplex addcomplex(struct SComplex num1, struct SComplex num2);

int main() {
    printf("For 1st complex number\n");
    printf("Enter the real and imaginary respectively: ");
    fflush(stdout); fflush(stdin);
    scanf("%f, %f", &num1.s_real, &num1.s_imaginary);

    printf("For 2nd complex number\n");
    printf("Enter the real and imaginary respectively: ");
    fflush(stdout); fflush(stdin);
    scanf("%f, %f", &num2.s_real, &num2.s_imaginary);

    struct SComplex result = addcomplex(num1, num2);
    printf("Sum: %.2f + %.2fi\n", result.s_real, result.s_imaginary);

    return 0;
}

struct SComplex addcomplex(struct SComplex num1, struct SComplex num2) {
    struct SComplex result;
    result.s_real = num1.s_real + num2.s_real;
    result.s_imaginary = num1.s_imaginary + num2.s_imaginary;
    return result;
}
