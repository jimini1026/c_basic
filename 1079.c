#include <stdio.h>

int main(void) {
	char i;
	
	do {
		scanf("%c", &i);
		if (i != ' ') {
			printf("%c\n", i);	
		}
	} while (i != 'q');
	
	return 0;
}
