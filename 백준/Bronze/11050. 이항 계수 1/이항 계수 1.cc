#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N, K;
	scanf("%d %d", &N, &K);
	int Nfac = 1;
	int Kfac = 1; 
	int NminKfac = 1;
	for (int i = 1; i < N; i++) {
		Nfac *= i + 1;
	}
	for (int i = 1; i < K; i++) {
		Kfac *= i + 1;
	}
	for (int i = 1; i < N - K; i++) {
		NminKfac *= N - K + 1 - i;
	}
	int result = Nfac / (Kfac * NminKfac);
	printf("%d ", result);
}