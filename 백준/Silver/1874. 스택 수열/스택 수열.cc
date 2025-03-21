#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;

	stack<int> s;
	vector<char> v;

	int num = 1;
	int x;

	for (int i = 0; i < n; i++) {
		cin >> x;
		while (num <= x) {
			s.push(num);
			v.push_back('+');
			num++;
		}

		if (s.top() == x) {
			s.pop();
			v.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
}
