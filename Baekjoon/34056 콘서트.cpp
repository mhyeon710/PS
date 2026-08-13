#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

vector <ll> v(200001);
int main() {
    fio();

    int N;
    cin >> N;
    for (int i=1; i<=N; i++) {
        cin >> v[i];
    }

    int Q;
    cin >> Q;
    while (Q--) {
        ll q, c, x;
        cin >> q >> c;

        if (q == 1) {
            cin >> x;
            ll temp = x;
            for (int i=c+1; i<=N; i++) {
                if (v[i] <= temp) {
                    temp -= v[i];
                    v[i] *= 2;
                } else {
                    v[i] += temp;
                    break;
                }
            }

            for (int i=c; i>=0; i--) {
                if (v[i] <= x) {
                    x -= v[i];
                    v[i] *= 2;
                } else {
                    v[i] += x;
                    break;
                }
            }
        } else cout << v[c] << '\n';
    }

    return 0;
}