#include <iostream>
#include <algorithm>  
using namespace std;

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int result[5] = { 1, 2, 3, 4, 5 };

    while (!equal(arr, arr + 5, result)) {
        int after[5];
        copy(arr, arr + 5, after);

        for (int i = 0; i < 4; i++) { 
            if (after[i] > after[i + 1]) {
                int temp = after[i];
                after[i] = after[i + 1];
                after[i + 1] = temp;
                for (int j = 0; j < 5; j++) {
                    cout << after[j] << " ";
                }
                cout << "\n";
            }
        }
        copy(after, after + 5, arr);
    }

    return 0;
}