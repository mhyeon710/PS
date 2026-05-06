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
 
        set <int> in;
        vector <int> v, inot;
        for (int i=0; i<N; i++) {
            int x; cin >> x;
            v.push_back(x);
            in.insert(x);
        }
        for (int i=1; i<=N; i++) {
            if (in.find(i) == in.end()) {
                inot.push_back(i);
            }
        }
 
        int idx = 0;
        set <int> s;
        for (int i=0; i<N; i++) {
            if (s.find(v[i]) == s.end()) {
                cout << v[i] << ' ';
                s.insert(v[i]);
            }
            else {
                cout << inot[idx] << ' ';
                idx++;
            }
        }
        cout << '\n';
    }
    return 0;
}