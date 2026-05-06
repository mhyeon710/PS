#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    vector <int> p;

    p.push_back(2);
    for (int i=3; i<=211; i++) {
        bool can = true;
        for (auto x:p) {
            if (i%x == 0) {
                can = false;
                break;
            }
        }

        if (can) p.push_back(i);
    }

    vector <bool> prime(212, 0);
    for (auto x: p) prime[x] = 1;

    int P; cin >> P;
    vector <ll> dp(212, 0);

    dp[2] = 1;
    for (int i=3; i<=P; i++) {
        if (!prime[i]) continue;
        for (int j=i-1; j>=max(2, i-14); j--) {
            if (prime[j])
            dp[i] += dp[j];
        }
    }

    cout << dp[P];
    return 0;
}