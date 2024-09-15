#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int a, b, c, d, e, f;
	int result;
	int i = 1;
	int temp = n;

	while (1) {
		a = temp / 10;
		b = temp - a * 10;
		c = a + b;
		d = c - c / 10 * 10;
		result = b * 10 + d;
		if (result == n) {
			break; 
		}
		temp = result;
		i++;
	}
	printf("%d", i);
}