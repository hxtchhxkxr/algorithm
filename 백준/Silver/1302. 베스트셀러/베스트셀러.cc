#include <iostream>
#include <map>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, int> m;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		m[s]++;
	}

	int max = 0;
	string result;

	for (auto cur : m) {
		if (cur.second > max) {
			max = cur.second;
			result = cur.first;
		}
		else if (cur.second == max && cur.first < result) {
			result = cur.first;
		}
	}

	cout << result;
}