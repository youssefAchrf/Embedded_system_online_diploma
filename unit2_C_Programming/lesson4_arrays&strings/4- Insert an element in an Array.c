#include <stdio.h>

int main() {
    int arr[100]; // Assuming a maximum array size of 100
    int n, pos, element;

    printf("Enter the number of elements: ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        fflush(stdout); fflush(stdin);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &element);

    printf("Enter the location (index) where the element should be inserted: ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &pos);

    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = element;

    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
