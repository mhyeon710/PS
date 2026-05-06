#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int f[200001], g[200001];
void initf   (int N)         { for (int i=1; i<=N; i++) f[i] = i; }
void initg   (int N)         { for (int i=1; i<=N; i++) g[i] = i; }
int  findf   (int x)         { return x == f[x] ? x : f[x] = findf(f[x]); }
int  isUnionf(int x, int y)  { x = findf(x); y = findf(y); return x == y; }
void Unionf  (int x, int y)  { x = findf(x); y = findf(y); x > y ? f[x] = y : f[y] = x; }
int  findg   (int x)         { return x == g[x] ? x : g[x] = findg(g[x]); }
int  isUniong(int x, int y)  { x = findg(x); y = findg(y); return x == y; }
void Uniong  (int x, int y)  { x = findg(x); y = findg(y); x > y ? g[x] = y : g[y] = x; }
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N, M1, M2, u, v;
        cin >> N >> M1 >> M2;
 
        vector <pii> fedge;
        for (int i=0; i<M1; i++) {
            cin >> u >> v;
            if (u > v) swap(u, v);
            fedge.push_back({u, v});
        }
 
        sort(fedge.begin(), fedge.end());
 
        initg(N);        
        for (int i=0; i<M2; i++) {
            cin >> u >> v;
            Uniong(u, v);
        }
        
        initf(N);
        int ans = 0;
        for (int i=0; i<M1; i++) {
            u = fedge[i].first;
            v = fedge[i].second;
            if (findg(g[u]) != findg(g[v])) ans++;
            else Unionf(u, v);
        }
 
        for (int i=1; i<=N; i++) {
            if (findf(f[i]) != findg(g[i])) {
                ans++;
                Unionf(i, findg(i));
            }
        }
 
        cout << ans << '\n';
    }
    return 0;
}