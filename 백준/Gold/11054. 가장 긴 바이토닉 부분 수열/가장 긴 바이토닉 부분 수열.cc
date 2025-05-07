#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002];
int dp[3][1002];

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++) {
		dp[0][i] = 1;
		dp[1][i] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[j] < arr[i]) {
				dp[0][i] = max(dp[0][i], dp[0][j] + 1);
			}
		}
	}

	for (int i = n; i >= 1; i--) {
		for (int j = n; j > i; j--) {
			if (arr[j] < arr[i]) {
				dp[1][i] = max(dp[1][i], dp[1][j] + 1);
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		dp[2][i] = dp[0][i] + dp[1][i] - 1;
	}

	sort(dp[2], dp[2] + n + 1);
	cout << dp[2][n];
}