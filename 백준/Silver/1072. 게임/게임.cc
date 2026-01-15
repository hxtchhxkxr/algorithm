#include <iostream>
using namespace std;
typedef long long ll;

#define MAX 1000000000
ll x, y, z;

bool decision(ll cnt) {
    ll w = ((y + cnt) * 100) / (x + cnt);
    return w > z;
}

ll maximization() {
    ll low = 1, high = MAX;

    while (low <= high) {
        ll mid = (low + high) / 2;

        if (decision(mid)) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    cin >> x >> y;
    z = (y * 100) / x;
    cout << (maximization() <= MAX ? maximization() : -1);
}