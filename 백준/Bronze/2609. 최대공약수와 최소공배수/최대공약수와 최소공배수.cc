#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	int min = (num1 < num2) ? num1 : num2;
	int gcd = 1; 
	int lcm; // gcd : 최대공약수, lcm : 최소공배수
	for (int i = 1; i <= min; i++) {
		if (num1 % i == 0 && num2 % i == 0)
			gcd = i;
	}
	lcm = gcd * (num1 / gcd) * (num2 / gcd);
	printf("%d\n%d", gcd, lcm);
}