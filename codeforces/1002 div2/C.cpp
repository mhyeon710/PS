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
        int N;
        cin >> N;
 
        vector <int> c;
        for (int i=0; i<N; i++) {
            vector <int> v;
            for (int j=0; j<N; j++) {
                int x; cin >> x;
                v.push_back(x);
            }
 
            int cnt = 0;
            for (int j=N-1; j>=0; j--) {
                if (v[j] == 1) cnt++;
                else break;
            }
            c.push_back(cnt);
        }
 
        sort(c.begin(), c.end());
 
        int now = 0;
        for (int i=0; i<N; i++) {
            if (c[i] < now) continue;
            now++;
        }
        cout << now << '\n';
    }
    return 0;
}