#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    int N, M;
    cin >> N >> M;

    vector <string> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int ans = 0;
    for (int i=0; i<M; i++) {
        string s, f;
        
        cin >> s;
        auto it = lower_bound(v.begin(), v.end(), s);
        if (it != v.end()) {
            f = v[it - v.begin()];
        }
        
        int ssize = s.size();
        for (int i=0; i<ssize; i++) {
            if (s[i] != f[i]) {
                break;
            }
            if (i == ssize-1) ans++;
        }
    }

    cout << ans;
    return 0;
}