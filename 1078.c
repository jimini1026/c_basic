#include <stdio.h>

int main(void) {
	int i, j;
	int sum = 0;

	scanf("%d", &i);
	for (j = 2; j <= i; j += 2) {
		sum += j;
	}

	printf("%d", sum);

	return 0;
}
