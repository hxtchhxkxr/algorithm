#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++) {
		int len;
		cin >> len;
		v.push_back(len);
	}

	sort(v.begin(), v.end(), greater<int>());

	int result = -1;
	for (int i = 0; i < n - 2; i++) {
		if (v[i] < v[i + 1] + v[i + 2]) {
			result = v[i] + v[i + 1] + v[i + 2];
			break;
		}
	}

	cout << result;
}