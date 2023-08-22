#include <stdio.h>
#include <string.h>

int main() {
    int arr[15];
    int size;
    printf("Input the number of elements to store in the array (max 15) :");

    fflush(stdout); fflush(stdin);
    scanf("%d", &size);

    printf("Input %d number of elements in the array",size);

    for (int i=0;i<size;i++)
    {
    	fflush(stdout); fflush(stdin);
    	scanf("%d", &arr[i]);
    }

    for (int i=0;i<size;i++) printf("element -%d: %d \n",i+1,arr[i]);

    printf("The elements of array in reverse order are :\n");

    for (int i=size-1;i>=0;i--){
    	printf("element -%d: %d \n",i+1,arr[i]);    }


    return 0;
}
