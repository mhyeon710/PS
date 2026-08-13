#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

char c;
int N, M, T, x, y;
int main() {
    fio();
    cin >> N >> M;

    vector <int> v(N+M+1);
    set <int> dista[101], distb[101];
    for (int i=1; i<=N+M; i++) {
        cin >> x;
        v[i] = x;
        if (i<=N) dista[x].insert(i);
        else distb[x].insert(i);
    }

    cin >> T;
    for (int t=0; t<T; t++) {
        cin >> c;
        if (c == 'U') {
            cin >> x >> y;

            if (x <= N) {
                int before = v[x];
                dista[before].erase(x);

                v[x] = y;
                dista[y].insert(x);
            } else {
                int before = v[x];
                distb[before].erase(x);

                v[x] = y;
                distb[y].insert(x);
            }
            
        } else {
            int a = 0, b = 0;

            for (int i=1; i<=100; i++) {
                if (dista[i].empty()) continue;

                for (auto x:dista[i]) {
                    if (a) break;
                    a = x;
                }
            }

            for (int i=1; i<=100; i++) {
                if (distb[i].empty()) continue;

                for (auto x:distb[i]) {
                    if (b) break;
                    b = x;
                }
            }

            cout << a << ' ' << b << '\n';
        }
    }

    return 0;
}