#include <stdio.h>

int main(void) {
	int i, j = 0;
	int sum = 0;
	
	scanf("%d", &i);
	while (sum < i) {
		j++;
		sum += j;
	}
	
	printf("%d", j);
	
	return 0;
}
