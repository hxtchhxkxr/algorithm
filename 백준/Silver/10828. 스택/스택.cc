#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int stack[10000] = { 0 };
	int idx = 0;

	for (int i = 0; i < n; i++) {
		string inst;
		cin >> inst;

		if (inst == "push") {
			int x;
			cin >> x;

			stack[idx] = x;
			idx++;
		}
		else if (inst == "pop") {
			if (idx == 0) {
				cout << -1 << '\n';
			}
			else {
				cout << stack[idx - 1] << '\n';
				stack[idx - 1] = 0;
				idx--;
			}

		}
		else if (inst == "size") {
			cout << idx << '\n';
		}
		else if (inst == "empty") {
			cout << (idx == 0) << '\n';
		}
		else if (inst == "top") {
			if (idx == 0) {
				cout << -1 << '\n';
			}
			else {
				cout << stack[idx - 1] << '\n';
			}
		}
	}

	return 0;
}