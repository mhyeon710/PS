#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

ll N, H, Q, T, a, b;
int main() {
    fio();
    cin >> N >> H;

    map<ll, ll> m;
    for (int i=0; i<N; i++) {
        cin >> a >> b;
        m[a]++;
        m[b+1]--;
    }

    vector <ll> v;
    ll now = 0, s = 1;
    
    for (auto x : m) {
        if (now == 0 && s < x.first) {
            v.push_back(x.first - s);
        }
        
        now += x.second;
        
        if (now == 0) {
            s = x.first;
        }
    }
    
    if (now == 0 && s <= H) {
        v.push_back(H - s + 1);
    }

    sort(v.begin(), v.end());
    
    vector <ll> sum;
    sum.push_back(0);
    for (auto x:v) {
        sum.push_back(sum[sum.size()-1] + x);
    }

    cin >> Q;
    while (Q--) {
        cin >> T;
        ll idx = lower_bound(v.begin(), v.end(), T) - v.begin();
        ll cnt = v.size() - idx;
        ll ans = sum[v.size()] - sum[idx] - cnt * (T-1);
        cout << ans << '\n';
    }
    return 0;
}