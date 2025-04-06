#include <iostream>
#include <queue>
using namespace std;

int n, x;
int arr[100001];

bool decision(int line) {
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0;i < line;i++) {
		pq.push(0);	// line 개수만큼 0 채워서 초기화
	}

	for (int i = 0;i < n;i++) {
		int min = pq.top();	
		pq.pop();	// 최솟값 pop하고
		pq.push(min + arr[i]);	// 최솟값에 다음 시간 더해서 채워넣음
	}

	int maxTime = 0;
	while (!pq.empty()) {
		maxTime = max(maxTime, pq.top());	// 최소 힙에서 최댓값 구하기
		pq.pop();
	}

	return maxTime <= x;	// 최댓값이 주어진 남은 시간보다 작거나 같으면 성공
}

int minimization() {
	int low = 1;
	int high = n;
	int result = high;

	while (low <= high) {
		int mid = (low + high) / 2;
		if (decision(mid)) {
			result = mid;     
			high = mid-1;
		}
		else {
			low = mid + 1;     
		}
	}
	return result;
}

int main() {
	cin >> n >> x;
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}
	cout << minimization();
}