#include <iostream>
using namespace std;

int MOD = 1e9;
int dp[102][10];

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= 9; i++) {
		// 초항 1~9 9개
		dp[1][i] = 1;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			switch (j)
			{
			case 0:
				// 1에서 -1한 0밖에 없음
				dp[i][0] = dp[i - 1][1];
				break;
			case 9:
				// 8에서 +1한 9밖에 없음
				dp[i][9] = dp[i - 1][8];
				break;
			default:
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
				break;
			}

			dp[i][j] %= MOD;
		}
	}

	int sum = 0;
	for (int i = 0; i <= 9; i++) {
		sum = (sum + dp[n][i]) % MOD;
	}

	cout << sum;
}