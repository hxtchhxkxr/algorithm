#include <iostream>
#include <stack>
using namespace std;

int main() {
	string str;
	cin >> str;

	int result = 0;
    int temp = 1;
	stack<char> s;

	for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            s.push('(');
            temp *= 2;
        }
        else if (str[i] == '[') {
            s.push('[');
            temp *= 3;
        }
        else if (str[i] == ')') {
            if (!s.empty() && s.top() == '(') {
                s.pop();
                if (str[i - 1] == '(') {
                    result += temp;
                    temp /= 2;
                }
                else {
                    temp /= 2;
                }
            }
            else {
                cout << 0;
                return 0;
            }
        }
        else if (str[i] == ']') {
            if (!s.empty() && s.top() == '[') {
                s.pop();
                if (str[i - 1] == '[') {
                    result += temp;
                    temp /= 3;
                }
                else {
                    temp /= 3;
                }
            }
            else {
                cout << 0;
                return 0;
            }
        }
	}

    cout << (s.empty() ? result : 0);
}