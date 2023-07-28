#include <stdio.h>

int main(void){
	int a;

	scanf("%d", &a);

	while (a != 0){
		a--;
		printf("%d\n", a);
	}

	return 0;
}
