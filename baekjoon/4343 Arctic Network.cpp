#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

vector <int> p(501);
void init    (int N)        { for (int i=1; i<=N; i++) p[i] = i; }
int  find    (int x)        { return x == p[x] ? x : p[x] = find(p[x]); }
int  isUnion (int x, int y) { x = find(x); y = find(y); return x == y; }
void Union   (int x, int y) { x = find(x); y = find(y); x > y ? p[x] = y : p[y] = x; }

int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int S, P;
        cin >> S >> P;

        vector <pair<double, double>> v(P);
        for (int i=0; i<P; i++){
            cin >> v[i].first >> v[i].second;
        }

        vector <pair<double, pii>> edge;
        for (int i=0; i<P; i++) {
            for (int j=i+1;j<P; j++) {
                double dist = sqrt((v[i].first - v[j].first) * (v[i].first - v[j].first) + (v[i].second - v[j].second) * (v[i].second - v[j].second));
                edge.push_back({dist, {i, j}});
            }
        }

        sort(edge.begin(), edge.end());
        
        init(P);
        int cnt = 0;
        double ans = 0;
        for (auto [dist, vert]: edge) {
            if (cnt == P-S) break;

            auto [u, t] = vert;
            if (!isUnion(u, t)) {
                Union(u, t);
                cnt++;
                ans = dist;
            }
        }

        cout << fixed;
        cout.precision(2);
        cout << ans << '\n';
    }
    return 0;
}