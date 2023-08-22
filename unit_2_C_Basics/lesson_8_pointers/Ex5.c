#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
};

int main() {
    struct Employee emp1 = {"Alex", 1002};
    struct Employee emp2 = {"John", 1003};
    struct Employee emp3 = {"Sarah", 1004};

    struct Employee *ptr[3]; // Array of pointers to structures

    // Assign addresses of structures to the pointers in the array
    ptr[0] = &emp1;
    ptr[1] = &emp2;
    ptr[2] = &emp3;

    // Access and print information using the pointer to the array of pointers
    printf("Employee Name : %s\n", ptr[0]->name);
    printf("Employee ID : %d\n", ptr[0]->id);

    return 0;
}
