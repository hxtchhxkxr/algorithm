#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int score[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &score[i]);
    }

    int M = score[0];
    for (int i = 1; i < N; i++) {
        if (score[i] > M) {
            M = score[i];
        }
    }

    float newScore[N];
    float sumScore = 0;
    for (int i = 0; i < N; i++) {  
        newScore[i] = ((float)score[i] / M) * 100;  
        sumScore += newScore[i];
    }

    printf("%f", sumScore / N);

    return 0;
}
