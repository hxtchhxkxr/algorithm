#include <iostream>
using namespace std;
typedef long long ll;

int k, n;
ll arr[10001];

bool decision(ll len) {
	ll cnt = 0;
	for (int i = 0; i < k; i++) {
		cnt += arr[i] / len;
	}

	return cnt >= n;
}

int maximization() {
	ll low = 1;
	ll high = (1 << 31) - 1;

	while (low < high) {
		ll mid = (low + high + 1) / 2;
		if (decision(mid)) {
			low = mid;
		}
		else {
			high = mid - 1;
		}
	}

	return low;
}

int main() {
	cin >> k >> n;

	for (int i = 0; i < k; i++) {
		cin >> arr[i];
	}

	cout << maximization();
}