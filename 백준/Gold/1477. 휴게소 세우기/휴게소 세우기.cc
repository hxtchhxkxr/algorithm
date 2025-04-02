#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, l;
vector<int> coor;

bool decision(int len) {
	int cnt = 0;
	for (int i = 1; i < n + 2; i++) {
		int dist = coor[i] - coor[i - 1];
		cnt += (dist - 1) / len;
	}
	return cnt <= m;
}

int minimization() {
	int low = 1;
	int high = l;
	int result = 0;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (decision(mid)) {
			result = mid;
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}

	return result;
}

int main() {
	cin >> n >> m >> l;

	coor.push_back(0);
	for (int i = 0; i < n; i++) {
		int pos;
		cin >> pos;
		coor.push_back(pos);
	}
	coor.push_back(l);

	sort(coor.begin(), coor.end());

	cout << minimization();
}