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
    for (int i=0; i<N; i++) {
        cin >> v[i];
    }

    vector <bool> check(N, 0);
    for (int t=0; t<4; t++) {
        int now = 0;
        for (int i=0; i<N; i++) {
            if (!check[i] && v[i] > now) {
                check[i] = 1;
                now = v[i];
            }
        }
    }

    int cnt = 0;
    for (int i=0; i<N; i++) {
        if (check[i]) cnt++;
    }

    if (cnt == N) cout << "YES";
    else cout << "NO";
    return 0;
}   