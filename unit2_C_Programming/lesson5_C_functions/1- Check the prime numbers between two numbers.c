#include <stdio.h>

int isPrime(int num);

int main() {
    int start, end;

    printf("Enter two numbers (intervals): ");
    fflush(stdout);
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // If divisible by any number other than 1 and itself, it's not prime
        }
    }

    return 1; // If no divisors found, it's prime
}
