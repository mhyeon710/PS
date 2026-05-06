#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int dp[100001];
int main() {
    fio();
    int N; cin >> N;
    for (int i=1; i<=N; i++) {
        dp[i] = i;
        for (int j=1; i-j*j>=0; j++) {
            dp[i] = min(dp[i], dp[i-j*j] + 1);
        }
    }
    cout << dp[N];
    return 0;
}