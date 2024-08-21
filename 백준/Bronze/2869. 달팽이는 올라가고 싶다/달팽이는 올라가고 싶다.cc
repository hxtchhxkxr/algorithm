#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);

	int height, day;

	day = (V - B) / (A - B);

	if ((V - B) % (A - B) == 0) {
		printf("%d", day);
	}
	else {
		printf("%d", day + 1);
	}
}