#include <iostream>
#include <map>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	map<string, int> map;

	for (int i = 0; i < n; i++) {
		string s1;
		cin >> s1;
		map[s1]++;
	}

	vector<string> v;
	int cnt = 0;

	for (int i = 0; i < m; i++) {
		string s2;
		cin >> s2;

		if (map[s2]) {
			cnt++;
			v.push_back(s2);
		}
	}

	cout << cnt << '\n';

	sort(v.begin(), v.end());
	for (string x : v) {
		cout << x << '\n';
	}
}