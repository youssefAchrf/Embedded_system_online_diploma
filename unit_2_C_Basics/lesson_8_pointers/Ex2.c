#include <stdio.h>

int main() {
	char alpha[27];
	char *ptr;
	ptr=alpha;

	for (int i=0; i<26; i++){
	   *ptr=i+'A';
		ptr++;
	}
	ptr=alpha;

	for(int i=0;i<26;i++){
		printf("%c ",*ptr);
		ptr++;
	}
	return 0;
}
