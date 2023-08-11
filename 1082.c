#include <stdio.h>

int main(void) {
	int a, b;
	
	scanf("%X", &a);
	for (b = 1; b <= 15; b++) {
		printf("%X*%X=%X\n", a, b, a * b);
	}
	
	return 0;
}
