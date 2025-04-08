#include <iostream>
#include <queue>
using namespace std;

int n, num;
priority_queue<int, vector<int>, greater<int>> minheap;
priority_queue<int> maxheap;

// minheap이 위에, maxheap이 아래에 있는 모래시계 구조
// minheap.size() == maxheap.size() || minheap.size() + 1 = maxheap.size()
// (외친 수의 개수가 짝수개라면 중간에 있는 두 수 중에서 작은 수를 말해야 하므로)

int main() {
	ios::sync_with_stdio(0);	
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;

		if (i == 0) {
			maxheap.push(num);
		}
		else if (i == 1) {
			// minheap.top() >= maxheap.top() 이어야 함
			if (num >= maxheap.top()) {
				minheap.push(num);
			}
			else {
				minheap.push(maxheap.top());
				maxheap.pop();
				maxheap.push(num);
			}
		}
		else {
			maxheap.push(num);

			if (maxheap.top() > minheap.top()) {
				maxheap.pop();
				minheap.push(num);

				if (minheap.size() > maxheap.size()) {
					maxheap.push(minheap.top());
					minheap.pop();
				}
			}

			if (maxheap.size() - minheap.size() > 1) {
				minheap.push(maxheap.top());
				maxheap.pop();
			}
		}

		cout << maxheap.top() << '\n';
	}
}