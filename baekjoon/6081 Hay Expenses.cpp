#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, Q;
    cin >> N >> Q;

    vector <int> v(N+1);
    for (int i=1; i<=N; i++) {
        int x;
        cin >> x;
        v[i] = v[i-1] + x;
    }

    for (int i=0; i<Q; i++) {
        int s, e;
        cin >> s >> e;
        cout << v[e] - v[s-1] << '\n';
    }
    return 0;
}