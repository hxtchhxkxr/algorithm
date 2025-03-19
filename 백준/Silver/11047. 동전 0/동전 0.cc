#include <iostream>
using namespace std;

int arr[11];

int main() {
	int n, k;
	cin >> n >> k;
	
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	int cnt = 0;
	for (int i = n; i >= 1; i--) {
		if (arr[i] > k) {
			continue;
		}
		else {
			while (k >= 0) {
				if (k - arr[i] < 0) {
					break;
				}
				k -= arr[i];
				cnt++;
			}
		}
	}

	cout << cnt;
}