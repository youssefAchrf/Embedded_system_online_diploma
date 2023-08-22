#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fflush(stdout); fflush(stdin);
    scanf("%[^\n]%*c", str);

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of string: %d\n", length);

    return 0;
}
