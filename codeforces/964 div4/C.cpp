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
        int N, S, M;
        cin >> N >> S >> M;
 
        vector <pii> v(N);
        for (int i=0; i<N; i++) {
            cin >> v[i].first >> v[i].second;
        }
 
        bool ans = false;
        if (v[0].first >= S) ans = 1;
        for (int i=1; i<N; i++) {
            if (v[i].first - v[i-1].second >= S) {
                ans = 1;
            }
        }
        if (M - v[N-1].second >= S) ans = 1;
 
        if (ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}