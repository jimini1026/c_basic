#include <stdio.h>

int main(void){
	int a;
	
		again:
	scanf("%d", &a);
	printf("%d\n", a);

	if (a != 0)
		goto again;
	
	return 0;
}
