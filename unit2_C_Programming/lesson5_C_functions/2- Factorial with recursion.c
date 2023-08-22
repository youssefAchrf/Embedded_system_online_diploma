#include <stdio.h>

unsigned long long factorial(int num);

int main() {
    int num;

    printf("Enter a positive integer: ");
    fflush(stdout);
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long fact = factorial(num);
        printf("Factorial of %d is %llu\n", num, fact);
    }

    return 0;
}

unsigned long long factorial(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}
