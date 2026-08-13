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
 
        vector <ll> a(N), b(M);
        for (int i=0; i<N; i++) cin >> a[i];
        for (int i=0; i<M; i++) cin >> b[i];
 
        sort(b.begin(), b.end());
        a.insert(a.begin(), -LLONG_MAX);
        N++;
 
        for (int i=1; i<N; i++) {
            auto it = lower_bound(b.begin(), b.end(), 0, [&](ll ta, ll){
                return ta - a[i] < a[i-1];
            });
 
            if (it == b.end()) continue;
            if (a[i] < a[i-1] && *it - a[i] < a[i-1]) continue;
 
            a[i] =  min((a[i] < a[i-1] ? LLONG_MAX : a[i]), (*it - a[i] < a[i-1] ? LLONG_MAX : *it - a[i]));
        }
 
        cout << (is_sorted(a.begin(), a.end()) ? "YES" : "NO") << "\n";
 
        // bool check = true;
        // int j = 0;
        // int before = min(a[0], b[0] - a[0]);
        // for (int i=1; i<N; i++) {
        //     while (1) {
        //         if (j == M) {
        //             check = false;
        //             break;
        //         }
 
        //         int mini = min(a[i], b[j] - a[i]);
        //         if (mini >= before) {
        //             a[i] = mini;
        //             break;
        //         }
        //         j++;
        //     }
        //     before = a[i];
        //     if (!check) break;
        // }
        
        // if (check) cout << "YES\n";
        // else cout << "NO\n";
    }
    return 0;
}