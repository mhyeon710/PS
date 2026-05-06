#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <array<int, 3>> v(3*N);
    for (int i=0; i<3*N; i++) {
        int x, y;
        cin >> x >> y;

        v[i] = {x, y, i+1};
    }

    sort(v.begin(), v.end());

    for (int i=0; i<3*N; i+=3) {
        cout << v[i][2] << ' ' << v[i+1][2] << ' ' << v[i+2][2] << '\n';
    }
    return 0;
}