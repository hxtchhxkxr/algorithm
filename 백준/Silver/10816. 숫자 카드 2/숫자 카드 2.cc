#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	map<int, int> freq;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		freq[num]++;
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		int result;
		cin >> result;
		cout << freq[result] << ' ';
	}
}