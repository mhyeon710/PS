#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    ll N, M, k;
    cin >> N >> M >> k;

    ll mini = 1e7;
    for (int i=0; i<M; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        if (w < mini) mini = w;
    }

    cout << mini * (k-1);
    return 0;
}