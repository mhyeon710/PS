#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
 
    vector <int> v(500);
    for (int i=0; i<500; i++) {
        v[i] = i * (i+1) / 2;
    }
 
    while (T--) {
        int k; cin >> k;
 
        vector <pii> cord;
        int cnt = 0;
        while (k) {
            int idx = 0;
            for (int i=1; i<500; i++) {
                if (k >= v[i]) {
                    idx = i;
                }
            }
 
            cord.push_back({cnt * 1000, cnt});
            for (int i=cnt*1000 + 1; i<=cnt*1000 + idx; i++) {
                cord.push_back({i, cnt});
            }
 
            k -= v[idx];
            cnt++;
        }
 
        cout << cord.size() << '\n';
        for (auto p:cord) {
            cout << p.first << ' ' << p.second << '\n';
        }
    }
    return 0;
}