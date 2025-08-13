#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int packageMin = INT_MAX;
	int eachMin = INT_MAX;

	for (int i = 0; i < m; i++) {
		int p, e;
		cin >> p >> e;
		packageMin = min(packageMin, p);
		eachMin = min(eachMin, e);
	}

	int q = n / 6;	// 몫
	int r = n % 6;	// 나머지
	int price1, price2, price3;

	price1 = q * packageMin + r * eachMin;
	price2 = (q + 1) * packageMin;
	price3 = n * eachMin;

	int result = min({ price1,price2,price3 });
	cout << result;
}