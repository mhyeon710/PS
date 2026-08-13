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
        int N, M;
        cin >> N >> M;
 
        vector <int> v[N];
        for (int i=0; i<N; i++) {
            for (int j=0; j<M; j++) {
                int x; cin >> x;
                v[i].push_back(x);
            }
            sort(v[i].begin(), v[i].end());
        }
        
        vector <pii> f;
        for (int i=0; i<N; i++)
            f.push_back({v[i][0], i});
        
        sort(f.begin(), f.end());
 
        // for (auto x:f) cout << x.second << ' ';
        // cout << endl << endl;
 
        bool check = false;
        int cnt = 0;
        for (int j=0; j<M; j++) {
            for (int i=0; i<N; i++) {
                int idx = f[i].second;
                // cout << v[idx][j] << ' ' << cnt << endl;
                    
                if (v[idx][j] != cnt) {
                    check = true;
                    break;
                }
                cnt++;
            }
            if (check) break;
        }
 
        if (check) cout << -1 << '\n';
        else {
            for (int i=0; i<N; i++) {
                cout << f[i].second + 1 << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}