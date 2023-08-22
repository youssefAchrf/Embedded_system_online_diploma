#include <stdio.h>
#include <string.h>

int main() {
    char str[100], *ptr;
    int length;

    printf("Pointer : Print a string in reverse order :\n");
    printf("---------------------------------------------\n");

    printf("Input a string : ");
    fflush(stdout);    fflush(stdin);
    scanf("%s", str);

    length = strlen(str);
    ptr = str + length - 1; // Setting the pointer to the last character

    printf("Reverse of the string is : ");
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");

    return 0;
}
