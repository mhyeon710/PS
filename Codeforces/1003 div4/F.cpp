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
        int N, u, v;
        cin >> N;
 
        vector <int> a(N+1);
        for (int i=1; i<=N; i++) cin >> a[i];
 
        vector <int> g[N+1];
        for (int i=0; i<N-1; i++) {
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
 
        vector <int> ans(N+1);
        for (int i=1; i<=N; i++) {
            map <int, int> m;
            for (auto u:g[i]) {
                m[a[u]]++;
            }
            m[a[i]]++;
 
            for (auto x:m) {
                if (x.second >= 2)
                    ans[x.first] = 1;
            }
        }
 
        for (int i=1; i<=N; i++) 
            cout << ans[i];
        cout << '\n';
    }
    return 0;
}