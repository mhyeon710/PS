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
        string s; cin >> s;
        
        int ans = 0;
        string before = "";
        for (int i=0; i<N-1; i++) {
            string now = s.substr(i, 2);
            string nowreverse = "";
            nowreverse += now[1];
            nowreverse += now[0];
            if (before != now && before != nowreverse) ans++;
            before = now;
        }
        cout << ans << '\n';
        
        // set <string> ss;
        // ss.insert(s.substr(2, N-2));
        // for (int i=1; i<N-2; i++) {
        //     string t = s.substr(0, i) + s.substr(i+2, N-1 - i-2 + 1);
        //     ss.insert(t);
        // }
        // ss.insert(s.substr(0, N-2));
        // cout << ss.size() << '\n';
    }
    return 0;
}