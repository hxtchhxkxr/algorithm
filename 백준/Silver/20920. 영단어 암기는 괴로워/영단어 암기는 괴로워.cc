#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
	if (a.second != b.second) return a.second > b.second;
	if (a.first.length() != b.first.length()) return a.first.length() > b.first.length();
	return a.first < b.first;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	map<string, int> freq;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s.length() >= m) freq[s]++;
	}

	vector<pair<string, int>> words(freq.begin(), freq.end());

	sort(words.begin(), words.end(), cmp);

	for (auto& w : words) {
		cout << w.first << '\n';
	}
}