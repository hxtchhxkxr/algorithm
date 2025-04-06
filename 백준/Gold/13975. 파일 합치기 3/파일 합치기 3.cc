#include <iostream>
#include <queue>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int k;
		cin >> k;
		priority_queue<ll, vector<ll>, greater<ll>> pq;

		for (int i = 0;i < k;i++) {
			ll size;
			cin >> size;
			pq.push(size);
		}

		ll result = 0;
		while (pq.size() >= 2) {
			ll sum = 0;
			sum += pq.top();
			pq.pop();
			sum += pq.top();
			pq.pop();
			pq.push(sum);
			result += sum;
		}

		cout << result << '\n';
	}
}