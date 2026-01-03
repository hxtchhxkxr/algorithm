#include <iostream>
#include <map>
using namespace std;

typedef long long ll;

int main() {
	int n;
	cin >> n;

	map<ll, ll>m;

	while (n--) {
		ll num;
		cin >> num;
		m[num]++;
	}

	ll bestKey = 0;
	ll maxVal = -(1LL << 63);

	for (auto& p : m) {
		if (p.second > maxVal) {
			maxVal = p.second;
			bestKey = p.first;
		}
	}

	cout << bestKey;
}