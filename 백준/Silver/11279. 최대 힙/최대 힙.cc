#include <iostream>
#include <queue>
using namespace std;
typedef long long ll;

int main() {
	ios::sync_with_stdio(0);	
	cin.tie(0);

	int n;
	cin >> n;

	priority_queue<ll> pq;

	while (n--) {
		int x;
		cin >> x;

		if (x == 0) {
			if (!pq.empty()) {
				cout << pq.top() << '\n';
				pq.pop();
			}
			else {
				cout << 0 << '\n';
			}
		}
		else {
			pq.push(x);
		}
	}
}