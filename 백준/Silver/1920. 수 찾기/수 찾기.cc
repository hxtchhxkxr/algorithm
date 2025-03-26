#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int m;

vector<int> a;
vector<int> b;

bool binary_search(int x) {
	int low = 0;
	int high = n - 1;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (a[mid] == x) {
			return true;  
		}
		if (a[mid] > x) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}

	return false;  
}

int main() {
	ios::sync_with_stdio(0);	
	cin.tie(0);

	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cin >> m;
	b.resize(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < m; i++) {
		cout << (binary_search(b[i]) ? 1 : 0) << '\n';
	}
}