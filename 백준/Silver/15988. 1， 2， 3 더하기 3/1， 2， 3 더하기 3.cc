#include <iostream>
using namespace std;
typedef long long ll;

int MOD = 1e9 + 9;
ll dp[1000002];

int main() {
	ios::sync_with_stdio(0);	
	cin.tie(0);

	int t;
	cin >> t;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 4; i <= 1000000; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
	}

	while (t--) {
		int n;
		cin >> n;
		cout << dp[n] << '\n';
	}
}
