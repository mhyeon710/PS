#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int ans[6];
int main() {
    fio();
    int N; cin >> N;

    vector <pii> v(N);
    for (int i=0; i<N; i++) {
        int x, y;
        cin >> x >> y;
        if (x > y) swap(x, y);
        v[i] = {x, y};
    }

    for (int t=1; t<=5; t++) {
        int cnt = 0;
        for (int i=0; i<N; i++) {
            if (v[i].first == t || v[i].second == t) cnt++;
            else {
                ans[t] = max(ans[t], cnt);
                cnt = 0;
            }
        }
        ans[t] = max(ans[t], cnt);
    }
    
    int maxi = 0, idx = 0;
    for (int i=1; i<=5; i++) {
        if (maxi < ans[i]) {
            maxi = ans[i];
            idx = i;
        }
    }

    cout << maxi << ' ' << idx;
    return 0;
}