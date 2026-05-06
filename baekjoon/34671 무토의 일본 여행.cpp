// map
#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M, Q;
    cin >> N >> M >> Q;

    map <pii, int> m;
    for (int i=0; i<M; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        
        if (u > v) swap(u, v);

        if (m.find({u, v}) != m.end()) {
            m[{u, v}] = min(m[{u, v}], c);
        } else {
            m[{u, v}] = c;
        }
    }

    for (int i=0; i<Q; i++) {
        int u, v;
        cin >> u >> v;
        
        if (u > v) swap(u, v);

        if (m.find({u, v}) != m.end()) {
            cout << m[{u, v}] << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    
    return 0;
}