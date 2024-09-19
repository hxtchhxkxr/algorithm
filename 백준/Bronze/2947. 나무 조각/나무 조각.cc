#include <iostream>
using namespace std;

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int result[5] = { 1, 2, 3, 4, 5 };

    while (!equal(arr, arr + 5, result)) {
        for (int i = 0; i < 4; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;

                for (int j = 0; j < 5; j++) {
                    cout << arr[j] << " ";
                }
                cout << "\n";
            }
        }
    }

    return 0;
}