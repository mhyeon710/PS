#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector <int> va(a), vb(b), vc(c), vd(d);
    for (int i=0; i<a; i++) cin >> va[i];
    for (int i=0; i<b; i++) cin >> vb[i];
    for (int i=0; i<c; i++) cin >> vc[i];
    for (int i=0; i<d; i++) cin >> vd[i];

    map <int, pii> m;
    for (int i=0; i<c; i++) {
        for (int j=0; j<d; j++) {
            m[vc[i]+vd[j]] = {vc[i], vd[j]};
        }
    }

    for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) {
            int now = va[i] + vb[j];
            if (m.find(-now) != m.end()) {
                cout << va[i] << ' ' << vb[j] << ' ' << m[-now].first << ' ' << m[-now].second;
                return 0;
            }
        }
    }

    return 0;
}