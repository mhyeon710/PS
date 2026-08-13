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
        int N; cin >> N;

        vector <vector<int>> v(N+1);
        for (int i=1; i<=N; i++) {
            int x; cin >> x;
            v[x].push_back(i);
        }

        bool can = true;

        set <int> s;
        for (int i=N; i>=1; i--) {
            if (v[i].empty()) continue;

            int vsize = v[i].size();
            int l = v[i][0], r = v[i][vsize-1];

            auto it = s.upper_bound(l);
            if (it != s.end() && *it < r) {
                can = false;
                break;
            }

            for (auto x: v[i]) s.insert(x);
        }

        if (can) cout << "Yes\n";
        else cout << "No\n";
    }
    
    return 0;
}