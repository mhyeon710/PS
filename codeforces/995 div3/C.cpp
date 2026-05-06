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
        int N, M, K, x;
        cin >> N >> M >> K;
 
        vector <int> v(M);
        set <int> s;
        for (int i=0; i<M; i++) cin >> v[i];
        for (int i=0; i<K; i++) {
            cin >> x;
            s.insert(x);
        }
 
        for (int i=0; i<M; i++) {
            int now = v[i];
 
            bool erase = false;
            if (s.find(now) == s.end()) {
                erase = true;
                s.insert(now);
            }
 
            if (s.size() == N) {
                cout << '1';
            } else cout << '0';
 
            if (erase) {
                s.erase(now);
            }
        }
 
        cout << '\n';
    }
    return 0;
}