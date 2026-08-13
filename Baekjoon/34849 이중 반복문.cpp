#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    ll N; cin >> N;
    N*=N;
    cout << (N <= 1e8 ? "Accepted" : "Time limit exceeded");
    return 0;
}