#include <iostream>
#include <deque>
using namespace std;

int main() {
	int n;
	cin >> n;

	deque<pair<int, int>> dq;
	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		dq.push_back(make_pair(num, i));	// <종이에 적힌 수, 풍선의 번호>
	}

	while (!dq.empty()) {
		cout << dq.front().second << ' ';	// 터진 풍선의 번호 출력

		int cur = dq.front().first;
		dq.pop_front();

		if (dq.empty()) break;

		// 풍선 안쪽 종이에 적힌 수가 양수일 때
		if (cur > 0) {
			for (int i = 0; i < cur - 1; i++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		// 풍선 안쪽 종이에 적힌 수가 음수일 때
		else {
			for (int i = 0; i < -cur; i++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
}