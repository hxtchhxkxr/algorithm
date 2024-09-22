#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[300][300];
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	int k;
	cin >> k;

	int i, j, x, y;
	for (int l = 0; l < k; l++) {
		cin >> i >> j >> x >> y;

		int sum = 0;
		for (int p = i - 1; p <= x - 1; p++) { 
			for (int t = j - 1; t <= y - 1; t++) { 
				sum += arr[p][t];
			}
		}

		cout<<sum<<"\n";
	}

	return 0;
}