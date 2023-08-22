#include <stdio.h>

int main() {
    int arr[100];
    int n, element, found = 0;

    printf("Enter the number of elements: ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        fflush(stdout); fflush(stdin);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &element);

    int location = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            location = i;
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Number found at the location = %d\n", location + 1);
        printf("%d\n", element);
    } else {
        printf("Number not found in the array.\n");
    }

    return 0;
}
