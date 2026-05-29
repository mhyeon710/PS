#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, Q;
    cin >> N >> Q;

    vector <int> v(N+1, 0);
    map <int, int> m;
    
    m[0] = N;
    while (Q--) {
        int q, x;
        cin >> q >> x;

        if (q == 1) {
            v[x]++;
            
            int val = v[x];
            m[val]++;
            m[val-1]--;
            if (m[val-1] == 0)
                m.erase(val-1);
        } else {
            int mini = 3e7;
            for (auto [k, val] : m) {
                mini = min(k, mini);
            }
            // cout << mini << '\n';
            
            int ans = 0;
            for (auto [k, val] : m) {
                // cout << k << ' ' << val << endl;
                if (k-mini >= x) ans += val;
            }

            cout << ans << '\n';
        }
    }

    return 0;
}

// 1, 1
// 2, 3
// 3, 0
// 4, 1
// 5, 4
// 6, 1

// 0개는 1개
// 1개는 3개
// 3개는 1개
// 4개는 1개