#include <iostream>
using namespace std;
using ll = long long;

ll power(ll a, ll b, ll c) {
	if (b == 1)return a % c;
	ll num = power(a, b / 2, c);
	ll numMod = (num * num) % c;
	return (b % 2 == 0) ? numMod : (numMod * a) % c;
}

int main() {
	ll a, b, c;
	cin >> a >> b >> c;
	cout << power(a, b, c);
}