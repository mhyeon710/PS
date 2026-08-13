#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <bool> v(6);
    for (int i=0; i<N; i++) {
        int x; cin >> x;
        v[x] = 1;
    }

    int cnt = 0;
    for (int i=1; i<=5; i++) {

        if (v[i]) cnt++;
    }

    if (cnt == 5) cout << "NO";
    else cout << "YES";
    return 0;
}