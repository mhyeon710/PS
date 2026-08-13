#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int m1, n1, m2, n2, m3, n3, diff;
    cin >> m1 >> n1 >> m2 >> n2 >> m3 >> n3;

    for (int i=0; i<100; i++) {
        if (i%3 == 0) {
            diff = min(n1, m2-n2);
            n1 -= diff;
            n2 += diff; 
        } else if (i%3 == 1) {
            diff = min(n2, m3-n3);
            n2 -= diff;
            n3 += diff;
        } else {
            diff = min(n3, m1-n1);
            n3 -= diff;
            n1 += diff;
        }
    }

    cout << n1 << '\n' << n2 << '\n' << n3 << endl;
    return 0;
}