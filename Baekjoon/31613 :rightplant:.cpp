#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    int cnt = 0;
    vector <int> v(N+1);

    int now = N;
    for (int i=1; i<=N/2; i++) {
        int a = now - 1;
        int b = now;
        if (i%2) v[i] = a, v[N-i+1] = b;
        else v[i] = b, v[N-i+1] = a;
        now-=2;
    }
    if (N%2) v[N/2+1] = 1;

    for (int i=1; i<=N; i++) cout << v[i] << ' ';
    return 0;
}