#include <iostream>
#include <map>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		map<string, int> clothes;

		for (int i = 0; i < n; i++) {
			string name, type;
			cin >> name >> type;
			clothes[type]++;
		}

		int cnt = 1;
		for (auto item : clothes) {
			cnt *= (item.second + 1);
		}

		cout << cnt - 1 << '\n';
	}
}