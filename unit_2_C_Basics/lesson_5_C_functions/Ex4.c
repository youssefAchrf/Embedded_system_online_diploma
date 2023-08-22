#include <stdio.h>

int funcpower(int num, int power);

int main() {
	int base, power;
    printf("Enter base number: ");
    fflush(stdout);
    scanf("%d",&base);

    printf("Enter power number(positive integer): ");
    fflush(stdout);
    scanf("%d",&power);
    printf("%d^%d = %d",base,power,funcpower(base,power));
    return 0;
}

int funcpower(int num, int power) {
    if (power==1){
    	return num;
    }
    else{
    	for (int i=0; i<=power;i++){
    		return num*funcpower(num, power - 1);
    	}
    }
}
