#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int N, a, b, c, ans, last;
pii t[100001];
bool v[100001], br;

void trav(int now) {
    auto [l, r] = t[now];
    v[now] = 1;

    if (br) return;

    if (l != -1 && !v[l]) { ans++; trav(l); }

    if (br) return;
    
    if (r != -1 && !v[r]) { ans++; trav(r); }

    if (now == last) br = true;
    if (br) return;
    ans++;
}

void mid(int now) {
    auto [l, r] = t[now];

    if (l != -1) mid(l);
    last = now;
    if (r != -1) mid(r);
}

int main() {
    fio();
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> a >> b >> c;
        t[a] = {b, c};
    }

    mid(1);
    // cout << last << endl;

    trav(1);

    cout << ans;
    return 0;
}