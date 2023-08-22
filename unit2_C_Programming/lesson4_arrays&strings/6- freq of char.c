#include <stdio.h>

int main() {
    char str[100];
    char character;
    int frequency = 0;

    printf("Enter a string: ");
    fflush(stdout); fflush(stdin);
    scanf("%[^\n]%*c", str);

    printf("Enter a character to find frequency: ");
    fflush(stdout); fflush(stdin);
    scanf("%c", &character);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == character) {
            frequency++;
        }
    }

    printf("Frequency of %c: %d\n", character, frequency);

    return 0;
}
