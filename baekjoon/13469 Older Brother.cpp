#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;


int main() {
    fio();
    int q;
    cin >> q;

    vector <ll> v;
    for (ll i=2; i*i<=1e9; i++) {
        bool check = false;
        for (ll j=2; j*j<=i; j++) {
            if (i % j == 0) {
                check = true;
                break;
            }
        }
        if (!check) v.push_back(i);
    }

    bool check = false;
    for (auto x:v) {
        ll temp = 1;
        while (1) {
            temp *= x;
            if (temp > q) break;
            if (temp == q) {
                check = true;
                break;
            }
        }
        if (check) break;
    }

    bool isPrime = true;
    if (q == 1) isPrime= false;
    for (int i=2; i*i<=q; i++) {
        if (q % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    if (check) cout << "yes";
    else cout << "no";
    return 0;
}