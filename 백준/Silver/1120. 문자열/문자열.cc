#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int len = b.length() - a.length() + 1;
    int cnt[50] = { 0 };  

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < a.length(); j++) {
            if (a[j] != b[i + j]) {  
                cnt[i]++;
            }
        }
    }

    sort(cnt, cnt + len);

    cout << cnt[0];  

    return 0;
}