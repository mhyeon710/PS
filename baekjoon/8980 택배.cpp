#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, C, M;
    cin >> N >> C >> M;

    vector <pair<pii, int>> v(M);
    for (int i=0; i<M; i++) {
        cin >> v[i].first.first >> v[i].first.second >> v[i].second;
    }

    sort(v.begin(), v.end());

    for (auto [p, c]: v) {
        auto [x, y] = p;
        cout << x << ' ' << y << ' ' << c << endl;;
    }

    return 0;
}