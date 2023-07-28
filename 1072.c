#include <stdio.h>

int main(void){
	int n, m;

	scanf("%d", &n);
	
		onemore:
	scanf("%d", &m);
	printf("%d\n", m);

	if (--n != 0)
		goto onemore;

	return 0;
}
