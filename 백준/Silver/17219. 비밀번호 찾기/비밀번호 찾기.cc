#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    unordered_map<string, string> siteMap;
    for (int i = 0; i < n; i++) {
        string address, password;
        cin >> address >> password;
        siteMap[address] = password;  
    }

    for (int i = 0; i < m; i++) {
        string findAddress;
        cin >> findAddress;
        cout << siteMap[findAddress] << "\n"; 
    }

    return 0;
}