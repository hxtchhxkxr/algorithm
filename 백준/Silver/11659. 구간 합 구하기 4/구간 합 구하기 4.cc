#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);	
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	int arr[100002];
	int prefixSum[100002];

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		prefixSum[i] = prefixSum[i - 1] + arr[i];
	}

	while (m--) {
		int i, j;
		cin >> i >> j;
		cout << prefixSum[j] - prefixSum[i - 1] << '\n';
	}
}