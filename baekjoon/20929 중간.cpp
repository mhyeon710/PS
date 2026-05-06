#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    int ia = 1, ib = 1, s = N;
    while (s > 1) {
        cout << "? A " << ia + s/2 - 1 << endl;
        int a; cin >> a;

        cout << "? B " << ib + s/2 - 1 << endl;
        int b; cin >> b;

        if (a < b) ia += s/2;
        else ib += s/2;
        
        s/=2;
    }

    cout << "? A " << ia << endl;
    int va; cin >> va;

    cout << "? B " << ib << endl;
    int vb; cin >> vb;

    cout << "! " << min(va, vb) << endl;
    return 0;
}