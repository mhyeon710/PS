#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;

        vector <ll> v(N);
        for (int i=1; i<=N; i++) v[i-1] = i;

        for (int i=0; i<N-1; i++) {
            long double t= sqrt(v[i]+v[i+1]);
            if (t == (ll) t) swap (v[i], v[i-1]);
        }

        for (auto x:v) cout << x << ' '; cout << '\n';
    }

    return 0;
}