#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    fio();
    int N, M;
    cin >> N >> M;

    int ans = 2e9;
    for (int i = 0; i < M; i++) {
        int u, d;
        cin >> u >> d;
        
        int mini = (N * d) / (u + d) + 1;
        if (mini <= N) {
            ans = min(ans, mini * u - (N-mini) * d);
        }
    }

    cout << ans;
    return 0;
}