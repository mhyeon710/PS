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
        ll N, M, L;
        cin >> N >> M >> L;
 
        vector <pll> block;
        for (int i=0; i<N; i++) {
            ll x, y;
            cin >> x >> y;
            block.push_back({x, y-x+1});
        }
 
        vector <pll> jump;
        for (int i=0; i<M; i++) {
            ll x, y;
            cin >> x >> y;
            jump.push_back({x, y});
        }
 
        int ans = 0;
        int idx = 0;
        ll sj = 1;
        priority_queue <ll> pq;
        for (int i=0; i<N; i++) {
            while (idx < M && jump[idx].first <= block[i].first) {
                pq.push(jump[idx].second);
                idx++;
            }
            while (!pq.empty()) {
                if (sj <= block[i].second) {
                    sj += pq.top();
                    pq.pop();
                    ans++;
                }
                else {
                    break;
                }
            }
            if (sj <= block[i].second) {
                ans = -1;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}