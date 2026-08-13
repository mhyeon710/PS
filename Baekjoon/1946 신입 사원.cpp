#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N;
        cin >> N;

        vector <pii> v(N);
        for (int i=0; i<N; i++) {
            cin >> v[i].first >> v[i].second;
        }

        sort(v.begin(), v.end());

        int ans = 0;
        int now = N+1;
        for (auto [x, y]: v) {
            if (y < now) {
                ans++;
                now = y;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}