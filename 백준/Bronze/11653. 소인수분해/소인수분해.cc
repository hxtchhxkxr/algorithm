#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);

	int div = 2;
	while (div <= N) {
		if (N % div == 0) {
			printf("%d\n", div);
			N /= div;
		}
		else {
			div++;
		}
	}

	return 0;
}