#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    vector <ll> v(N);
    
    ll total = 0;
    for (int i=0; i<N; i++) {
        cin >> v[i];
        total += v[i];
    }

    if (N == 1 && v[0] == 1) {
        cout << "Happy";
        return 0;
    }

    for (int i=0; i<N; i++) {
        if (v[i] > total/2) {
            cout << "Unhappy";
            return 0;
        }
    }

    cout << "Happy";
    return 0;
}