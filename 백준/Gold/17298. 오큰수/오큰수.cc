#include <iostream>
#include <stack>
using namespace std;

#define MAX 1000002
stack<int> s;
int arr[MAX];
int NGE[MAX];

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		while (!s.empty() && arr[i] >= s.top()) {
			s.pop();
		}
		s.empty() ? NGE[i] = -1 : NGE[i] = s.top();
		s.push(arr[i]);
	}

	for (int i = 0; i < n; i++) {
		cout << NGE[i] << ' ';
	}
}