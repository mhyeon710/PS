#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();

    int N; cin >> N;

    vector <int> v(N);
    for (int i=0; i<N; i++) cin >> v[i];

    if (N == 1) {
        cout << 1 << '\n';
        return 0;
    }

    if (v[0] >= v[1]) cout << 1 << '\n';
    for (int i=1; i<N-1; i++) {
        if (v[i-1] <= v[i] && v[i] >= v[i+1]) cout << i+1 << '\n';
    }
    if (v[N-2] <= v[N-1]) cout << N << '\n';

    return 0;
}