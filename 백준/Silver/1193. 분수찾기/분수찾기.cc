#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int X;
    scanf("%d", &X);

    int num = 0;
    int tempX = X;

    while (tempX > 0) {
        tempX -= num;
        num++;
    }

    num -= 1;
    int sum = 0;
    for (int i = 1; i < num; i++) {
        sum += i;
    }

    int numerator, denominator;
    if (num % 2 == 0) {
        numerator = X - sum;
        denominator = num - numerator + 1;
    }
    else {
        denominator = X - sum;
        numerator = num - denominator + 1;
    }

    printf("%d/%d\n", numerator, denominator);

    return 0;
}