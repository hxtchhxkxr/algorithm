#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, c;
vector<int> coor(n);

bool decision(int dist) {
	int cnt = 1;
	int prev = coor[0];

	for (int i = 1; i < n; i++) {
		if (coor[i] - prev >= dist) {
			cnt++;
			prev = coor[i];
		}
	}

	return cnt >= c;
}

int binary_search() {
	int low = 1;
	int high = coor[n - 1] - coor[0];
	int result = 0;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (decision(mid)) {
			result = mid;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	return result;
}

int main() {
	cin >> n >> c;
	coor.resize(n);

	for (int i = 0; i < n; i++) {
		cin >> coor[i];
	}
	sort(coor.begin(), coor.end());

	cout << binary_search();
}