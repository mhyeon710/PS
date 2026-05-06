#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

ll N, K, rem;
vector <ll> v;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

void dfs(int idx, ll l, int cnt) {
    if (idx == v.size()) {
        if (cnt == 0) return;
        ll add = N/l;

        if (cnt%2 == 1) rem += add;
        else rem -= add;

        return;
    }

    dfs(idx+1, l, cnt);

    ll g = gcd(l, v[idx]);
    ll lcm = l / g * v[idx];

    if (lcm <= N) dfs(idx+1, lcm, cnt+1); 
}

int main() {
    fio();
    cin >> N >> K;

    vector <ll> init(K);
    for (int i=0; i<K; i++) cin >> init[i];

    sort(init.begin(), init.end());
    
    for (int i=0; i<K; i++) {
        bool can = true;
        for (int j=0; j<i; j++) {
            if (init[i] % init[j] == 0) {
                can = false;
                break;
            }
        }
        if (can) v.push_back(init[i]);
    }

    dfs(0, 1, 0);

    cout << N - rem;
    return 0;
}