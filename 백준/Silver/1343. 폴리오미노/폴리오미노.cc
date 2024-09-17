#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    string result;

    while (!str.empty()) {
        if (str.find("XXXX", 0) == 0) {
            result.append("AAAA");
            str.erase(0, 4);
        }
        else if (str.find("XX.", 0) == 0) {
            result.append("BB.");
            str.erase(0, 3);
        }
        else if (str.find("XX", 0) == 0) {
            result.append("BB");
            str.erase(0, 2);
        }
        else if (str.find(".", 0) == 0) {
            result.append(".");
            str.erase(0, 1);
        }
        else {
            result = "-1";
            break;
        }
    }

    cout << result;
    return 0;
}
