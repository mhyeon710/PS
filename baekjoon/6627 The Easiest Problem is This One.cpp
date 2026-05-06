#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    while (1) {
        ll N;
        cin >> N;
        if (!N) break;

        ll sn = 0;
        ll temp = N;
        while (temp) {
            sn += temp%10;
            temp/=10;
        }

        ll m = 11;
        while (1) {
            ll multi = N * m;
            ll ts = 0;
            while (multi) {
                ts += multi%10;
                multi/=10;
            }
            if (sn == ts) break;
            m++;
        }
        cout << m << '\n';
    }
    return 0;
}