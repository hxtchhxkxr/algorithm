#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    long long result = 0;

    if (n == 0) {
        result = 0;
    }
    else if (n == 1) {
        result = 1;
    }
    else {
        long long prev2 = 0, prev1 = 1;

        for (int i = 2; i <= n; i++) {
            result = prev1 + prev2;
            prev2 = prev1;
            prev1 = result;
        }
    }

    printf("%lld", result);
}