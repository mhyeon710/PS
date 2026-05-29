#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstring>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;
    for (int t=1; t<=T; t++) {
        int N, L;
        cin >> N >> L;

        int dp[L+1];
        memset(dp, 0, sizeof(dp));

        for (int i=0; i<N; i++) {
            int a, b;
            cin >> a >> b;
            
            for (int j=L; j>=b; j--) {
                dp[j] = max(dp[j], dp[j-b] + a);
            }
        }

        int ans = 0;
        cout << "#" << t << " " << dp[L] << '\n';
    }

    return 0;
}