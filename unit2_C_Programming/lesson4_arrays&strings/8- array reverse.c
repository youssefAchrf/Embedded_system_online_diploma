#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Enter the string: ");
    fflush(stdout); fflush(stdin);
    scanf("%[^\n]%*c", str);

    length = strlen(str);

    printf("Reverse string is ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
