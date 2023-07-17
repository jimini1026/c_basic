#include <stdio.h>
int main(void){
	int i;
	char data[21];
	
	scanf("%s", &data);
	for(i=0; data[i] != '\0'; i++){
		printf("\'%c\'\n", data[i]);
	}

	return 0;
}
