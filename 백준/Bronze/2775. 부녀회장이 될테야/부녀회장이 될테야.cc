#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int k, n;
        cin >> k >> n;

        int** arr = new int* [k+1];
        for (int j = 0; j < k+1; j++) {
            arr[j] = new int[n];
        }

        for (int j = 0; j < n; j++) {
            arr[0][j] = j + 1;
        }

        for (int j = 1; j < k+1; j++) {
            arr[j][0] = 1;
        }

        for (int j = 1; j < k+1; j++) {
            for (int l = 1; l < n; l++) {
                arr[j][l] = arr[j][l - 1] + arr[j - 1][l];
            }
        }

        cout << arr[k][n - 1] << "\n";

        for (int j = 0; j < k+1; j++) {
            delete[] arr[j];
        }
        delete[] arr;
    }

    return 0;
}