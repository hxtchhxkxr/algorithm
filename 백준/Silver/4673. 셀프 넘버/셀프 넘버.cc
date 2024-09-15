#include <iostream>
using namespace std;

int main() {
    int arr[10000];
    for (int i = 0; i < 10000; i++)
        arr[i] = i + 1;

    for (int i = 0; i < 10000; i++) {
        if (arr[i] != 0) {
            int num = arr[i];
            while (num < 10000) {
                int construction = num;
                int temp = construction;
                while (temp != 0) {
                    construction += temp % 10;
                    temp /= 10;
                }

                if (construction <= 10000) {
                    arr[construction - 1] = 0;
                }

                num = construction;
            }
        }
    }

    for (int i = 0; i < 10000; i++) {
        if (arr[i] != 0)
            cout << arr[i] << "\n";
    }

    return 0;
}