#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

bool v[1000001];
int main() {
    fio();

    vector <int> p;
    for (int i=2; i*i<=1000000; i++) {
        for (int j=i*i; j<=1000000; j+=i) {
            v[j] = 1;
        }
    }

    p.push_back(0);
    for (int i=2; i<=1000000; i++) {
        if (!v[i]) {
            p.push_back(i);
        }
    }

    int N; cin >> N;
    for (int i=0; i<N; i++) {
        int a, b;
        cin >> a >> b;

        int i1 = lower_bound(p.begin(), p.end(), a) - p.begin();
        int i2 = lower_bound(p.begin(), p.end(), b) - p.begin();
        if (p[i2] != b) i2--;

        int cnt = i2 - i1 + 1;
        if (cnt % 2 == 0) cout << -1 << '\n';
        else cout << p[(i1+i2)/2] << '\n';
    }
    return 0;
}