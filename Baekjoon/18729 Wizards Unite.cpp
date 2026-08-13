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
        int N, K;
        cin >> N >> K;

        vector <ll> v(N);
        for (int i=0; i<N; i++) {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());
        
        ll ans = 0;
        for (int i=K; i<N; i++) {
            ans += v[i];
        }

        cout << max(v[0], ans) << '\n';
    }
    return 0;
}