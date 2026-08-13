#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int Q; cin >> Q;
    while (Q--) {
        int N; cin >> N;

        vector <string> v(N);
        for (int i=0; i<N; i++) cin >> v[i];
        
        if (N == 1) {
            cout << "NO\n";
            continue;
        }

        bool satisfy = 1;
        for (auto s:v) {
            if (s.find('-') != string::npos) {
                satisfy = 0;
                break;
            }
        }
        
        for (int i=1; i<N; i++) {
            string a = v[0].substr(v[0].size()-2, 2);
            string b = v[i].substr(v[i].size()-2, 2);
            
            if (a != b) {
                satisfy = 0;
                break;
            }
        }

        if (satisfy) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}