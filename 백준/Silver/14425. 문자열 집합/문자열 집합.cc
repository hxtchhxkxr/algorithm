#include <iostream>
#include <map>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	map<string, int> map;
	for (int i = 0;i < n;i++) {
		string s;
		cin >> s;
		map[s]++;
	}

	int cnt = 0;
	for (int i = 0;i < m;i++) {
		string s;
		cin >> s;

		if (map.count(s) > 0) cnt++;
	}

	cout << cnt;
}