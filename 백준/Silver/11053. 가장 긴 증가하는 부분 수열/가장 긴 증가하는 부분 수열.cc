#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002];
int dp[1002];

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[j] < arr[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	sort(dp, dp + n + 1);
	cout << dp[n];
}