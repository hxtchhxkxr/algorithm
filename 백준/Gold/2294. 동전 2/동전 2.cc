#include <iostream>
using namespace std;

int v[102];	// 동전의 가치
int dp[10002];

int main() {
	int n, k;
	cin >> n >> k;

	for (int i = 1;i <= n;i++) {
		cin >> v[i];
	}

	for (int i = 1; i <= k; i++) {
		dp[i] = 100000;
	}

	for (int i = 1;i <= n;i++) {
		for (int j = v[i];j <= k;j++) {
			dp[j] = min(dp[j], dp[j - v[i]] + 1);
		}
	}
	
	cout << ((dp[k] != 100000) ? dp[k] : -1);
}