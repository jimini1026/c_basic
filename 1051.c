#include <stdio.h>

int main( void ){
	long long int a, b;

	scanf("%lld %lld", &a, &b);
	printf("%d", b >= a);

	return 0;
}
