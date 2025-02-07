#include <iostream>
#include <stack>
using namespace std;

int main() {
	string str;
	cin >> str;

	stack<int> s;	// 쇠막대기 개수
	int cnt = 0;	// 조각 개수

	for (int i = 0; i < str.size(); i++)
	{
        if (str[i] == '(') {
            s.push(1);  
        }
        else { 
            s.pop();  

            if (str[i - 1] == '(') {
                cnt += s.size();
            }
            else {
                cnt++;
            }
        }
	}

	cout << cnt;
}