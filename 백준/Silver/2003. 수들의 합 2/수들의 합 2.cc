#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ll n, m;
	cin >> n >> m;

	ll arr[10000];

	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}

	ll cnt = 0;

	for (int i = 0;i < n;i++) {
		ll sum = 0;
		for (int j = i;j < n;j++) {
			sum += arr[j];
			if (sum == m) {
				cnt++;
				continue;
			}
		}
	}

	cout << cnt;
}