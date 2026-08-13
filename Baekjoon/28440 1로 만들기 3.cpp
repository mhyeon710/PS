#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    ll x;
    cin >> x;

    if (x == 1) { cout << 0; return 0;}

    set <ll> s;
    queue <pair<ll, int>> q;
    s.insert(x);
    q.push({x, 0});

    while (!q.empty()) {
        auto [nxt, cnt] = q.front(); q.pop();
        if (s.find(nxt) == s.end()) continue;

        if (nxt == 1) { cout << cnt; break; }
        if (nxt%3 == 0 && s.find(nxt/3) == s.end()) { q.push({nxt/3, cnt+1}); s.insert(nxt/3); }
        if (nxt%2 == 0 && s.find(nxt/2) == s.end()) { q.push({nxt/2, cnt+1}); s.insert(nxt/2); }
        if (s.find(nxt-1) == s.end()) { q.push({nxt-1, cnt+1}); s.insert(nxt-1); }
    }

    return 0;
}