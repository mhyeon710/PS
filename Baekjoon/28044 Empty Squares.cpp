#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, K, E;
    cin >> N >> K >> E;

    vector <bool> v(N+1, 0);
    v[K] = 1;

    int a = E, b = N-E-K;
    return 0;
}
// E, N-E-K 2개 남음
// 9 3 3 -> 3 3 -> 3
// 12 4 4 -> 4
// 15 5 5 -> 
