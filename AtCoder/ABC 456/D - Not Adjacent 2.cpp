#include <iostream>
#include <vector>
#define MOD     998244353
#define ll      long long
using namespace std;

ll dp[3];
int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(false);

    string s; cin >> s;

    for (int i=0; i<s.size(); i++) {
        if (s[i] == 'a') dp[0] = (dp[0] + dp[1] + dp[2] + 1) % MOD;
        if (s[i] == 'b') dp[1] = (dp[0] + dp[1] + dp[2] + 1) % MOD;
        if (s[i] == 'c') dp[2] = (dp[0] + dp[1] + dp[2] + 1) % MOD;
    }

    cout << (dp[0] + dp[1] + dp[2]) % MOD;
    return 0;
}
