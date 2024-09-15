#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int lcm_of_three(int a, int b, int c) {
    return lcm(lcm(a, b), c);
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int lcm[10];
    int index = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            for (int k = j + 1; k < 5; k++) {
                lcm[index] = lcm_of_three(arr[i], arr[j], arr[k]);
                index++;
            }
        }
    }

    int min_lcm = *min_element(lcm, lcm + 10);

    cout << min_lcm << endl;

    return 0;
}
