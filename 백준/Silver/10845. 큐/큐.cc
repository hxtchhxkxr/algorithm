#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int queue[10000];
	int front = 0;
	int rear = 0;

	for (int i = 0; i < n; i++) {
		string inst;
		cin >> inst;

		if (inst == "push") {
			int x;
			cin >> x;

			queue[rear] = x;
			rear++;
		}
		else if (inst == "pop") {
			if (front == rear) {
				cout << -1 << '\n';
			}
			else {
				cout << queue[front] << '\n';
				front++;
			}
		}
		else if (inst == "size") {
			cout << rear - front << '\n';
		}
		else if (inst == "empty") {
			cout << (front == rear) << '\n';
		}
		else if (inst == "front") {
			if (front == rear) {
				cout << -1 << '\n';
			}
			else {
				cout << queue[front] << '\n';
			}
		}
		else if (inst == "back") {
			if (front == rear) {
				cout << -1 << '\n';
			}
			else {
				cout << queue[rear - 1] << '\n';
			}
		}
	}

	return 0;
}