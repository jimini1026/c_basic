#include <stdio.h>

//int compare(int X, int input) {
//	if (X > input) {
//		return input;
//	} else {
//		반환값 어떻게 없애요..? 
//	}
//}

int print_num(int num,int A){
        if(num<A)
                printf("%d ",num);
}

int main(void) {
	int N, X;
	int num;
	int i;
	
	scanf("%d %d\n", &N, &X);
	for (i = 0; i < N; i++) {
		scanf("%d", &num);
		print_num(num, X);
	}
	
	return 0;
}
