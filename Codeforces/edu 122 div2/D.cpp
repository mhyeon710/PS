#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
ll cnt[1001];
int main() {
    fio();
 
    for (int i=1; i<=1000; i++) cnt[i] = 1e9;
 
    cnt[1] = 0;
    for (int i=1; i<=1000; i++) {
        for (int j=i; j>=1; j--) {
            if (i + i/j > 1000) continue;
            cnt[i + i/j] = min(cnt[i + i/j], cnt[i] + 1);
        }
    }
 
    int T; cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
 
        vector <ll> b(N), c(N);
        for (int i=0; i<N; i++) cin >> b[i];
        for (int i=0; i<N; i++) cin >> c[i];
 
        vector <pll> v;
        for (int i=0; i<N; i++) {
            v.push_back({cnt[b[i]], c[i]});
        }
 
        // sort(v.begin(), v.end());
 
        map <ll, ll> m;
        for (int i=0; i<N; i++) {
            vector <pll> tmp;
            for (auto it=m.begin(); it!=m.end(); it++) {
                tmp.push_back({it->first + v[i].first, it->second + v[i].second});
            }
            tmp.push_back(v[i]);
 
            for (auto x:tmp) {
                if (m.find(x.first) == m.end()) {
                    m[x.first] = x.second;
                } else {
                    m[x.first] = max(m[x.first], x.second);
                }
            }
        }
 
        ll ans = 0;
        for (auto it=m.begin(); it!=m.end(); it++) {
            if (it->first <= K) {
                ans = max(ans, it->second);
            } else break;
        }
 
        cout << ans << '\n';
    }
    return 0;
}