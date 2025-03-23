#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string n;
	cin >> n;

	vector<int> v(n.length());
	bool isZeroExist = false;
	int sum = 0;

	for (int i = 0;i < n.length();i++) {
		v[i] = n[i] - '0';
		if (v[i] == 0) {
			isZeroExist = true;
		}
		sum += v[i];
	}

	sort(v.rbegin(), v.rend());

	if (isZeroExist && sum % 3 == 0) {
		for (int i = 0;i < v.size();i++) {
			cout << v[i];
		}
	}
	else {
		cout << -1;
	}
}