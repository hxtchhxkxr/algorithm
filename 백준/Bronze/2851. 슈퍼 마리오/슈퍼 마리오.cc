#include <iostream>
using namespace std;

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int count = 0;

    while (sum <= 100) {
        sum += arr[count];
        count++;
    }

    int before = sum - arr[count - 1];
    int after = sum;

    if (after == 100) {
        cout << "100";
    } else {
        if (100 - before >= after - 100) {
            cout << after;
        } else {
            cout << before;
        }
    }

    return 0;
}
