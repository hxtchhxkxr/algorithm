#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int deque[20001]; 
    int front = 10000; 
    int rear = 10000;  

    for (int i = 0; i < n; i++) {
        string inst;
        cin >> inst;

        if (inst == "push_front") {
            int x;
            cin >> x;

            front--;
            deque[front] = x;
        }
        else if (inst == "push_back") {
            int x;
            cin >> x;

            deque[rear] = x; 
            rear++;
        }
        else if (inst == "pop_front") {
            if (front == rear) {
                cout << -1 << '\n';
            }
            else {
                cout << deque[front] << '\n';
                front++;
            }
        }
        else if (inst == "pop_back") {
            if (front == rear) {
                cout << -1 << '\n';
            }
            else {
                rear--;
                cout << deque[rear] << '\n'; 
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
                cout << deque[front] << '\n'; 
            }
        }
        else if (inst == "back") {
            if (front == rear) {
                cout << -1 << '\n';
            }
            else {
                cout << deque[rear - 1] << '\n'; 
            }
        }
    }

    return 0;
}
