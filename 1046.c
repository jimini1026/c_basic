#include <stdio.h>
int main(void){
	int a, b, c;
	long long int d;

	scanf("%d %d %d", &a, &b, &c);
	d = a + b + c;
	printf("%lld\n", d);
	printf("%.1f", (float)d / 3);
	
	return 0;
}
