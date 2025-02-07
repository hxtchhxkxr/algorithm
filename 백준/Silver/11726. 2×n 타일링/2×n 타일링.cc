#include <iostream>
using namespace std;

const int MOD = 10007;
long long comb[1002][1002];

void calcCombination(int n) {
    for (int i = 0; i <= n; i++) {
        comb[i][0] = comb[i][i] = 1;
        for (int j = 1; j < i; j++) {
            comb[i][j] = (comb[i - 1][j - 1] + comb[i - 1][j]) % MOD;
        }
    }
}

int main() {
    int n;
    cin >> n;

    calcCombination(n);  

    int result = 0;

    for (int i = 0; i <= n / 2; i++) {  
        result = (result + comb[n - i][i]) % MOD;
    }

    cout << result;
}
