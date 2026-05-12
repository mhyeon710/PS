#include <iostream>
#include <vector>
#include <algorithm>

#define ll      long long
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;


int main() {
    fio();
    ll N, K, L;
    cin >> N >> K;

    vector<vector<ll>> v;
    v.resize(N);
    for (int i=0; i<N; i++) {
        cin >> L;

        for (int j=0; j<L; j++) {
            ll x; cin >> x;
            v[i].push_back(x);
        }
    }

    vector <ll> c;
    for (int i=0; i<N; i++) {
        ll x; cin >> x;
        c.push_back(x);
    }

    for (int i=0; i<N; i++) {
        ll cnt = v[i].size() * c[i];
        if (K > cnt) {
            K -= cnt;
            continue;
        } else {
            ll div = K % v[i].size();
            if (div == 0) div = v[i].size()-1;
            else div--;

            cout << v[i][div];
            break;
        }
    } 

    return 0;
}