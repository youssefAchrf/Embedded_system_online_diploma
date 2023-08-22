#include <stdio.h>

struct SStudent {
	char name[50];
    int roll_num;
    float marks;
} student[3];

int main() {
    printf("Enter information of students\n");

    for (int i=0; i<10; i++){
    	 student[i].roll_num = i+1;
    	 printf("For roll number %d ", student[i].roll_num);

    	 printf("Enter name ");
    	 fflush(stdout); fflush(stdin);
    	 scanf("%s", &student[i].name);

    	 printf("Enter marks ");
    	 fflush(stdout); fflush(stdin);
    	 scanf("%f", &student[i].marks);

    }

    for (int i=0; i<10; i++){
    printf("\nDisplaying Information of students \n");
    printf("Information for roll number %d \n",  student[i].roll_num);
    printf("Name: %s\n", student[i].name);
    printf("Marks: %.2f\n", student[i].marks);
    }
    return 0;
}
