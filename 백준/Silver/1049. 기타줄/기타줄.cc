#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> package;
	vector<int> each;

	for (int i = 0; i < m; i++) {
		int p, e;
		cin >> p >> e;
		package.push_back(p);
		each.push_back(e);
	}

	sort(package.begin(), package.end());
	sort(each.begin(), each.end());

	int q = n / 6;	// 몫
	int r = n % 6;	// 나머지

	int packageMin = package[0];
	int eachMin = each[0];
	int price1, price2, price3;

	price1 = q * packageMin + r * eachMin;
	price2 = (q + 1) * packageMin;
	price3 = n * eachMin;

	int result = min({ price1,price2,price3 });
	cout << result;
}