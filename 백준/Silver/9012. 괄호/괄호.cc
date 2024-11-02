#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string ps;
        cin >> ps;

        int cnt = 0;
        bool isValid = true;

        for (char ch : ps) {
            if (ch == '(') {
                cnt++;
            }
            else {
                cnt--;
            }

            if (cnt < 0) {
                isValid = false;
                break;
            }
        }

        if (isValid && cnt == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}