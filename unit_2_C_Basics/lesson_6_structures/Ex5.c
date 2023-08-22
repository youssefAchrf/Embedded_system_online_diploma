#include<stdio.h>
#define Pl 3.1415
#define area(r)(PI*(r)*(r))

int main(){
	int radius;
	float area;
	printf("Enter the radius:");
	fflush(stdout); fflush(stdin);
	scanf("%d", &radius);
	area=area(radius);
	printf("Area=%.2f",area);
	return 0;
}
