#include <iostream>
using namespace std;

int w[102];
int v[102];
int dp[102][100002];

int main() {
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> w[i] >> v[i];
	}

	for (int i = 1; i <= n; i++) {	// i : 주어진 물건 index
		for (int j = 0; j <= k; j++) {	// j : 버틸 수 있는 무게
			// 물건을 담을 수 있음(물건 무게 <= 버틸 수 있는 무게)  
			if (w[i] <= j)
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			// 물건을 담을 수 없음
			else
				dp[i][j] = dp[i - 1][j];
		}
	}

	cout << dp[n][k];
}