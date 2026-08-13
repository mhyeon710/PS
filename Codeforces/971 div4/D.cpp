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
        ll N; cin >> N;
 
        set <pll> s;
        vector <pll> v;
        for (int i=0; i<N; i++) {
            ll x, y;
            cin >> x >> y;
            v.push_back({x, y});
            s.insert({x, y});
        }
 
        sort(v.begin(), v.end());
        
        ll ans = 0;
        for (int i=0; i<N-1; i++) {
            if (v[i].first == v[i+1].first) {
                if (v[i+1].second - v[i].second == 1) {
                    ans += N-2;
                }
            }
        }
 
        for (int i=0; i<N; i++) {
            pii a, b;
            if (v[i].second == 0) {
                a = {v[i].first + 1, 1};
                b = {v[i].first + 2, 0};
            }
            else {
                a = {v[i].first + 1, 0};
                b = {v[i].first + 2, 1};
            }
 
            if (s.find(a) != s.end() && s.find(b) != s.end()) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}