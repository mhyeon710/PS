#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int S, D, I, L, N;
    cin >> S >> D >> I >> L >> N;

    cout << max(0, 4*N - S - D - I - L);
    return 0;
}