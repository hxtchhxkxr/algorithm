#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		stack<char> s;
		for (char c : str) {
			if (!s.empty() && (s.top() == c)) {
				s.pop();
			}
			else {
				s.push(c);
			}
		}

		if (s.empty()) cnt++;
	}

	cout << cnt;
}