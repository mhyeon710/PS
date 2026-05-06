#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

ll candy[30001];
int N, M, K, u, v, p[30001], cnt[30001];

int find(int x) { return x == p[x] ? x : p[x] = find(p[x]); }
void Union(int x, int y) { 
    x = find(x); y = find(y);
    if (x != y) {
        if (x > y) {
            p[x] = y;
            cnt[y] += cnt[x];
            candy[y] += candy[x];
        } else {
            p[y] = x;
            cnt[x] += cnt[y];
            candy[x] += candy[y];
        }
    }
}

int main() {
    fio();
    cin >> N >> M >> K;

    for (int i=1; i<=N; i++) {
        p[i] = i;
        cnt[i] = 1;
        cin >> candy[i];
    }

    for (int i=0; i<M; i++) {
        cin >> u >> v;
        Union(u, v);
    }

    ll ans = 0;
    vector<pll> temp;
    for (int i=1; i<=N; i++) {
        if (find(i) == i && cnt[i] < K) {
            temp.push_back({cnt[i], candy[i]});
        }
    }

    vector<ll> dp(K, 0);
    for (auto [count, cdy] : temp) {
        for (int w = K - 1; w >= count; w--) {
            dp[w] = max(dp[w], dp[w - count] + cdy);
        }
    }

    for (int i = 0; i < K; i++) {
        ans = max(ans, dp[i]);
    }
    
    cout << ans;
    return 0;
}