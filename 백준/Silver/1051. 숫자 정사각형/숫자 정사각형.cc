#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int arr[50][50] = { 0 };

	for (int i = 0; i < n; i++) {
		string row;
		cin >> row;
		for (int j = 0; j < m; j++) {
			arr[i][j] = row[j] - '0';
		}
	}

	int maxLen = 1;  

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 1; k < min(n - i, m - j); k++) {
				if (arr[i][j] == arr[i + k][j] && arr[i][j] == arr[i][j + k] && arr[i][j] == arr[i + k][j + k]) {
					maxLen = max(maxLen, k + 1);  
				}
			}
		}
	}

	cout << maxLen * maxLen;
	return 0;
}