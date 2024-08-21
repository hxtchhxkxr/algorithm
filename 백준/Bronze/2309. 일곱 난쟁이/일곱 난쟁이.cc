#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int arr[9]; 
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int tempSum = sum;
    bool found = false; 

    for (int i = 0; i < 8 && !found; i++) {
        for (int j = i + 1; j < 9 && !found; j++) {
            sum = tempSum - arr[i] - arr[j];
            if (sum == 100) {
                arr[i] = 0;
                arr[j] = 0;
                found = true; 
            }
        }
    }

    bubbleSort(arr, 9);
    for (int i = 2; i < 9; i++) {
        printf("%d\n", arr[i]);
    }

	return 0;
}