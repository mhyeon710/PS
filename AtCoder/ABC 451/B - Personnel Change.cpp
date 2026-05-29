#include <iostream>
#include <vector>
#include <algorithm>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int now[101], nxt[101];
int main() {
    fio();
    int N, M;
    cin >> N >> M;
    
    vector <pii> v(N);
    for (int i=0; i<N; i++) {
        cin >> v[i].first >> v[i].second;
        now[v[i].first]++;
    }

    for (int i=1; i<=M; i++) nxt[i] = now[i];

    for (int i=0; i<N; i++) {
        auto [a, b] = v[i];

        nxt[v[i].first]--;
        nxt[v[i].second]++;
    }

    for (int i=1; i<=M; i++) {
        cout << nxt[i] - now[i] << '\n';
    }
    return 0;
}