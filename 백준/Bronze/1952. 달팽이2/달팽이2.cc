#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int M, N;
	scanf("%d %d", &M, &N);

	int count = 0;
	while (M > 0 && N > 0) {
		M -= 2;
		N -= 2;
		count++;
	}

	M += 2; N += 2; count -= 1;
	count *= 4;

	if (M == 1) {
		count += 0;
	}
	else if (M == 2) {
		if (N == 1) {
			count += 1;
		}
		else {
			count += 2;
		}
	}
	else {
		if (N == 1) {
			count += 1;
		}
		else {
			count += 3;
		}
	}

	printf("%d", count);
	return 0;
}