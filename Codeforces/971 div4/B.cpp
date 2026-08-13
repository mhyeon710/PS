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
 
        vector <int> v;
        for (int i=0; i<N; i++) {
                string s; cin >> s;
            for (int j=1; j<=4; j++) {
                if (s[j-1] == '#') {
                    v.push_back(j);
                    break;
                }
            }
        }
 
        for (int i=v.size()-1; i>=0; i--) {
            cout << v[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}