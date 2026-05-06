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
 
        int mini = 2 * 1e9;
        int idx = -1;
        vector <int> v(N);
        for (int i=0; i<N; i++) {
            int x; cin >> x;
            v[i] = x;
            if (mini > x) {
                mini = x;
                idx = i;
            }
        }
 
        bool no = false;
        for (int i=idx; i<N-1; i++) {
            if (v[i] > v[i+1]) {
                no = true;
                break;
            }
        }
 
        if (no) cout << "-1\n";
        else cout << idx << '\n';
 
    }
    return 0;
}