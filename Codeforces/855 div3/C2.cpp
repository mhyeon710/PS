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
 
        priority_queue<ll> pq;
 
        ll ans = 0;
        vector <ll> v;
        for (int i=0; i<N; i++) {
            ll x; cin >> x;
            if (x) {
                pq.push(x);
            } else if (!pq.empty()) {
                ans += pq.top();
                pq.pop();
            }
        }
 
        cout << ans << '\n';         
    }
 
    return 0;
}