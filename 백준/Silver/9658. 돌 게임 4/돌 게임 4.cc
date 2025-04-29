#include <iostream>
using namespace std;

int dp[1001];

int main() {
	int n;
	cin >> n;

	// 0 : SK, 1 : CY
	dp[1] = 1;
	dp[2] = 0;
	dp[3] = 1;
	dp[4] = 0;
	dp[5] = 0;

	for (int i = 6; i <= n; i++) {
		if (dp[i - 1] == 0 && dp[i - 3] == 0 && dp[i - 4] == 0) {
			dp[i] = 1;
		}
		else {
			dp[i] = 0;
		}
	}

	cout << (dp[n] == 0 ? "SK" : "CY");
}