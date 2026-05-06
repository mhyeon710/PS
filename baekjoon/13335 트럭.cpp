#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, W, L;
    cin >> N >> W >> L;
    
    vector <pii> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i].first;
        v[i].second = 0;
    }

    int t = 0, p = 0, w = 0;
    while (p < N) {
        for (int i=p; i<N; i++) {
            if (v[i].second == 0 && v[i].first + w > L) break;
            if (v[i].second == 0 && v[i].first + w <= L) {
                w += v[i].first;
                v[i].second++;
                break;
            }

            v[i].second++;

            if (v[i].second > W) {
                p++;
                w -= v[i].first;
            }
            // cout << p << ' ' << w << ' ' << i << endl;
        }

        // for (auto [a, b]: v) cout << a << ' ' << b << endl;
        // cout << endl;
        t++;
    }
    
    cout << t;
    return 0;
}