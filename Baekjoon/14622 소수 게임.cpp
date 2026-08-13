#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
#define MAX     5000000
using namespace std;

set <int> save;
bool check[5000000];
vector <ll> pa(3), pb(3);

int main() {
    fio();

    check[0] = check[1] = 1;
    for (ll i=2; i<MAX; i++) {
        if (check[i]) continue;
        for (ll j=i*i; j<MAX; j+=i) {
            check[j] = 1;
        }
    }

    ll sa = 0, sb = 0;

    int T; cin >> T;
    for (int i=0; i<T; i++) {
        int a, b;
        cin >> a >> b;

        if (check[a]) {
            if (pb[2] == 0) sb += 1000;
            else sb += pb[2];
        } else {
            if (save.find(a) != save.end()) {
                sa -= 1000;
            } else {
                save.insert(a);
                if (a > pa[0]) {
                    pa[2] = pa[1];
                    pa[1] = pa[0];
                    pa[0] = a;
                } else if (a > pa[1]) {
                    pa[2] = pa[1];
                    pa[1] = a;
                } else if (a > pa[2]){
                    pa[2] = a;
                }
            }
        }

        if (check[b]) {
            if (pa[2] == 0) sa += 1000;
            else sa += pa[2];
        } else {
            if (save.find(b) != save.end()) {
                sb -= 1000;
            } else {
                save.insert(b);
                if (b > pb[0]) {
                    pb[2] = pb[1];
                    pb[1] = pb[0];
                    pb[0] = b;
                } else if (b > pb[1]) {
                    pb[2] = pb[1];
                    pb[1] = b;
                } else if (b > pb[2]){
                    pb[2] = b;
                }
            }
        }
    }

    if (sa > sb) cout << "소수의 신 갓대웅";
    else if (sa < sb) cout << "소수 마스터 갓규성";
    else cout << "우열을 가릴 수 없음";

    return 0;
}