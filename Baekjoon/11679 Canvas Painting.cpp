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
        int N; cin >> N;

        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for (int i=0; i<N; i++) {
            ll x; cin >> x;
            pq.push(x);
        }

        ll ans = 0;
        while (pq.size() > 1) {
            ll a = pq.top(); pq.pop();
            ll b = pq.top(); pq.pop();
            ans += a+b;
            pq.push(a+b);
        }

        cout << ans << '\n';
    }
    return 0;
}