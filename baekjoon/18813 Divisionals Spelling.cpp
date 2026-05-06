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

    int ans = 0;
    for (int i=0; i<N; i++) {
        string s; cin >> s;
        bool can = true;

        vector <bool> cap(M, 0);
        for (auto c:s) {
            if (c - 'A' >= M || cap[c-'A']) {
                can = 0;
                break;
            }
            cap[c-'A'] = 1;
        }

        if (can) ans++;
    }

    cout << ans;
    return 0;
}