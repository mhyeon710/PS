#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    int N, s, g, p, d;
    cin >> N >> s >> g >> p >> d;
    
    string str;
    cin >> str;

    int ans = 0, bfr = 0, limit, now;
    for (auto c:str) {
        if (c == 'D') {
            ans += d;
            continue;
        }

        if (c == 'B') limit = s;
        if (c == 'S') limit = g;
        if (c == 'G') limit = p;
        if (c == 'P') limit = d;

        now = limit-bfr-1;
        ans += now;
        bfr = now;
    }

    cout << ans;
    return 0;
}