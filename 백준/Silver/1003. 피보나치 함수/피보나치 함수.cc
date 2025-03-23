#include <iostream>
using namespace std;

int cnt0[41];
int cnt1[41];

int main() {
    int t;
    cin >> t;

    cnt0[0] = 1;
    cnt1[0] = 0;

    cnt0[1] = 0;
    cnt1[1] = 1;

    for (int i = 2; i <= 40; i++) {
        cnt0[i] = cnt0[i - 1] + cnt0[i - 2];
        cnt1[i] = cnt1[i - 1] + cnt1[i - 2];
    }

    while (t--) {
        int n;
        cin >> n;
        cout << cnt0[n] << ' ' << cnt1[n] << '\n';
    }
}