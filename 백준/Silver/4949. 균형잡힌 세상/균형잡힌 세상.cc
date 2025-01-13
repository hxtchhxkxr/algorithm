#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	while (1) {
		string str;
		getline(cin, str);

		if (str == ".") {
			break;
		}

		stack<char> s;
		bool isValid = true;

		for (char ch : str) {
			if (ch == '(' || ch == '[') {
				s.push(ch);
			}
			else if (ch == ')') {
				if (s.empty() || s.top() != '(') {
					isValid = false;
					break;
				}
				s.pop();
			}
			else if (ch == ']') {
				if (s.empty() || s.top() != '[') {
					isValid = false;
					break;
				}
				s.pop();
			}
		}

		if (s.empty() && isValid) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
}