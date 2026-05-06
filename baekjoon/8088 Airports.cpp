#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <pii> v(N);
    for (int i=1; i<=N; i++) {
        int x; cin >> x;
        v[i-1] = {-x, i};
    }

    sort(v.begin(), v.end());

    for (int i=0; i<N; i++) {
        sort(v.begin(), v.end());
        if (v[0].first == 0) break;
        
        for (int j=1; j<N; j++) {
            if (v[0].first == 0) break;
            if (v[j].first == 0) break;
            cout << v[0].second << ' ' << v[j].second << '\n';
            v[0].first++;
            v[j].first++;
        }
    }

    return 0;
}